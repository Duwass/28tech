#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int c=1;
        for(int j=0;j<=i;j++)
        {
            cout<<c<<' ';      
            c=c*(i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}