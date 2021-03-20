#include <stdio.h>

void bubbleSort(int array[], int len);
#define DEBUG
#undef DEBUG


int main () {

    int array[] = {4, 7, 2, 1, 5}, len, i;
    len = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, len - 1);

    for (int i = 0; i < len; ++i) {
        printf("%d ", array[i]);
    }

    printf("\n");

}

void bubbleSort (int array[], int len) {
    int i;

    while (len > 0) {

        for (i = 0; i < len; i++) {
            #ifdef DEBUG
                printf("%d ? %d\n", array[i], array[i + 1]);
            #endif

            if (array[i] > array[i + 1]) {
                int tmp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = tmp;
            }
        }

        len--;
    }
}

