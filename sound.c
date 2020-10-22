/*
 * sound.c
 *
 *  Created on: 1 October
 *      Author: Larry Poppins
 *
 *      Version 1.1:
 *      * I've added some more Note Values which allows to set the Octave without the ugly A/2.
 *      I've just put it all in from C2 all the way to B4, you're welcome to try it out, but I reckon at some point
 *      the driver is just going to shit itself and produce no sound what so ever.
 *
 *      * Fixed the PlayNoteSquare() function. It doesn't just toot it's horn for infinity, but actually
 *      listens to when you tell it to shut up.
 *
 *      Version 1.0:
 *      * created the damn thing. took me a while but now it's running. (sorta)
 */

//ideas:
//add Resolution controll for Wavetables

#include "board.h"
#include "sound.h"
#include <math.h>

#ifndef PI
#define PI 3.141592653
#define TIME_LOOP_PLAYNOTE_US 1322
#define TIME_LOOP_SQUARENOTE_US 148
#endif

//variables
static int sineTable[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static int triangleTable[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static int sawtoothTable[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static int squareTable[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

static int maxVol;
static int secondsPerBeat;
static bool displayNotes;

/**
 * takes the maximum volume to generate Wavetables, BPM to set BPM for notes
 */
void InitSound(int maxVolume, int BPM) { //, bool displayNotesv

	if (maxVolume > 4095) {
		maxVolume = 4095;
	}

	else if (maxVolume < 10) {
		maxVolume = 10;
	}

	if (BPM == 0) {
		BPM = 60;
	}

	else if (BPM > 300) {
		BPM = 300;
	}

	else if (BPM < 30) {}

	secondsPerBeat = 60 / BPM;
	maxVol = maxVolume;

	//generating sine wavetable
	for (float i = 0; i < 16; i++) {

		float temp = (float)sin((i / 16) * 2 * PI);

		sineTable[(int)i] = (temp + 1) * (maxVolume / 2);
	}

	//generating triangle wavetable
	for (float i = 0; i < 8; i++) {

		float temp = i / 8;
		triangleTable[(int)i] = temp * maxVolume;
	}

	for (float i = 8; i > 0; i--) {

		float temp = i / 8;
		triangleTable[(int)(16-i)] = temp * maxVolume;
	}

	//generating sawtooth wavetable
	for (float i = 0; i < 16; i++) {

		sawtoothTable[(int)i] = (i / 16) * maxVolume;
	}

	//generating squarewave wavetable
	for (int i = 0; i < 8; i++) {

		squareTable[i] = maxVolume;
	}

	for (int i = 0; i < 8; i++) {

		squareTable[i+8] = 0;
	}

	return;
}

void PlayNoteSquare(int hertz, int time_ms) {

	int count = 0;

	//convert note form hertz to time in u seconds
	float tempNote = (1000000.0f / hertz);

	//time correction to accomodate dac-sett-time
	int noteTime_us = (int)((tempNote - TIME_LOOP_SQUARENOTE_US) / 2);

	if (noteTime_us > 1) {

		int time_us = time_ms * 1000;

		while (count < time_us) {

			DAC0_setValue(maxVol);
			delay_us(noteTime_us);
			DAC0_setValue(0);
			delay_us(noteTime_us);
			count += noteTime_us + TIME_LOOP_SQUARENOTE_US;
		}
	}

	else {

		return;
	}
}

//sound generation
/**
 * takes a Note, a waveform and a time for how long to play the sound
 * the notes are given from C to B in the 4th octave. anything above F# 5 or Gb 5 can't be generated, the chip will
 * go commit die... in any other wave than square. (the function will default to that wave if the others aren't possible.)
 * for lower octaves just divide the note e.g. A/2 gives A in the 3rd octave -> this ugly mess is now resolved
 * add the Octave number right behind the Letter e.g. A3. If you forget the Note will default to the 4th octave.
 */
void PlayNote(int hertz, waveForm waveForm, int time_ms) {

	if (hertz > 741) {

	}

	else {

	int count = 0;

	//convert note form hertz to time in u seconds
	float tempNote = (1000000.0f / hertz);

	//time correction to accomodate dac-sett-time
	int noteTime_us = (int)(tempNote - TIME_LOOP_PLAYNOTE_US);

	int time_us = time_ms * 1000;

	switch (waveForm) {
		case sine:
			while (count < time_us) {
				for (int i = 0; i < 16; i++) {

					DAC0_setValue(sineTable[i]);
					delay_us(noteTime_us / 16);
				}
				count += noteTime_us + TIME_LOOP_PLAYNOTE_US;
			}
			break;

		case triangle:
			while (count < time_us) {
				for (int i = 0; i < 16; i++) {

					DAC0_setValue(triangleTable[i]);
					delay_us(noteTime_us / 16);
				}
				count += noteTime_us + TIME_LOOP_PLAYNOTE_US;
			}
			break;

		case sawtooth:
			while (count < time_us) {

				for (int i = 0; i < 16; i++) {

					DAC0_setValue(sawtoothTable[i]);
					delay_us(noteTime_us / 16);
				}
				count += noteTime_us + TIME_LOOP_PLAYNOTE_US;
			}
			break;

		case square:

			while (count < time_us) {

				for (int i = 0; i < 16; i++) {

					DAC0_setValue(squareTable[i]);
					delay_us(noteTime_us / 16);
				}
				count += noteTime_us + TIME_LOOP_PLAYNOTE_US;
			}
			break;
		}
	}

	return;
}



/**
 * allows noteduration to be specified in fractions with the provided beats per minutes in init.
 * If your big boy brain can't quite handle that level of music, just punch in 0 and I'll handle the rest
 */
void PlayNoteBPM(int hertz, waveForm waveForm, float fraction) {

	int time_ms = secondsPerBeat * fraction * 1000;
	PlayNote(hertz, waveForm, time_ms);
	return;
}



//generate custom  wave
//int* GenerateCustomWave(int* values) {}

