#include <stdio.h>

int potencia(int base, int exp) {
    int n;

    n = base * mult(base, exp - 1);
    return n;
}

int main() {
    int base, exp;

    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &exp);

    printf("Resultado: %d", mult(base, exp));

    return 0;
}