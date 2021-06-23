#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int day=0;
	for(int i=1;1;i++)
	{
		for(int j=1;j<=i;j++)
		{
		sum=sum+i;
		day++;if(day==n){cout<<sum;
		return 0; 
		}	
		}
	}
	return 0;
}
