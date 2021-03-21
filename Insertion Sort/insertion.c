#include <stdio.h>

#define DEBUG
#undef DEBUG

void insertionSort(int array[], int len);

int main () {
    int array[] = {1, 8, 4, 6, 3}, len = 5;
    insertionSort(array, len);

    for (int i = 0; i < len; ++i)
        printf("%d ", array[i]);

    printf("\n");

}

void insertionSort (int array[], int len) {
    int i, j, tmp, tmp_index, flag;

    for (j = 0; j < len; j++) {
        tmp = array[j];
        flag = 0;

        for (i = j + 1; i < len; i++) {
            if (tmp > array[i]) {
                tmp = array[i];
                tmp_index = i;
                flag = 1;
            }
        }

        /* Se a flag for > 0, então o primeiro elemento não é o menor*/
        if (flag > 0) {
            array[tmp_index] = array[j];
            array[j] = tmp;
        }

    }

}
