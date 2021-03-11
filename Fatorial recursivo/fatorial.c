#include <stdio.h>

#define DEBUG
#undef DEBUG

int main () {

    int r = fatorial(0);
    printf("\n%d", r);

    return 0;

}

int fatorial (int f) {
    #ifdef DEBUG
        printf(" %d * %d +", f, f -1);
    #endif

    if (f <= 1)
        return 1;

    return f * fatorial (f - 1);
}
