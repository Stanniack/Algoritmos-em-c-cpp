#include <stdio.h>


int main () {

    int x = 0;
    int r = fibonacci(2, 0);

    printf("%d", r);

    return 0;

}

int fibonacci(n, x) {

    if (n <= 1)
        return x;

    return fibonacci(n - 1, x + 1) + fibonacci(n - 2, x + 1);

}
