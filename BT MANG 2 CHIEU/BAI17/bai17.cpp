#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[n][m];
    memset(b,0,sizeof(b));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                for (int k = 0; k < m; k++)
                {
                   b[i][k]=1;
                }
                for(int k=0;k<n;k++)
                {
                    b[k][j]=1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cout << b[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}