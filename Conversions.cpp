#include<iostream>
using namespace std;

int main() {
	// 8/3 = 2.6666666666666 ..... 6666
	double num {8/3.0};

	cout<<num<<"\n";//2.66666666

	int res = (int)num;	// C casting (style)
	cout<<res<<"\n";//2

	char ch {'a'};
	int ch_value { (int)ch };

	cout<<ch_value<<"\n";//97

	cout<<(int)'a'<<" "<<(int)'z'<<"\n";//97 122
	cout<<(int)'A'<<" "<<(int)'Z'<<"\n";//65 90


	return 0;
}

