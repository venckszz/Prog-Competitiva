#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(nullptr);

    ll n; cin >> n;
    cout << n % 2 << endl;

    cout << reduce(
        istream_iterator<ll>(cin),
        istream_iterator<ll>(),
        0,
        [] (ll const& acc, ll const& elem) {
            return acc ^ (elem == 2);
        }
    ) << endl;
}
