/*
Write a program that reads 2 positive integers and print such reminder without
using the modulus operator %
*/
#include <iostream>
using namespace std;
int main()
{
	int n, m;

	cin >> n >> m;
	
	int result = n - (n / m) * m;

	cout << result << " " << n % m;

	return 0;
}
