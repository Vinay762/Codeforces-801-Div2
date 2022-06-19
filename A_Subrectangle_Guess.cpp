#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a = -1, b = -1;
    ll mx = -1e18;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            ll t;
            cin >> t;
            if (t > mx)
            {
                mx = t;
                a = i;
                b = j;
            }
        }
    }
    a = max(a, n - a + 1);
    b = max(b, m - b + 1);
    cout << a * b << endl;
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