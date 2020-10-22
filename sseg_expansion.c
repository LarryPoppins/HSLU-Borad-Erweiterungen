/*
 * ssegexpansion.c
 *
 *  Created on: 22 October 2020
 *      Author: Larry Poppins
 *
 *      Version 1.1:
 *      * added support for displaying floating point numbers under 10.0 and above 0.1. Not tested, but should do.
 *
 *      Version 1.0:
 *      * Initial File
 */

#include <stdio.h>
#include "sseg.h"

//1. Segment predefined numbers

void setSSEG1One() {
	setSSEG1B();
	setSSEG1C();
}

void setSSEG1Two() {
	setSSEG1A();
	setSSEG1B();
	setSSEG1G();
	setSSEG1E();
	setSSEG1D();
}

void setSSEG1Three() {
	setSSEG1A();
	setSSEG1B();
	setSSEG1G();
	setSSEG1C();
	setSSEG1D();
}

void setSSEG1Four() {
	setSSEG1F();
	setSSEG1B();
	setSSEG1G();
	setSSEG1C();
}

void setSSEG1Five() {
	setSSEG1A();
	setSSEG1F();
	setSSEG1G();
	setSSEG1C();
	setSSEG1D();
}

void setSSEG1Six() {
	setSSEG1A();
	setSSEG1F();
	setSSEG1G();
	setSSEG1C();
	setSSEG1D();
	setSSEG1E();
}

void setSSEG1Seven() {
	setSSEG1A();
	setSSEG1B();
	setSSEG1C();
}

void setSSEG1Eight() {
	setSSEG1A();
	setSSEG1B();
	setSSEG1F();
	setSSEG1G();
	setSSEG1C();
	setSSEG1D();
	setSSEG1E();
}

void setSSEG1Nine() {
	setSSEG1A();
	setSSEG1B();
	setSSEG1F();
	setSSEG1G();
	setSSEG1C();
	setSSEG1D();
}

void setSSEG1Zero() {
	setSSEG1A();
	setSSEG1B();
	setSSEG1F();
	setSSEG1C();
	setSSEG1D();
	setSSEG1E();
}

void setSSEG1Aletter() {
	setSSEG1A();
	setSSEG1B();
	setSSEG1F();
	setSSEG1G();
	setSSEG1C();
	setSSEG1E();
}

void setSSEG1Bletter() {
	setSSEG1F();
	setSSEG1G();
	setSSEG1C();
	setSSEG1D();
	setSSEG1E();
}

void setSSEG1Cletter() {
	setSSEG1A();
	setSSEG1F();
	setSSEG1D();
	setSSEG1E();
}

void setSSEG1Dletter() {
	setSSEG1F();
	setSSEG1G();
	setSSEG1C();
	setSSEG1D();
	setSSEG1E();
}

void setSSEG1Eletter() {
	setSSEG1F();
	setSSEG1G();
	setSSEG1A();
	setSSEG1D();
	setSSEG1E();
}

void setSSEG1Fletter() {
	setSSEG1F();
	setSSEG1G();
	setSSEG1A();
	setSSEG1E();
}

void setSSEG1Gletter() {
	setSSEG1A();
	setSSEG1F();
	setSSEG1G();
	setSSEG1C();
	setSSEG1D();
	setSSEG1E();
}

void setSSEG1Hletter() {
	setSSEG1B();
	setSSEG1F();
	setSSEG1G();
	setSSEG1C();
	setSSEG1E();
}

void setSSEG1Iletter() {
	setSSEG1E();
	setSSEG1F();
}

void setSSEG1Jletter() {
	setSSEG1B();
	setSSEG1C();
	setSSEG1D();
}

void setSSEG1Lletter() {
	setSSEG1F();
	setSSEG1D();
	setSSEG1E();
}

void setSSEG1Pletter() {
	setSSEG1F();
	setSSEG1G();
	setSSEG1A();
	setSSEG1E();
	setSSEG1B();
}

void setSSEG1Sletter() {
	setSSEG1A();
	setSSEG1F();
	setSSEG1G();
	setSSEG1C();
	setSSEG1D();
}

void setSSEG1Uletter() {
	setSSEG1B();
	setSSEG1F();
	setSSEG1E();
	setSSEG1C();
	setSSEG1D();
}

void setSSEG1Zletter() {
	setSSEG1A();
	setSSEG1B();
	setSSEG1G();
	setSSEG1E();
	setSSEG1D();
}


void clearSSEG1All() {
	clearSSEG1A();
	clearSSEG1B();
	clearSSEG1C();
	clearSSEG1D();
	clearSSEG1E();
	clearSSEG1F();
	clearSSEG1G();
	clearSSEG1DP();
}

//2. Segment predefined numbers

void setSSEG2One() {
	setSSEG2B();
	setSSEG2C();
}

