#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << "Mike" << endl;
        return;
    }
    if (n % 2 == 1)
    {
        cout << "Mike" << endl;
        return;
    }
    // ll idx = -1;
    ll mn = *min_element(a.begin(), a.end());

    ll idx = -1;

    for (ll i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            idx = i;
            break;
        }
    }

    idx++;

    if (idx % 2 == 1)
    {
        cout << "Joe" << endl;
    }
    else
    {
        cout << "Mike" << endl;
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