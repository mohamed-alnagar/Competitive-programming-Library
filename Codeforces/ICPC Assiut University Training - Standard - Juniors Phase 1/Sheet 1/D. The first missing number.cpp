

// Problem Link : https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/D

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
    int n, m;
    cin >> n >> m;
    unordered_set<int> numbers;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        numbers.insert(num);
    }
    for (int i = -m; i <= m; i++)
    {
        if (numbers.find(i) == numbers.end())
        {
            cout << i << endl;
            break;
        }
    }
}

int main()
{
    Algo_Nagar
    processQueries();

    return 0;
}
