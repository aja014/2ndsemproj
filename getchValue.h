#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>


using namespace std;

int getchVal(char x[], int l) { // 101 is up, 111 is down
	//x[32];

	int num =1;
	char a;

	for (int i = 0;;) {
		a = _getch();

		if (a == -32) {
			a = _getch();
			if (a == 72||a == 75) return  101;
			else if (a == 80 || a == 77) return 111;
		}
		else if (a == 13) {
			x[i] = '\0';
			return 111;
			break;
		}
		else if (a == 8 && i >= 1) {
			cout << "\b \b";
			x[--i] = '\0';
		}
		else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9') || a == ' ') {
			if (num == 1) {
				//cout << string(20, ' ');
				for (int u = 0; u < 32; u++) {
					x[u] = '\0';
				}
				num = 0;
			}
			if (l >= 2 && l <=11) { // age
				if ((a >= '0' && a <= '9')) {
					if (l ==2  && i < 2) { // age and bday
						cout << a;
						x[i] = a;
						++i;
					}
					else if (l == 11 && i < 11) { // gnumber
						cout << a;
						x[i] = a;
						++i;
					}
					else if (l==4 && i < 4) { // byear and zip
						cout << a;
						x[i] = a;
						++i;
					}
					else if (l == 12 && i < 11) { // gnumber
						cout << a;
						x[i] = a;
						++i;
					}
				}
			}
			else {
			cout << a;
			x[i] = a;
			++i;
			}
		}
	}

		// to erase if letter is pressed at first


		/*switch (a) {
		 case 72:
			 x[i] = '\0';
			 break;
			 return 101;
		 case 80:
			 x[i] = '\0';
			 break;
			 return 111;
		 default:
			 if (a == 13) {
				 x[i] = '\0';
				 break;
			 }
			 else if (a == 8 && i >= 1) {
				 cout << "\b \b";
				 x[--i] = '\0';
			 }
			 else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9') || a == ' ') {
				 cout << a;
				 x[i] = a;
				 ++i;

			 }
			 break;
		 }*/


		 //if (a == 72 || a == 80) { // 101 is up, 111 is down
			// //x[i] = '\0';
			// if (a == 72) {
			// return 101;
			// }
			// else {
			//	 x[i] = '\0';
			//	 return 111;
			// }
			// break;
		 //}
		 //else {
			// if (a == 13) {
			//	 x[i] = '\0';
			//	 break;
			// }
			// else if (a == 8 && i >= 1) {
			//	 cout << "\b \b";
			//	 x[--i] = '\0';
			// }
			// else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9') || a == ' ') {
			//	 cout << a;
			//	 x[i] = a;
			//	 ++i;
			// }
		 //}

		 //if (a == 13) {
			// x[i] = '\0';
			//// return 111;
			// break;
		 //}
		 //else if (a == 8 && i >= 1) {
			// cout << "\b \b";
			// x[--i] = '\0';
		 //}
		 //else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9') || a == ' ') {
			// cout << a;
			// x[i] = a;
			// ++i;
		 //}
		 //return 0;
	//}
	
}

void getchcout(char x[]) { // x = array of letters  y is size of letters
	for (int i = 0;; i++) {
		if (x[i] >= 'a' && x[i] <= 'z' || x[i] >= 'A' && x[i] <= 'Z' || x[i] >= '0' && x[i] <= '9' || x[i] == ' ') {
			cout << x[i];
		}
		else {
			break;
		}

	}
}

void delarr(char x[]) {
	for (int i = 0; i < 32; i++) {
		x[i] = '\0';
	}
}