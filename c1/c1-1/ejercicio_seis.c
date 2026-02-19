#include <stdio.h>

int main() {
    int VALOR;

    printf("Ingrese un numero entero: ");
    scanf("%d", &VALOR);

    if (VALOR & 1) {
        printf("El numero %d es IMPAR.\n", VALOR);
    } else {
        printf("El numero %d es PAR.\n", VALOR);
    }

    return 0;
}