//o Write a C++ program that defines a class Calculator with functions for addition,
//subtraction, multiplication, and division. Create objects to use these functions.
#include<iostream>
using namespace std;
class Calculator {
	public:
		int add(int a, int b){
			return a+b;
		}
		int sub(int a,int b){
			return a-b;
		}
		int mul(int a, int b){
			return a*b;
		}
		float div(int a, int b){
			if (b == 0) {
            cout << "Division by zero not allowed." << endl;
            return 0;
        }
        return (float)a / b;
    }				
};
	
int main()
{
	Calculator cal;
	
	cout<<"add : "<<cal.add(10,20)<<endl;
	cout<<"add : "<<cal.sub(10,20)<<endl;
	cout<<"add : "<<cal.mul(10,20)<<endl;
	cout<<"add : "<<cal.div(10,20)<<endl;
	return 0;
}
