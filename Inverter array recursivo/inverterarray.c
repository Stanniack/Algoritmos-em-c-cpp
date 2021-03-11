#include <stdio.h>


int main () {
    int* array[] = {1, 2, 3}, i;

    invert_array(array, 0, (int) sizeof(array)/sizeof(array[0]));

    for (i = 0; i < (int) sizeof(array)/sizeof(array[0]); i++) {
        printf("%d\n", array[i]);
    }

    return 0;

}

int invert_array(int* array[], int left, int right) {
    int value;

    if (left >= right)
        return 0;

    value = array[left];

    array[left] = array[right - 1];

    array[right - 1] = value;

    return invert_array(array, left + 1, right - 1);


}
