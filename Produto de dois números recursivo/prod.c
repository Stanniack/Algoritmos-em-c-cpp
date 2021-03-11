#include <stdio.h>

#define DEBUG

int main () {

    int r = poligono(5, 5);

    printf("%d", r);

    return 1;
}


int poligono (int prod1, int prod2) {

    if (prod2 == 0)
        return 0;

    if (prod2 == 1)
        return prod1;

    return prod1 + poligono(prod1, prod2 - 1);
}
