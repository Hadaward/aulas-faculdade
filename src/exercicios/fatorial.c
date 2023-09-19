// Exercício de tabuada
#include <stdio.h>
#include "../unicode.h"

void exe_fatorial() {
    int num = -1;

    uprintf(L"***************************\n");
    uprintf(L"** Fatorial de um número **\n");
    uprintf(L"***************************\n");

    do {
        uprintf(L"Digite um número inteiro e positivo:\n>> ");
        scanf("%d", &num);
    } while (num < 0);

    for (int i = num - 1; i > 1; i--) {
        num *= i;
    }

    uprintf(L"O fatorial é: %d\n", num);
}