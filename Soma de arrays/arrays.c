#include <stdio.h>

int main () {
    int array[] = {1,-3,2};

    int r = sum_array(array, (int) sizeof(array)/sizeof(array[0]));

    printf("%d", r);


    return 1;
}

int sum_array (int array[], int len) {

    /* Caso base*/
    if (len == 0)
        return 0;

    return array[len - 1] + sum_array(array, len -1);

}
