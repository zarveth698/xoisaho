#include <iostream>
using namespace std;
int main()
{
	int num[10];
	int maxNum;
	int minNum;
	for (int i = 0; i<10; i++)
	{
		cout<<"Enter Numbers "<<i+1<<": ";
		cin>>num[i];
		
	    if(num[i] > maxNum)
	    {
	    	maxNum = num[i] ;
     	}
     	if(num[i] < minNum)
	    {
	    	minNum = num[i] ;
     	}
    }
    cout<<"The Maximum Number is: "<<maxNum;
    cout<<"\nThe Minimum Number is: "<<minNum;
    
}
