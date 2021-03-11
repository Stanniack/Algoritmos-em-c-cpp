#include <stdio.h>

int main () {
    int i = 0, j = 0, menor, n, a1, a2, resultado = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf("%d %d", &a1, &a2);

        if (a1 < a2) {
            menor = a1;
        } else {
            menor = a2;
        }

        for (j = 1; j <= menor; j++) {
            if (a1%j == 0 && a2%j == 0) {
                resultado = resultado * j;
            }
        }

        printf("%d\n", resultado);
        resultado = 1;
    }

    return 0;
}
