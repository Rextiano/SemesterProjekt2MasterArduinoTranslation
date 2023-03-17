#include <string.h>
#include "Profile3.h"
#include <Arduino.h>
int buttonPress1 = 0;

int profileFunction3() {
	printf("enter button input \n");
	scanf("%d", &buttonPress1);
	if (buttonPress1 == 1) {
		scanf("profile1 doing button 1 \n");
		delay(1000);
	}
	if (buttonPress1 == 2) {
		printf("profile1 doing button 2 \n");			
		delay(1000);
	}
	if (buttonPress1 == 3) {
		printf("profile1 doing button 3 \n");
		delay(1000);
	}
	if (buttonPress1 == 4) {
		printf("profile 1 doing button 4 \n");
		delay(1000);
	}
	return 0;
}