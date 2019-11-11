/**
* Program Name: cis6Summer2018JamesCProgram001.c
* Discussion:   Loop and Functions
* Written By:   JamesC
* Date:         2018/07/11
*/

#include <stdio.h>

// Function Prototypes

int extractDigitCountVersion3(int);

int extractDigitCountVersion4(int);

int extractDigitCountVersion5(int);

void runMenuHw4V2(void);
void doOption1V2(int arg);
void displayDigit(int arg);
void displayClassInfoJamesC(void);

// Application Driver
int main() {

	runMenuHw4V2();

	return 0;
}

// Function Definitions
void displayClassInfoJamesC(void) {
	printf("");
}

void displayDigit(int usrValue) {
	int lsd;
	if (usrValue < 0) {
		usrValue = -usrValue;
	}
	do {
		lsd = usrValue % 10;

		printf("\n %d", lsd);

		usrValue /= 10;
	} while (usrValue != 0);
}

int extractDigitCountVersion5(int usrValue) {
	int digitCount = 0;

	do {
		digitCount++;
		usrValue /= 10;
	} while (usrValue != 0);

	printf("There is/are %d digit(s)!", digitCount);
}

void doOption1V2(int usrValue) {

	if (usrValue > 0) {
		printf("Value is positive\n");
	}
	else if (usrValue < 0) {
		printf("Value is negative\n");
	}
	else {
		printf("\nIt is Zero!\n");
	}
}

void runMenuHw4V2() {
	int option;
	int usrValue;
	int digitCount;
	int usrValue1;

	do {
		printf("\n*****"
			"\n* 1. Calling doOption1() *"
			"\n* 2. Quit                *"
			"\n*****");
		printf("\nEnter the option: ");

		scanf("%d", &option);

		switch (option) {
		case 1:
			printf("\nEnter an Int: ");
			scanf("%d", &usrValue);

			if (usrValue != 0) {
				doOption1V2(usrValue);
				extractDigitCountVersion5(usrValue);
				displayDigit(usrValue);
			}
			else {
				doOption1V2(usrValue);
			}
			break;
		case 2:
			printf("\nHave Fun!\n");
			break;
		default:
			printf("\nWrong Option!\n");
		}
	} while (option != 2);
}

int extractDigitCountVersion4(int usrValue) {
	int digitCount = 0;

	if (usrValue == 0) {
		digitCount = 1; //return 1;
	}
	else {
		while (usrValue != 0) {
			digitCount++;

			usrValue /= 10;
		}
	}

	return digitCount;
}

int extractDigitCountVersion3(int usrValue) {
	int digitCount = 0;

	if (usrValue == 0) {
		digitCount = 1;
	}

	while (usrValue != 0) {
		digitCount++;

		usrValue /= 10;
	}

	return digitCount;
}

/*Program Output
Here is the actual output from control f5
*/

/*Comments
* No Comments
*/
