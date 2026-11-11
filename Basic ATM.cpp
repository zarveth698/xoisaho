#include <iostream>
using namespace std;
int main()
{
	int pin = 1234;
	int enteredPin;
	int changePin;
	int choice;
	int balance = 10000;
	int dAmounts;
	int cAmounts;
	int attempts = 0;
	int dailyLimit = 25000;
	int withdrawanToday = 0;
	bool isLoggedIn = false;
	
	cout<<"=================Welcome to ATM==================== \n";
	
	while(attempts<3)
	{
		cout<<"Enter You PIN: ";
		cin>>enteredPin;
		if(enteredPin==pin)
		{
			cout<<"Login Successfull...!!!\n";
			isLoggedIn = true;
			break;
		}
		else
		{
			cout<<"Wrong Pin Detected \n";
			attempts++;
		}
		
		if(attempts == 3)
		{
			cout<<"Your Account is Temporarily Restricted to Use Your Funds...";
			return 0;
		}
	}
	
	if(isLoggedIn)
	{
		do
		{
			cout<<"\n =========================ATM Menu============================";
			cout<<"\n 1. Check Balance \n 2. Deposit Money \n 3. Withdraw Money \n 4. Change Pin \n 5. Exit\n ====> ";
			cin>>choice;
			switch(choice)
			{
				case 1:
					cout<<"\n Your Current Balance is: "<<balance;
					break;
				case 2:
				    cout<<"\n Enter the Amount you want to Deposit in you Account: ";
					cin>>dAmounts;
					if(dAmounts <= 0)
					{
						cout<<"Invalid Amount"<<endl;
					}
					else
					{
						cout <<"Amount Successfully Deposited! \n";
						balance += dAmounts;
					}
					break;
				case 3:
					cout<<"Enter the Amount you want to Withdraw: ";
					cin>>cAmounts;
					if(cAmounts <= balance && cAmounts>0 && cAmounts <= dailyLimit - withdrawanToday)
					{
						cout<<"Amount Successfully Withdrawn from Your Account";
						balance -= cAmounts;
						withdrawanToday += cAmounts;
						cout << "\nRemaining Daily Limit: "<< dailyLimit - withdrawanToday << endl;
					}
					else
					{
						cout << "Invalid Amount or Insufficient Balance or Daily Limit Exceeded!" << endl;
					}
					break;
				case 4:
					cout<<"Enter Your Current Pin: ";
					cin>>enteredPin;
					if(enteredPin == pin)
					{
						cout << "Enter New PIN: ";
						cin >> changePin;
						
						if(changePin >= 1000 && changePin <= 9999)
						{
							pin = changePin;
							cout << "PIN Changed Successfully!" << endl;
						}
						else
						{
							cout<<"Pin must be 4 Digits"<<endl;
						}
					}
					else
					{
						cout<<"Wrong PIN"<<endl;
					}
					break;
				case 5:
					cout<<"Thanks for Using Our ATM Services \n See You Again ";
					break;
				default:
					cout<<"Ivalid Choice ";
					break;		
			}
		}while(choice != 5);
	}
	return 0;
}
