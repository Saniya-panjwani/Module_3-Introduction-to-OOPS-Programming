// Write a C++ program that accepts an array of integers, calculates the sum and
//average, and displays the results
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the num";
	cin>>n;
	int array[n];
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
		sum+=array[i];
	}
	
	double average=(double)sum/n;
	
	cout<<"sum"<<sum<<endl;
	cout<<"average"<<average<<endl;
	
	return 0;
}