void setSSEG2Two() {
	setSSEG2A();
	setSSEG2B();
	setSSEG2G();
	setSSEG2E();
	setSSEG2D();
}

void setSSEG2Three() {
	setSSEG2A();
	setSSEG2B();
	setSSEG2G();
	setSSEG2C();
	setSSEG2D();
}

void setSSEG2Four() {
	setSSEG2F();
	setSSEG2B();
	setSSEG2G();
	setSSEG2C();
}

void setSSEG2Five() {
	setSSEG2A();
	setSSEG2F();
	setSSEG2G();
	setSSEG2C();
	setSSEG2D();
}

void setSSEG2Six() {
	setSSEG2A();
	setSSEG2F();
	setSSEG2G();
	setSSEG2C();
	setSSEG2D();
	setSSEG2E();
}

void setSSEG2Seven() {
	setSSEG2A();
	setSSEG2B();
	setSSEG2C();
}

void setSSEG2Eight() {
	setSSEG2A();
	setSSEG2B();
	setSSEG2F();
	setSSEG2G();
	setSSEG2C();
	setSSEG2D();
	setSSEG2E();
}

void setSSEG2Nine() {
	setSSEG2A();
	setSSEG2B();
	setSSEG2F();
	setSSEG2G();
	setSSEG2C();
	setSSEG2D();
}

void setSSEG2Zero() {
	setSSEG2A();
	setSSEG2B();
	setSSEG2F();
	setSSEG2C();
	setSSEG2D();
	setSSEG2E();
}

void clearSSEG2All() {
	clearSSEG2A();
	clearSSEG2B();
	clearSSEG2C();
	clearSSEG2D();
	clearSSEG2E();
	clearSSEG2F();
	clearSSEG2G();
	clearSSEG2DP();
}

void clearSSEG12All() {
	clearSSEG1A();
	clearSSEG1B();
	clearSSEG1C();
	clearSSEG1D();
	clearSSEG1E();
	clearSSEG1F();
	clearSSEG1G();
	clearSSEG1DP();

	clearSSEG2A();
	clearSSEG2B();
	clearSSEG2C();
	clearSSEG2D();
	clearSSEG2E();
	clearSSEG2F();
	clearSSEG2G();
	clearSSEG2DP();
}

void SSEGNumToDisplay(int digit, int num) {

	if (digit > 2) {
		digit = 2;
	}
	if (digit < 1) {
		digit = 1;
	}

	if (digit == 1) {
	switch (num) {
		case 1:
			setSSEG2One();
			break;
		case 2:
			setSSEG2Two();
			break;
		case 3:
			setSSEG2Three();
			break;
		case 4:
			setSSEG2Four();
			break;
		case 5:
			setSSEG2Five();
			break;
		case 6:
			setSSEG2Six();
			break;
		case 7:
			setSSEG2Seven();
			break;
		case 8:
			setSSEG2Eight();
			break;
		case 9:
			setSSEG2Nine();
			break;
		case 0:
			setSSEG2Zero();
			break;
		}
	}

	else {
		switch (num) {
			case 1:
				setSSEG1One();
				break;
			case 2:
				setSSEG1Two();
				break;
			case 3:
				setSSEG1Three();
				break;
			case 4:
				setSSEG1Four();
				break;
			case 5:
				setSSEG1Five();
				break;
			case 6:
				setSSEG1Six();
				break;
			case 7:
				setSSEG1Seven();
				break;
			case 8:
				setSSEG1Eight();
				break;
			case 9:
				setSSEG1Nine();
				break;
			case 0:
				setSSEG1Zero();
				break;
		}
	}
}

void setSSEGNumber(int num) {

	if (num < 10 && num > 0) {
		setSSEG1Zero();
		SSEGNumToDisplay(1, num);
	}

	else if (num < 100 && num > 9) {
		int ones = num % 10;
		int tens = (num - ones) / 10;

		SSEGNumToDisplay(1, ones);
		SSEGNumToDisplay(2, tens);
	}

	else {
		setSSEG1Zero();
		setSSEG2Zero();
	}

}

/**
 * apparently I'm not allowed to overload functions with this compiler... :(
 * */
void setSSEGNumberFloat(float num) {

	if (num < 0.1f) {
		setSSEG1Zero();
		setSSEG2Zero();
		setSSEG1DP();
	}

	if (num <= 9.9f && num >= 0.1f) {
		int numberToDisplay = (int)num * 10;
		int ones;
		int tens;

		ones = numberToDisplay % 10;
		tens = (numberToDisplay - ones) / 10;

		SSEGNumToDisplay(1, ones);
		SSEGNumToDisplay(2, tens);
		setSSEG1DP();
	}

	else {
		setSSEG1Zero();
		setSSEG2Zero();
		setSSEG2DP();
	}
}
