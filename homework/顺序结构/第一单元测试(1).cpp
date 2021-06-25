#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int i=1;
	cin>>n;
	if(n<0)
	{
	cout<<'-';
	n=0-n;	
	}
	while(i<=1000)
	{
	m=(n/i)%10;
	cout<<m;
	i=i*10;	
	}

	return 0; 
}
