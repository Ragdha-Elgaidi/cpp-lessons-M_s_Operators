/*
Write a program that reads an integer and print the 4th from the right side. If
no such digit, print 0
*/

#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// /1000 => removes last 3 digits
	// %10 get next digit = 4th
	cout << (n / 1000) % 10 << "\n";

	return 0;
}


