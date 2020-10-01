/*
 * sound.h
 *
 *  Created on: 1 October
 *      Author: Nick Vaes
 */

#ifndef SOUND_H_
#define SOUND_H_

//enums
typedef enum note {
	C = 262,
	CIS = 277,
	Db = 277,
	D = 294,
	DIS = 311,
	Eb = 311,
	E = 330,
	F = 349,
	FIS = 370,
	Gb = 370,
	G = 392,
	GIS = 415,
	A = 440,
	AIS = 466,
	Bb = 466,
	B = 494,
} note;

typedef enum waveForm {
	sine = 0,
	triangle = 1,
	sawtooth = 2,
	square = 3
} waveForm;

//declarations

void InitSound();


//wip
void PlayNoteSquare(int hertz, int time_ms);
void PlayNote(int hertz, waveForm waveForm, int time_ms);
void PlayNoteBPM(int hertz, waveForm waveForm, float fraction);
//wip
//int* GenerateCustomWave(int* values);

#endif
