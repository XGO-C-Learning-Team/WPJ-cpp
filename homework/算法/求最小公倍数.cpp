#include<iostream>
using namespace std;
int nnn(int n,int m)
{
	int MAX,MIN,i;
	MAX=max(n,m);
	MIN=min(n,m);
	for(i=1;1;i++)
	{
		if((MAX*i)%MIN==0)
		return MAX*i;
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<nnn(n,m);
	return 0;
}
