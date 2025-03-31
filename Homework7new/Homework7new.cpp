// Homework7new.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;
int myrand() {
	int min = -30;
	int max = 40;
	int K = max - (min + 30) + 1;

	return rand() % K + (min + 10);
}
int numbersame() {
	int min = 0;
	int max = 100;
	int K = max - min + 1; 
	return rand() % K + min; 
}
int procent() {
	int min = 0;
	int max = 200;
	int K = max - min + 1; 
	return rand() % K + min; 
}
int minmax() {
	int min = 0;
	int max = 20;
	int K = max - min + 1; 
	return rand() % K + min; 
}
int main()
{
	//-1
	const int SIZE = 10;
	int numbers[SIZE]{};
	int i = 0;

	generate(numbers, numbers + SIZE, myrand);
	for (auto& element : numbers) {
		i = element + element;

	}
	cout << i << "\n";
	//-2
	const int NUM = 100;
	int diapason[NUM]{};
	int same = 0;
	int mynum;
	cout << "Please print your number:";
	cin >> mynum;

	generate(diapason, diapason + NUM, numbersame);
	for (auto& chek : diapason) {
		if (chek == mynum) {
			same++;
		}

	}
	cout << "My diapason have"<<" " << same <<"" << " same numbers"<<"\n";
	//-3
	//const int NUMBER = 20;
	//int mylist[NUMBER]{};
	//int max = 0;
	//int min = 0;

	//generate(mylist, mylist + NUMBER, minmax);
	//for (auto& mynumber : mylist) {
	//	if (mynumber > mylist[0] && mynumber > mylist[1] && mynumber > mylist[2] && mynumber > mylist[3] && mynumber > mylist[4] && mynumber > mylist[5] && mynumber > mylist[6] && mynumber > mylist[7] && mynumber > mylist[8] && mynumber > mylist[9] && mynumber > mylist[10] && mynumber > mylist[11] && mynumber > mylist[12] && mynumber > mylist[13] && mynumber > mylist[14] && mynumber > mylist[15] && mynumber > mylist[16] && mynumber > mylist[17] && mynumber > mylist[18] && mynumber > mylist[19]) {
	//		max = mynumber;
	//	}
	//	else if (mynumber < mylist[0] && mynumber < mylist[1] && mynumber < mylist[2] && mynumber < mylist[3] && mynumber < mylist[4] && mynumber < mylist[5] && mynumber < mylist[6] && mynumber < mylist[7] && mynumber < mylist[8] && mynumber < mylist[9] && mynumber < mylist[10] && mynumber < mylist[11] && mynumber < mylist[12] && mynumber < mylist[13] && mynumber < mylist[14] && mynumber < mylist[15] && mynumber < mylist[16] && mynumber < mylist[17] && mynumber < mylist[18] && mynumber < mylist[19]) {
	//		min = mynumber;
	//	}

	//}
	//cout << " Min" << " " << min << "" << " Max" << " " << max << "" << " \n";
	//-4
	const int NUMBERS = 200;
	int mydiapason[NUMBERS]{};
	int hundert = 0;
	int ten = 0;
	int one = 0;

	generate(mydiapason, mydiapason + NUMBERS, procent);
	for (auto& result  : mydiapason) {
		if (result > 100 || result == 100) {
			hundert++;
		}
		else if (result > 10 || result == 10) {
			ten++;
		}
		else if (result > 1 || result == 1) {
			one++;
		}

	}
	cout << "Hunderts:" << (hundert * 100) / NUMBERS << "%\n" << "Tens:" << (ten * 100) / NUMBERS << "%\n" << "One:" << (one * 100) / NUMBERS << "%" << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
