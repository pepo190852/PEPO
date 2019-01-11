#include<iostream>
using namespace std;

int main()
{
    int n=2;
    double ans=0,n1=0;
    while(n!=70)
    {
    n1=1.0/n;
    ans=ans+n1;
    n=n+1;
    cout << n1 << endl;
    }
    cout << ans << n << endl;
    return 0;
}