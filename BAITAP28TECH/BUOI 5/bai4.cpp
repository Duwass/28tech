#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<'0';
            break;
        }
        else
        {
            cout<<'1';
            break;
        }
    }
    return 0;
}