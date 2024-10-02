

// Problem Link : https://vjudge.net/contest/658980#problem/A

#include <bits/stdc++.h>
#define Algo_Nagar                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define ll long long
#define endl "\n"
using namespace std;

vector<bool> visited;
vector<vector<int>> adj;
void dfs(int current)
{
    visited[current] = true;
    for (auto &i : adj[current])
    {
        if (visited[i])
            continue;
        dfs(i);
    }
}
void dowork()
{
    int n, m;
    cin >> n >> m;
    visited.assign(n, false);
    adj.assign(n, {});
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cc = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;
        dfs(i);
        cc++;
    }
    cout << (m == n - 1 && cc == 1 ? "YES" : "NO") << endl;
}

int main()
{
    Algo_Nagar
    dowork();

    return 0;
}
