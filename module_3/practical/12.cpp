//Write a C++ program that defines functions for basic arithmetic operations (add,
//subtract, multiply, divide). The main function should call these based on user input.
#include<iostream>
using namespace std;
 
int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

float div(int a, int b)
{
	if(b==0){
		cout<<"error"<<endl;
		return 0;
	}
	return (float)a/b;
}

int main()
{
	int a,b;
	char op;
	
	cout<<"enter two nums";
	cin>>a>>b;
	
	cout<<"enter operation";
	cin>>op;
	
	if(op=='+')
	{
		cout<<"add is "<<add(a,b)<<endl;
	}
	else if (op=='-')
	{
		cout<<"sub is "<<sub(a,b)<<endl;
	}
	else if (op=='*')
	{
		cout<<"mul is "<<mul(a,b)<<endl;
	}
	else if (op=='/')
	{
		cout<<"div is "<<div(a,b)<<endl;
	}
	else
	{
		cout<<"invalid op"<<endl;
	}
	return 0;
}
