// Exercício de tabuada
#include <stdio.h>
#include "../unicode.h"

void exe_media_simples() {
    float soma = 0;
    int qtd = 0;
    
    uprintf(L"*******************************\n");
    uprintf(L"** Média simples de N notas **\n");
    uprintf(L"*******************************\n");

    do {
        uprintf(L"Digite a quantidade de notas:\n>> ");
        scanf("%d", &qtd);
    } while (qtd <= 0);

    for (int i=0; i<qtd; i++) {
        float nota = -1;

        do {
            uprintf(L"Digite a nota %d:\n>> ", i + 1);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);
        
        soma += nota;
    }

    uprintf(L"A média é: %.2f\n", soma / qtd);
}