#include <stdio.h>
#include "unicode.h"

#include "exercicios/loops.c"
#include "exercicios/tabuada.c"
#include "exercicios/faixa_etaria.c"
#include "exercicios/media_simples.c"
#include "exercicios/fatorial.c"

typedef struct Exercicio {
    wchar_t *name;
    void (*cb)();
} Exercicio;

Exercicio exercicios[] = {
   {
    L"Exercício de Laços",
    exe_loops
   },
   {
    L"Exercício de Tabuada",
    exe_tabuada
   },
   {
    L"Exercício de Faixa Etária",
    exe_faixa_etaria
   },
   {
    L"Exercício de Média Simples",
    exe_media_simples
   },
   {
    L"Exercício de Fatorial",
    exe_fatorial
   },
   {
    L"Sair",
    NULL
   } 
};

int main() {
    for (;;) {
        int op;

        printf("******************\n");
        printf("....:: Menu ::....\n");
        printf("******************\n");

        for (int i=0;; i++) {
            uprintf(L"%d - %ls\n", i+1, exercicios[i].name);

            if (exercicios[i].cb == NULL) {
                break;
            }
        }

        uprintf(L">> ");
        scanf("%d", &op);

        op--;

        if (exercicios[op].cb == NULL)
            break;

        exercicios[op].cb();
        system("pause");
        system("cls");
    }
}