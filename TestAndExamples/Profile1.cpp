#include <iostream>
#include <string.h>
#include <Windows.h>
#include <conio.h>
#include "Profile1.h"
using namespace std;

int buttonPress1 = 0;

int profileFunction1() {
	cout << "enter button input \n";
	cin >> buttonPress1;
	if (buttonPress1 == 1) {
		cout << "profile1 doing button 1 \n";
		Sleep(1000);
	}
	if (buttonPress1 == 2) {
		cout << "profile1 doing button 2 \n";			
		Sleep(1000);
	}
	if (buttonPress1 == 3) {
		cout << "profile1 doing button 3 \n";
		Sleep(1000);
	}
	if (buttonPress1 == 4) {
		cout << "profile1 doing button 4 \n";
		Sleep(1000);
	}
	return 0;
}