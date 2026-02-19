//codigo 3
#include <stdio.h>

int main() {
    int NUMERO;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &NUMERO);

    if (NUMERO <= 1) {
        printf("Debe ingresar un numero mayor que 1.\n");
        return 0;
    }

    int primo[NUMERO];

    for (int i = 0; i < NUMERO; i++) {
        primo[i] = 1;
    }

    primo[0] = 0;
    primo[1] = 0;

    for (int i = 2; i * i < NUMERO; i++) {
        if (primo[i] == 1) {
            for (int j = i * i; j < NUMERO; j += i) {
                primo[j] = 0;
            }
        }
    }

    printf("Numeros primos menores que %d:\n", NUMERO);

    for (int i = 2; i < NUMERO; i++) {
        if (primo[i] == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
//Crear un programa pida al usuario un número entero positivo y almacenarlo en la variable NUMERO. Usando NUMERO como límite, aplicar la Criba de Eratóstenes e imprimir en pantalla todos los números menores a NUMERO que son primos.