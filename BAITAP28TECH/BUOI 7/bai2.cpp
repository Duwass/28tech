#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          a[i][j]=i+j+1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}