//Write a program that implements inheritance using a base class Person and derived
//classes Student and Teacher. Demonstrate reusability through inheritance.
#include<iostream>
using namespace std;
class Person{
	public:
		string name;
		int age;
		
	
};
class student : public Person{
	
	public:
		string course;
};
class Teacher : public Person{
	public:
		string subject;
};
int main()
{
	student s;
	Teacher t;
	
	s.name="saniya";
	s.age=19;
	s.course="BCA";
	
	t.name="rahul";
	t.age=30;
	t.subject="C++";
	
	cout<<"name "<<s.name  <<" age "<<s.age <<"course "<<s.course <<endl;
	cout<<"name "<<t.name  <<" age "<<t.age <<"subject "<<t.subject <<endl;
return 0;
}
