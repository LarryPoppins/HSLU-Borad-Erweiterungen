/*
 * sound.h
 *
 *  Created on: 5 October
 *      Author: Larry Poppins
 *
 *
 *      Version 1.1:
 *      * added some more notes to the Enum, porbably get messy below A2 but go for it
 *
 *      Version 1.0:
 *      * Inital file
 */

#ifndef SOUND_H_
#define SOUND_H_

//enums
typedef enum note {
	C2 = 65,
	CIS2 = 69,
	Db2 = 69,
	D2 = 73,
	DIS2 = 78,
	Eb2 = 78,
	E2 = 82,
	F2 = 87,
	FIS2 = 93,
	Gb2 = 93,
	G2 = 98,
	GIS2 = 104,
	Ab2 = 104,
	A2 = 110,
	AIS2 = 117,
	Bb2 = 117,
	B2 = 123,
	C3 = 131,
	CIS3 = 139,
	Db3 = 139,
	D3 = 147,
	DIS3 = 156,
	Eb3 = 156,
	E3 = 165,
	F3 = 175,
	FIS3 = 185,
	Gb3 = 185,
	G3 = 196,
	GIS3 = 208,
	Ab3 = 208,
	A3 = 220,
	AIS3 = 233,
	Bb3 = 233,
	B3 = 247,
	C4 = 262,
	CIS4 = 277,
	Db4 = 277,
	D4 = 294,
	DIS4 = 311,
	Eb4 = 311,
	E4 = 330,
	F4 = 349,
	FIS4 = 370,
	Gb4 = 370,
	G4 = 392,
	GIS4 = 415,
	A4 = 440,
	AIS4 = 466,
	Bb4 = 466,
	B4 = 494,
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
