#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
       }
       sort(a,a+n);
       if(n%2==0)
       {
        cout<<a[(n/2)-1];
       }
       else{
        cout<<a[n/2];
       }

        
    }
    return 0;
}
