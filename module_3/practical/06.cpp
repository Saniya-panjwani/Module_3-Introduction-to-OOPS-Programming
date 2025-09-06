//o Write a C++ program that performs both implicit and explicit type conversions and
//prints the results.

#include<iostream>
using namespace std;
int main()
{
	int a=10;
	double b=a;
	cout<<"implicit conv"<<b<<endl;
	
	double x=5.7;
	int y=(int)x;
	cout<<"explicit conv"<<y<<endl;
	
	return 0;
}
