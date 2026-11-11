#include <iostream>
using namespace std;

class Calculator
{
public:
	float num1, num2;
	
	void input()
	{
		cout<<"======================================Basic CAlCULATOR USING OOPS in C++========================================="<<endl;
		cout<<"Enter the First Number: ";
		cin>>num1;
		
		cout<<"Enter the Second Number: ";
		cin>>num2;
	}
	
	void Addition()
	{
		cout<<"Addition of the Number is: "<<num1+num2<<"\n";
	}
	void Subtraction()
	{
		cout<<"Subtraction of the Number is: "<<num1-num2<<"\n";
	}
	void Multiplication()
	{
		cout<<"Multiplication of the Number is: "<<num1*num2<<"\n";
	}
	void Division()
	{
		if(num2 == 0)
		{
			cout<<"Division is Not Possible \n";
		}
		else
		{
			cout<<"Division of the Number is: "<<num1/num2<<"\n";
		}
		
	}
};

int main()
{
		int choice;
		Calculator C1;
		do 
		{
			C1.input();
			cout<<"Which funciton do you want to use: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division "<<endl<<"------>";
			cin>>choice;
		
			switch(choice)
			{
				case 1:
					C1.Addition();
				break;
				case 2:
					C1.Subtraction();
				break;
				case 3:
					C1.Multiplication();
				break;
				case 4:
				C1.Division();
				break;
				
				default:
					cout<<"Invalid Entry Try Again......>>";
				break;
			}
		}while(choice != 0);
}


