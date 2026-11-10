#include <iostream>
using namespace std;
int main()
{
	int num[10];
	int count;
	
	while(count<10)
	{
		int newNum;
		bool duplicate = false;
		cout<<"Enter the Number "<<count+1<<": ";
		cin>>newNum;
		
		for(int i=0; i<count; i++)
		{
			if(newNum == num[i])
			{
				duplicate = true;
			}
		}
		
		if(duplicate)
		{
			cout<<"Same Number Spotted.......Try Again \n";
			
		}
		else
		{
			num[count] = newNum;
			count++;
		}
		
	}
	return 0;
}
