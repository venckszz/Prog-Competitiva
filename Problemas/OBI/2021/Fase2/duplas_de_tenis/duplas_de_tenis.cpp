#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(nullptr);

    /*
     * dynamic vector:
        vector<ll> v(
            (istream_iterator<ll>(cin)), istream_iterator<ll>());
        sort(v.begin(), v.end());
    */

    // we do fixed width
    vector<ll> v(4);

    // O(N * log(n))
    partial_sort_copy(istream_iterator<ll>(cin), istream_iterator<ll>(),
        v.begin(), v.end());
    
    cout << v[0] + v[3] - (v[1] + v[2]) << endl;
}
