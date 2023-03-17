//master controller arduino translate
//STD (smart touch device) takes profilepicks and calls profilecases (profilefunctions)
//Patrick Brendstrup 02/03/2023
#include <string.h>
#include <stdlib.h>
#include "Profile1.h"
#include "Profile2.h"
#include "Profile3.h"
#include "Profile4.h"
#include <Arduino.h>


void setup(){


}

int main(void) {
	const int profilePin1 = PH3;
	const int profilePin2 = PH5;
	const int profilePin3 = PH6;
	const int profilePin4 = PH7;
	int profilePick = 0;
	

	printf("pick profile 1, 2, 3 or 4 \n");
	scanf (" %d ", &profilePick);

	while (1) {
		if (profilePin1 == HIGH){
			profileFunction1();
		}
		if (profilePin2 == HIGH){
			profileFunction2();
		}
		if (profilePin3 == HIGH){
			profileFunction3();
		}
		if (profilePin4 == HIGH){
			profileFunction4();
		}
		else;
		//blue light
	}
}
