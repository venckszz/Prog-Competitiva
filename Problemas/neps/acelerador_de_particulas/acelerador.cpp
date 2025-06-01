#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(nullptr);

    ll d; cin >> d;

    d-=3; // distancia até o acel
    d-=2; // distancia até o sensor

    cout << d % 8 << endl;
}
