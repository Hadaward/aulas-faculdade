#include <stdio.h>
#include "unicode.h"

#include "exercicios/loops.c"

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
    }
}