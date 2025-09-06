//Write a C++ program that accepts user input for their name and age and then
//displays a personalized greeting.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int age;
	string name;
	cout<<"name :"<<endl;
	cin>>name;
	cout<<"age"<<endl;
	cin>>age;
	cout<<"hello " <<name <<" your age is "<<age;
	return 0;
}
