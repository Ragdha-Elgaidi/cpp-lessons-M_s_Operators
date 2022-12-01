/*
Assume a year is 12 months, but each month is 30 days
○ That is a year has 12 * 30 = 360 days
Read an integer: whole number of days of someone age. Print 3 numbers
○ Total years total months remaining days
*/

#include<iostream>
using namespace std;

int main() 
{

	int days;

	cin >> days;

	int years = days / 360;
	days = days % 360;	// now we remove # of complete years

	int months = days / 30;
	days = days % 30;

	cout << years << " " << months << " " << days << "\n";

	return 0;
}


