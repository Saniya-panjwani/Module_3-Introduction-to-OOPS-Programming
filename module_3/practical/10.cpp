//Write a C++ program to display the multiplication table of a given number using a for
//loop.
#include<iostream>
using namespace std;
int main()
{
	int num;
	
	cout<<"enter a num";
	cin>>num;
	
	for(int i=1;i<=10;i++)
	{
		cout<<num<<" x "<< i <<" = "<<num * i<<endl;
	}
	
	return 0;
}
