

// Problem Link : https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/C

#include <bits/stdc++.h>
#define Algo_Nagar                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);

#define ll long long
#define endl "\n"
using namespace std;

const int MAX_VALUE = 256;

void sortFunction()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (auto &value : v)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    Algo_Nagar
    sortFunction();

    return 0;
}
