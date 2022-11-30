#include<iostream>
using namespace std;

int main() {

	int a = 1, b = 1, c;

	cout << (c = a + b, a = b, b = c,//2,1,2
		c = a + b, a = b, b = c,//3,2,3
		c = a + b, a = b, b = c,//5,3,5
		c = a + b, a = b, b = c) << endl;//8,5,8
	//output is 8
	return 0;
}

