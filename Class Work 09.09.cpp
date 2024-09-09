#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

void SetColor(int textColor, int bgColor)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,
		(bgColor << 4) | textColor);
}

int randint(int min, int max) {
	return(rand() % (max - min + 1) + min);
}

int main()
{
	SetColor(10, 0);
	int a, b, c;

	cout << "diapazon vid:";
	cin >> a;

	cout << "diapazon do:";
	cin >> b;

	cout << "1 - parni, 2 - neparni, 3 - vsi kratni sim: ";
	cin >> c;

	if (a > b) {
		if (c == 1) {
			for (int i = a; i > b; i--) {
				if (i % 2 == 0) {
					cout << i << " ";
				}
			}
		}
		else if (c == 2) {
			for (int i = a; i > b; i--) {
				if (i % 2 != 0) {
					cout << i << " ";
				}
			}
		}
		else if (c == 3) {
			for (int i = a; i > b; i--) {
				if (i % 7 == 0) {
					cout << i << " ";
				}
			}

		}

	}
	else {
		if (c == 1) {
			for (int i = a; i < b; i++) {
				if (i % 2 == 0) {
					cout << i << " ";
				}
			}
		}
		else if (c == 2) {
			for (int i = a; i < b; i++) {
				if (i % 2 != 0) {
					cout << i << " ";
				}
			}
		}
		else if (c == 3) {
			for (int i = a; i < b; i++) {
				if (i % 7 == 0) {
					cout << i << " ";
				}
			}

		}
	}



	/*
	int a, b;
	cout << "diapazon do:";
	cin >> a;
	for (int i = 0; i < a; i++) {
		cout << i << " ";
	}
	*/
	return 0;
}
