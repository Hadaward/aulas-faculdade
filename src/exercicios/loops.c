// Exercício de Laços
#include <stdio.h>
#include "../unicode.h"

void exe_loops() {
    int op;
    float num1, num2;

    while(1) {
        system("cls");

        printf("******************\n");
        printf("....:: Menu ::....\n");
        printf("******************\n");

        uprintf(L"1. Adição\n");
        uprintf(L"2. Subtração\n");
        uprintf(L"3. Multiplicação\n");
        uprintf(L"4. Divisão\n");
        uprintf(L"5. Sair\n");

        uprintf(L">>> ");
        scanf("%d", &op);

        if (op == 5)
            break;

        if (op < 0 || op > 5) {
            uprintf(L"Operação inválida!");
            continue;
        }

        printf("******************************\n");
        printf("....:: Entrada de Dados ::....\n");
        printf("******************************\n");

        uprintf(L"Digite o 1° número: ");
        scanf("%f", &num1);

        uprintf(L"Digite o 2° número: ");
        scanf("%f", &num2);

        float resultado = 0;

        switch (op) {
        case 1:
            resultado = num1 + num2;
            break;
        case 2:
            resultado = num1 - num2;
            break;
        case 3:
            resultado = num1 * num2;
            break;
        case 4:
            if (num2 == 0) {
                uprintf(L"Impossível dividir por zero!\n");
                break;
            }
            resultado = num1 / num2;
            break;
        }

        uprintf(L"O resultado é: %.2f\n", resultado);
        system("pause");
    }
}