#include <iostream>
using namespace std;
int main()
{
	int function, number1, number2;
	cout<<"<================================>\n Enter first number: ";
	cin>>number1;
	cout<<"Enter first number: ";
	cin>>number2;
	
	cout<<"Which funciton do you want to use: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division"<<endl<<"----->";
	cin>>function;
	
	
	switch(function)
	{
		case 1:
			cout<<"Addition of "<<number1<<" and "<<number2<<" is: "<<number1+number2;
			break;
		case 2:
			cout<<"Subtraction of "<<number1<<" and "<<number2<<" is: "<<number1-number2;
			break;
		case 3:
			cout<<"Multiplication of "<<number1<<" and "<<number2<<" is: "<<number1*number2;
			break;
		case 4:
			if(number2 != 0)
			{
				cout<<"Division of "<<number1<<" and "<<number2<<" is: "<<number1/number2;
			}
			else{
				cout<<"Number Can't be divided with Zero";
			}
			break;
			
		default:
			cout<<"Invalid Operation";
			break;
	}
	return 0;
}
