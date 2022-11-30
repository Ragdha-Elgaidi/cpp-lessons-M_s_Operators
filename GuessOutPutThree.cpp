#include<iostream>
using namespace std;

int main() {

	int a = 210;

	a /= 2;//210/2=105
	cout << a << "\n";//105

	cout << (a /= 3) << "\n";//35
	cout << (a /= 5) << "\n";//7
	cout << (a /= 7) << "\n";//1

	cout << (2 + 3) * (5 - (-3)) / 5 / 8 << "\n";
	/*
	5x15/5/8=75/5/8=15/8=1
	*/

	a = 10;
	cout << a++ + 10 << "\n";//20
	cout << ++a + 10 << "\n";//22
	cout << a-- + 10 << "\n";//22
	cout << --a + 10 << "\n";//20

	int b = 20;
	cout << a++ + ++b << "\n";	// Don't code this way
	//31
	cout << a << "\n";//11
	++a += 10;	// Don't code this way
	cout << a << "\n";//22
	return 0;
}

