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
	const int profilePin1 = PH3;
	const int profilePin2 = PH5;
	const int profilePin3 = PH6;
	const int profilePin4 = PH7;

}

int main(void) {
	int profilePick = 0;
	

	printf("pick profile 1, 2, 3 or 4 \n");
	scanf (" %d ", &profilePick);

	while (1) {
		switch (profilePick) {
		case 1:
			printf("profile 1 chosen \n");
			while (1) {
				profileFunction1();
			}
			break;
		case 2:
			printf("profile 2 chosen \n");
			while (1) {
				profileFunction2();
			}
			break;
		case 3:
			printf("profile 3 chosen \n");
			while (1) {
				//profileFunction3();
			}
			break;
		case 4:
			printf("profile 4 chosen \n");
			while (1) {
				//profileFunction4();
			}
			break;
		}
	}
}