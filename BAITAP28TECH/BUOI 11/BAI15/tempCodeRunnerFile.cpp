#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool ok=false;
    int v;
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(long long i=2;i<=n;i++)
    {
        for(long long  j=0;j<n;j++)
        {
            if(a[j]%i!=0)
            {
                ok=false;
                break;
            }
            ok=true;
        }
       if(ok==true)
        {
            cout<<i<<endl;
        }

    }
    return 0;
}