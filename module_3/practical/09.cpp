//Write a C++ program that asks the user to guess a number between 1 and 100. The
//program should provide hints if the guess is too high or too low. Use loops to allow
//the user multiple attempts
#include<iostream>
using namespace std;

int main()
{
	int secret =40;
	int guess;
	
	cout<<"guess the num"<<endl;
	while(true)
	{
		cin>>guess;
		if(guess == secret)
		{
			cout<<"correct !!!"<<endl;
			break;
		}
		else if(guess>secret)
		{
			cout<<"too high";
		}
		else
		{
			cout<<"too low";
		}
	}
	return 0;
}

