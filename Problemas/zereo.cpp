#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    ll n; cin >> n;

    stack<ll> s;

    ll sum = 0;

    for (ll i = 0; i < n; i++) {
        ll e; cin >> e;
        if (e == 0) {
            sum -= s.top(); s.pop();
            continue;
        }

        sum += e;
        s.push(e);
    }

    cout << sum << endl;
}
