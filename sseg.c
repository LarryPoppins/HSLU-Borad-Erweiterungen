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
//that's a lotta numbers...
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
//whole bunch of numbers...
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

//aka the switch-case-shitshow
/**
 * sets a panel to a number, don't know why you would need that since you have the great SETSSEGNUMBER()!
 * but here you go. Oh shit now I remember, I used it further down the line. good times.
 */
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

/**
 * best. shit. eva. just chuck an int into the top and out comes the display show
 * this badboy can even handle some no no inputs, but don't push it to far
 */
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
