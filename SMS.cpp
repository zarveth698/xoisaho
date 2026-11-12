#include <iostream>
using namespace std;
int main()
{
	string studentName;
	int marks;
	int total = 0;
	float perc;
	cout<<"Enter the Name of the Student: ";
	cin>>studentName;

	
	cout<<"Enter the Student Marks of Computer, Maths, English, Physics, Urdu Respectively: "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<i+1<<". ";
		cin>>marks;
		total += marks;
	}
	perc = (total/500.0)*100;
	cout<<"The Percentage of the Student is: "<<perc;
	
	if(perc>=90)
	{
		cout<<"\nContratulations! You've got A Grade";
	}
	else if(perc >=80)
	{
		cout<<"\nWell Done! You've got B Grade";
	}
	else if(perc>=70)
	{
		cout<<"\nNice Try! You've got C Grade";
	}
	else if(perc>=60)
	{
		cout<<"\nGood! You've got D Grade";
	}
	else
	{
		cout<<"\nBetter Luck Next Time! You've got F Grade";
	}
	return 0;
}
