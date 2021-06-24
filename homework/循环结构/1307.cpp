#include<iostream>
using namespace std;
int main()
{
	
	int n,m;
	cin>>n;
	for(;1;){
	
	if(n%10==0)
	n=n/10;
	else
	{
		break;
	}
}
	if(n<0)
	{
		cout<<"-";
		n=0-n;
	}
	for(int i=1;i<1000000000;i*=10)
	{
		m=n/i%10;
		if(n/i>0) 
		cout<<m;	
	}		
		
	

	return 0;
}
