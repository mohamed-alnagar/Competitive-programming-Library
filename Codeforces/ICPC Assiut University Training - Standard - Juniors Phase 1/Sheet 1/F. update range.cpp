

// Problem Link :https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/F

#include <bits/stdc++.h>
#define Algo_Nagar                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define ll long long
#define endl "\n"
using namespace std;

const int MAX_VALUE = 256;

void processQueries()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    vector<ll> sum(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    while (q--)
    {
        int l, r, value;
        cin >> l >> r >> value;
        ;
        if (r == n)
        {
            sum[l] += value;
        }
        else
        {
            sum[l] += value;
            sum[r + 1] -= value;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        sum[i] += sum[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] + sum[i] << " ";
    }
}
int main()
{
    Algo_Nagar
    processQueries();

    return 0;
}
