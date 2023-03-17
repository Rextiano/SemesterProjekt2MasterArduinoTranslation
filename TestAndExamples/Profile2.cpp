#include <iostream>
#include <string.h>
#include <Windows.h>
#include <conio.h>
#include "Profile2.h"
using namespace std;

int buttonPress2 = 0;

int profileFunction2() {
	cout << "enter button input \n";
	cin >> buttonPress2;
	if (buttonPress2 == 1) {
		cout << "profile2 doing button 1 \n";
		Sleep(1000);
	}
	if (buttonPress2 == 2) {
		cout << "profile2 doing button 2 \n";
		Sleep(1000);
	}
	if (buttonPress2 == 3) {
		cout << "profile2 doing button 3 \n";
		Sleep(1000);
	}
	if (buttonPress2 == 4) {
		cout << "profile2 doing button 4 \n";
		Sleep(1000);
	}
	return 0;
}