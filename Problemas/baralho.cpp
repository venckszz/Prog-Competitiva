#include <bits/stdc++.h>

// P, C, E, U
// ddN, onde N é um de P C E ou U
// e dd é um número entre 01 e 13

using namespace std;

typedef unsigned long long ll;

int main() {

    string linha;
    getline(cin, linha);

    map<char, bitset<13>> cartas({
        {'P', bitset<13>(0)},
        {'C', bitset<13>(0)},
        {'E', bitset<13>(0)},
        {'U', bitset<13>(0)}
    });

    const ll total = linha.length();

    for (ll i = 0; i < total; i += 3) {
        char naipe = linha.at(i + 2);

        cartas.at(naipe).set(1);
    }

    return 0;
}
