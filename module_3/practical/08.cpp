//o Write a C++ program that takes a student’s marks as input and calculates the grade
//based on if-else conditions.
#include<iostream>
using namespace std;
int main()
{
	int marks;
	char grade;
	cout<<"enter marks";
	cin>>marks;
	
	if(marks>90)
	{
		grade='a';
	}
	else if(marks>=75)
	{
		grade='b';
	}
	else if(marks>=50)
	{
		grade='c';
	}
	else
		grade='f';
cout<<"grade :"<<grade<<endl;
	return 0;
}
