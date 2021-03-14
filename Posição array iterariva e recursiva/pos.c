#include <stdio.h>

int main () {

    int array[4] = {3, 10, 5}, i;

    for (i = 0; i < 4; i++)
        printf("%d\n", array[i]);


    pos_array_recursiva(&array, 100, 1, 3);

    printf("\n");

    for (i = 0; i < 4; i++)
        printf("%d\n", array[i]);

    return 0;

}

void pos_array_iterativa (int *array, int elemento, int pos, int qtd_elementos) {
    int i;


    for (i = qtd_elementos - 1; i > pos; i--) {
        array[i] = array[i - 1];
    }

    printf("\n");
    array[pos] = elemento;

}

int pos_array_recursiva (int *array, int elemento, int pos, int qtd_elementos) {

    if (pos == qtd_elementos) {
        array[pos] = elemento;

        return ;
    }

    array[qtd_elementos] = array[qtd_elementos - 1];

    pos_array_recursiva(array, elemento, pos, qtd_elementos - 1);

}
