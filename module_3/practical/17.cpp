//Write a C++ program to check if a given string is a palindrome (reads the same
//forwards and backwards)
#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"enter a string :";
	cin>>str;
	
	string rev="";
	
	for(int i=str.length()-1;i>=0;i--)
	{
		rev+=str[i];
	}
	
	if(str==rev)
	{
		cout<<str<<"is palindrome"<<endl;
		
	}
	else
	{
		cout<<str<<"not palindrome"<<endl;
	}
	
	return 0;
}
