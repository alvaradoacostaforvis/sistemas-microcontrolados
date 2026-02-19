#include <stdio.h>

int main() {
    int NUMERO;
    long long f0 = 0, f1 = 1, fn;

    printf("Ingrese un numero entero: ");
    scanf("%d", &NUMERO);

    if (NUMERO < 2) {
        printf("Error: NUMERO debe ser mayor o igual a 2.\n");
        return 0;
    }

    
    if (NUMERO == 0) {
        fn = f0;
    } else if (NUMERO == 1) {
        fn = f1;
    } else {
        for (int i = 2; i <= NUMERO; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
    }

    printf("El valor en la posicion %d de Fibonacci es: %lld\n", NUMERO, fn);

    return 0;
}