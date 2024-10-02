

// Problem Link : https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/A

#include <bits/stdc++.h>
#define Algo_Nagar                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);

#define ll long long
#define endl "\n"
using namespace std;

const int MAX_VALUE = 100005;

void processQueries()
{
    int n, q;
    cin >> n >> q;
    vector<int> values;
    int frequancy[MAX_VALUE] = {0};
    while (q--)
    {
        int operation, num;
        cin >> operation >> num;
        if (operation == 1)
        {
            values.push_back(num);
            frequancy[num]++;
        }
        else
        {
            cout << frequancy[num] << endl;
        }
    }
}

int main()
{
    Algo_Nagar
    processQueries();

    return 0;
}
