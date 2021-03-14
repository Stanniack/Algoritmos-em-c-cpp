#include <stdio.h>

int main () {

    int array[100000], i;

    for (i = 0; i < 100000; i++)
        array[i] = i;

    int r = busca_sequencial_iterativa(0, array, (sizeof(array)/sizeof(array[0])) - 1);

    printf("%d\b", r);

    return 0;

}

int busca_sequencial_iterativa (int elemento, int array[], int tam_array) {

    for (int i = 0; i < tam_array; i++) {


        if (array[i] == elemento) {
            return i;
        }

    }

    return -1;
}

int busca_sequencial_recursiva (int elemento, int array[], int tam_array) {

    if (tam_array < 0)
        return -1;
    if (elemento == array[tam_array])
        return tam_array;

    return busca_sequencial_recursiva(elemento, array, tam_array - 1);
}

