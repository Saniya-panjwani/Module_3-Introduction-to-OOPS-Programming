// Write a program that demonstrates the difference between local and global
//variables in C++. Use functions to show scope.

#include<iostream>
using namespace std;
int globalvar=50;

void display()
{
	int localvar=20;
	cout<<"local variable"<<localvar<<endl;
	cout<<"global variable"<<globalvar<<endl;
}

int main()
{
	int localvar=10;
	cout << "local variable" << localvar << endl;
    cout << "global variable" << globalvar << endl;
    
    display();
	return 0;
}






