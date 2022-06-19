#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n + 1, vector<ll>(m + 1, 0));
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<vector<ll>> mn(n + 5, vector<ll>(m + 5, 1e18));
    vector<vector<ll>> mx(n + 5, vector<ll>(m + 5, -1e18));
    mn[n][m] = mx[n][m] = a[n][m];
    for (ll i = n; i > 0; i--)
    {
        for (ll j = m; j > 0; j--)
        {
            if (i == n && j == m)
                continue;
            mn[i][j] = a[i][j] + min(mn[i + 1][j], mn[i][j + 1]);
            mx[i][j] = a[i][j] + max(mx[i + 1][j], mx[i][j + 1]);
        }
    }
    if (mn[1][1] <= 0 && mx[1][1] >= 0 && mx[1][1] % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}