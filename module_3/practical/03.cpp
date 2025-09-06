//o Write two small programs: one using Procedural Programming (POP) to calculate the
//area of a rectangle, and another using Object-Oriented Programming (OOP) with a class and object for the same task.
//o Objective: Highlight the difference between POP and OOP approaches.
//pop:-
#include<iostream>
using namespace std;
int cal(int len,int width){
	return len*width;
}
int main()
{
	int length,width;
	cout<<"enter len of rec";
	cin>>length;
	
	cout<<"enter wid of rec";
	cin>>width;
	
	int area =cal(length,width);
	cout<<"area of rec"<<area<<endl;
return 0;
}
