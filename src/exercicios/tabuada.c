// Exercício de tabuada
#include <stdio.h>
#include "../unicode.h"

void exe_tabuada() {
    int num;

    uprintf(L"Digite um número inteiro para gerar a tabuada:\n>> ");
    scanf("%d", &num);

    for (int i=0; i<=10; i++) {
        uprintf(L"%d * %d -> %d\n", num, i, num * i);
    }
}