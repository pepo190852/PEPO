#include<iostream>
using namespace std;

int main()
{
    int n=6;
    double ans=0,n1=0;
    while(n!=20)
    {
    n1=1.0/n;
    ans=ans+n1;
    n=n+1;
    cout << n1 << endl;
    }
    cout << ans << endl;
    return 0;
}