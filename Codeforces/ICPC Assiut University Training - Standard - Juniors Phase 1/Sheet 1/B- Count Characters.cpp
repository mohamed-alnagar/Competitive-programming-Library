

// Problem Link : https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/B

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
    string s;
    cin >> s;
    int frequancy[MAX_VALUE] = {0};
    for (char c : s)
    {
        frequancy[c]++;
    }

    for (int i = 0; i < MAX_VALUE; i++)
    {
        if (frequancy[i] > 0)
        {
            cout << char(i) << " " << frequancy[i] << endl;
        }
    }
}

int main()
{
    Algo_Nagar
    processQueries();

    return 0;
}
