#include <stdio.h>

int main () {
    int base, expoente, res = 1, i;

    printf("Insira o valor da base: ");
    scanf("%d", &base);
    printf("Insira o valor do expoente: ");
    scanf("%d", &expoente);

    for (i = 1; i <= expoente; i++) {
        res = res * base;
    }

    printf("%d", res);

    return 0;
}
