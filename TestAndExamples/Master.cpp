//Patrick Brendstrup 02/03/2023
#include <string.h>
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Profile1.h"
#include "Profile2.h"

using namespace std;



int main(void) {
	int profilePick = 0;


	cout << "pick profile 1, 2, 3 or 4 \n";
	cin >> profilePick;

	while (1) {
		switch (profilePick) {
		case 1:
			cout << "profile 1 chosen \n";
			while (1) {
				profileFunction1();
			}
			break;
		case 2:
			cout << "profile 2 chosen \n";
			while (1) {
				profileFunction2();
			}
			break;
		case 3:
			cout << "profile 3 chosen \n";
			while (1) {
				//profileFunction3();
			}
			break;
		case 4:
			cout << "profile 4 chosen \n";
			while (1) {
				//profileFunction4();
			}
			break;
		}
		
		
	}
}