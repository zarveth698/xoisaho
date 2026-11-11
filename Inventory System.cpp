#include <iostream>
using namespace std;
int main()
{
	int balance = 200;
	int level = 5;
	int choice;
	bool hasShield = false;
	bool haveSword = false;
	
	cout<<"Enter the Balance You want in Your Wallet: ";
	cin>>balance;
	
	cout<<"Enter the Level You want in Your Game: ";
	cin>>level;
	
	
	do
	{
		cout<<"\n Your Current Balance is: "<<balance<<"\n What you want to purchase from this menu: \n 1. Sword: Price= 100 \n 2. Shield: Price = 150 \n 3. HealthPotion: Price = 50"<<endl;
		cin>>choice;
	
	switch(choice)
	{
		case 1:
			if(level >= 2 || balance >= 100 || hasShield == true)
			{
				cout<<" Sword Successfully Purchased";
				balance -= 100;
				cout<<"\n Remaining Balance is "<<balance;
				haveSword = true;
			}
			else
			{
				cout<<"\n There might be Low Level or Balance.......!!\n =========================================";
			}
		break;
		
		case 2:
			if(level >= 5 && balance >= 150 && haveSword == true)
			{
				cout<<"Shield Successfully Purchased";
				balance -= 150;
				cout<<"\n Remaining Balance is "<<balance;
			}
			else
			{
				cout<<"\n Item Can't be Purchased right now.....!!!\n =========================================";
			}
		break;
		
		case 3:
			if(balance >= 50)
			{
				cout<<"Successfully Purchased";
				balance -= 50;
				cout<<"\n Remaining Balance is "<<balance;
				hasShield = true;
			}
			else
			{
				cout<<"\n Insufficient Balance\n =========================================";
			}
		break;
		default:
			cout<<"\n Invalid Choice\n =========================================";
		break;
		
		
	}
	}while(choice !=0);
	
	return 0;
}
