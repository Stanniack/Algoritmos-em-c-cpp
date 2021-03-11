#include <stdio.h>
#include <time.h>

/* Método fora bruta */

void main () {
    clock_t initialTime;

    /* Armezena o tempo Inicial */
    initialTime = clock();

    int i, j, cont = 0;

    printf("Depois de 4 anos, estou de volta ao C\n\n");


    for (i = 1; i <= 100000; i++) {

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                cont++;

                /* Elimina elemento antes mesmo de terminar se não for primo */
                if (cont > 2) {
                    break;
                }
            }
        }

        if (cont == 2) {
            printf("%d ", i);
        }

        cont = 0;
    }


    clock_t finalTime = clock() - initialTime;

    printf("\n\nTempo de execucao: %lf", ((double)finalTime)/((CLOCKS_PER_SEC/1000)));
}
