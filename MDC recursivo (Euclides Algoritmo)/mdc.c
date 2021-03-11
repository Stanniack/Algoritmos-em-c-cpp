#include <stdio.h>

#define DEBUG
#undef DEBUG

int main () {

    int r = MDC(72, 92);
    printf("%d", r);

    return 0;

}

int MDC (int a, int b) {
    #ifdef DEBUG
        printf(" %d * %d +", f, f -1);
    #endif

    if (b == 0)
        return a;

    return MDC(b, a % b);
}
