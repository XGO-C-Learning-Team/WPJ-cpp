#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
    double a,h,ans;
    cin>>a>>h;
    ans=a*h;
    cout<<fixed<<setprecision(3)<<ans;
    return 0;
}
