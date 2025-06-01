// https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/baralho/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// P, C, E, U
// 13 cada
// ddN, 01 e 13 + naipe

#define UPLIM 156
#define ERRO INT_MAX

int digito(char c) {
    return c - '0';
}

int cartas['U'+1];

void pcarta(const char c) {
    if (cartas[c] != ERRO)
        printf("%d\n", __builtin_popcount(cartas[c]));
    else
        puts("erro");
}

int main(void) {
    cartas['P'] = 0b1111111111111;
    cartas['C'] = 0b1111111111111;
    cartas['E'] = 0b1111111111111;
    cartas['U'] = 0b1111111111111;

    char line[UPLIM];

    if (fgets(line, UPLIM, stdin) == NULL)
        return 1;

    for (int i = 0; i < UPLIM; i += 3) {
        if (line[i] == '\n' || line[i] == '\0')
            break;

        char naipe = line[i + 2];

        if (cartas[naipe] == ERRO)
            continue;

        char n = digito(line[i]) * 10 + digito(line[i + 1]);

        int bitCarta = 1<<(n-1);

        if (~cartas[naipe] & bitCarta) {
            cartas[naipe] = ERRO;
            continue;
        }

        cartas[naipe] ^= bitCarta;
    }

    pcarta('C');
    pcarta('E');
    pcarta('U');
    pcarta('P');

    return 0;
}
