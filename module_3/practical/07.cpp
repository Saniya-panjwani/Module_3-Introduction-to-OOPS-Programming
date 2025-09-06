//o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
//operators. Perform operations using each type of operator and display the results
#include<iostream>
using namespace std;
int main()
{
	int a=5,b=10;
	cout<<"a + b ="<<a+b<<endl;
	cout<<"a - b ="<<a-b<<endl;
	cout<<"a * b = "<<a*b<<endl;
	cout<<"a / b = "<<a/b<<endl;
	
	cout<<"a > b    "<<(a>b)<<endl;
	cout<<"a < b    "<<(a<b)<<endl;
	cout<<"a == b   "<<(a==b)<<endl;
	cout<<"a != b   "<<(a!=b)<<endl;
	
	cout<<"(a > 0 && b > 0 )   "<<(a>0&&b>0)<<endl;
	cout<<"(a > 0 && b < 0 )   "<<(a>0&&b<0)<<endl;
	cout<<"(a > b )"<<(a>b)<<endl;
	
	return 0;
}
