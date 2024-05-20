#include <bits/stdc++.h>
using namespace std;




int main()
{
    int n,sum=0;
    cin >> n;
    int vect[n][3];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> vect[i][j];
        }
    }

    
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<n;j++)
        {
            sum = sum + vect[j][i];
        }

        if (sum != 0)
        {
            cout << "NO";
            return 0;
        }
        else
            sum=0;
    }
     cout << "YES";
     return 0;
}