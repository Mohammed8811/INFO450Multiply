// INFO450Multiply.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;



int main() {
	cout << "Multiplication tables:" << endl;
	cout << "0\t";
	for (int i = 0; i < 11; i++) {
		cout << i << "\t";
	}
	cout << endl;
	for (int i = 0; i < 11; i++) {
		cout << i << "\t";
		for (int j = 0; j < 11; j++) {
			cout << i*j << "\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}