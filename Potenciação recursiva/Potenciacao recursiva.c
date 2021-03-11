#include <stdio.h>

#define DEBUG


int main () {

    int r = pow(2, 2);

    printf("%d", r);

    return 0;

}

int pow(int base, int expo) {

    /* caso base */
    if (expo <=1)
        return 1;


    return base * pow(base, expo - 1);

}
