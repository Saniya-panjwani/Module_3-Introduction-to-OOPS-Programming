// Write a C++ program that calculates the factorial of a number using recursion.

#include<iostream>
using namespace std;

int fact(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

int main()
{
	int n;
	cout<<"enter a num";
	cin>>n;
	
	if(n<0)
	{
		cout<<"not possible"<<endl;
		
	}
	else
	{
		cout<<"factorial is "<<fact(n)<<endl;
	}
	return 0;
}
