

// Problem Link : https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/E

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
    vector<ll> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + v[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
    }
}

int main()
{
    Algo_Nagar
    processQueries();

    return 0;
}
