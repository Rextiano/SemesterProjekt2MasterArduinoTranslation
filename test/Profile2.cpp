#include <string.h>
#include "Profile2.h"
#include <Arduino.h>
int buttonPress2 = 0;

int profileFunction1() {
	printf("enter button input \n");
	scanf("%d", &buttonPress2);
	if (buttonPress2 == 1) {
		scanf("profile 2 doing button 1 \n");
		delay(1000);
	}
	if (buttonPress2 == 2) {
		printf("profile 2 doing button 2 \n");			
		delay(1000);
	}
	if (buttonPress2 == 3) {
		printf("profile 2 doing button 3 \n");
		delay(1000);
	}
	if (buttonPress2 == 4) {
		printf("profile 2 doing button 4 \n");
		delay(1000);
	}
	return 0;
}