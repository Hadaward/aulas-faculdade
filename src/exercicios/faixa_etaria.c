// Exercício de tabuada
#include <stdio.h>
#include "../unicode.h"

void exe_faixa_etaria() {
    int faixas[5] = {0, 0, 0, 0, 0};

    uprintf(L"....:: Digite a idade de 8 pessoas ::....\n");
    
    for (int i=0; i<8; i++) {
        int idade;

        uprintf(L"Pessoa %d: ", i + 1);
        scanf("%d", &idade);

        if (idade <= 15) {
            faixas[0]++;
        } else if (idade <= 30) {
            faixas[1]++;
        } else if (idade <= 45) {
            faixas[2]++;
        } else if (idade <= 60) {
            faixas[3]++;
        } else {
            faixas[4]++;
        }
    }

    uprintf(L"1° Faixa etária -> Até 15 anos há %d pessoas.\n", faixas[0]);
    uprintf(L"2° Faixa etária -> De 16 até 30 anos há %d pessoas.\n", faixas[1]);
    uprintf(L"3° Faixa etária -> De 31 até 45 anos há %d pessoas.\n", faixas[2]);
    uprintf(L"4° Faixa etária -> De 46 até 60 anos há %d pessoas.\n", faixas[3]);
    uprintf(L"5° Faixa etária -> Acima de 60 anos há %d pessoas.\n", faixas[4]);
    uprintf(L"O percentual de pessoas na primeira faixa é: %d\n", faixas[0] * 100 / 8);
    uprintf(L"O percentual de pessoas na última faixa é: %d\n", faixas[4] * 100 / 8);
}