/*
Write a program that reads 2 numbers a, b and divides them (a/b), but prints
only the fraction part
*/
#include <iostream>
using namespace std;
int main()
{
	double a, b;
	
	cin >> a >> b;

	double result = a / b;
	 
	cout << result - (int)result << endl;
	return 0;
}
