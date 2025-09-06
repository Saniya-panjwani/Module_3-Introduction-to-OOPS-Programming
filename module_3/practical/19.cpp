//Create a class BankAccount with data members like balance and member functions
//like deposit and withdraw. Implement encapsulation by keeping the data members
//private.
#include<iostream>
using namespace std;
class BankAcc{
	private:
		float balance;
		
	public:
		BankAcc(double initBal =0)
		{
			if(initBal>=0)
			{
				balance=initBal;
			}
			else
			{
				cout<<"invalid balance"<<endl;
				balance =0;
			}
		}
		void deposit(double amount)
	{
		if(amount>0)
		{
			balance+=amount;
			cout<<"deposite"<<amount<<endl;
		}
		else
		{
			cout<<"not possible"<<endl;
		}
	}
	void withdraw(double amount)
	{
		if(amount > 0 && amount<=balance)
		{
			balance-=amount;
			cout<<"withdrwan amt"<<amount<<endl;
		}
		else
		{
			cout<<"invalid"<<endl;
		}
	}
	void display()
	{
		cout<<"current balance"<<balance<<endl;
	}
	};
int main()
{
	BankAcc account(1000);
	account.display();
	account.deposit(500);
	account.withdraw(700);
	account.display();
	
	return 0;
}
