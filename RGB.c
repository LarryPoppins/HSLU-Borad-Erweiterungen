/*
 * RGB.c
 *
 *  Created on: 1 October
 *      Author: Larry Poppins
 *
 *		Version 1.0:
 *		Well, it ain't much but it's honest work... I'll admit, at the moment this is absolute dog shit but I have great plans
 *		for the future. added the SweepColor() function.
 *
 *		ideas: want to add a potnentiometer control for the color, so you can select it by sweeping the pot.
 *		probaly something to do with audio visualisation, but thats a future me problem.
 */

//ideas:
#include <math.h>
#include "board.h"

/**
 * takes the speed as a unit of speed and does the sweeping
 * just enter anything and you'll see
 */
void SweepColor(int speed) {

	if (speed < 1) {
		speed = 1;
	}

	else if (speed > 10000) {
		speed = 10000;
	}

	float currentValueRed = 0.0f;
	float currentValueGreen = 0.0f;
	float currentValueBlue = 0.0f;
	float currentValueCos = 0.0f;

	for (float i = 0; i < (3 * 3.14159265358979f)/2; i += 0.01f) {
		currentValueRed = sin(i);
		currentValueGreen = sin(i - (3.14159265358979f)/2);
		currentValueBlue = sin(i - 3.14159265358979f);
		currentValueCos = cos(i);

		if (currentValueRed < 0.0f) {
			currentValueRed = 0;
		}

		else {
			currentValueRed *= 100;
		}

		if (currentValueGreen < 0.0f) {
			currentValueGreen = 0;
		}

		else {
			currentValueGreen *= 100;
		}

		if (currentValueBlue < 0.0f) {
			if (currentValueGreen > 0.0f) {
				currentValueBlue = 0;
			}
			else {
				currentValueBlue = currentValueCos * 100;
			}
		}

		else {
			currentValueBlue *= 100;
		}

		delay_ms(speed);

		PWM_SetDutycycleBlue((int)currentValueBlue);
		PWM_SetDutycycleRed((int)currentValueRed);
		PWM_SetDutycycleGreen((int)currentValueGreen);
	}
}
