#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, m;
    cin>>n>>m;
    int count = 0, flag = 0;
    if(m > n)
    {
        int num = m;
        while(num != n)
        {
            if(num % 2 == 1)
            {
                num += 1;
            }
            else
            {
                num /= 2;
            }
            count++;
            if(num < 0)
            {
                flag = -1;
                break;
            }
        }
    }
    else if (m < n)
    {
        count = n-m;
    }
    cout<<count<<'\n';
    return 0;
}
