#include <stdio.h>

int main() {
    int n;
    int suma = 0;
    int impar;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("Los primeros %d numeros impares son:\n", n);

    for(int i = 1; i <= n; i++) {
        impar = 2 * i - 1;   // genera el numero impar
        suma += impar;       // lo suma
        printf("%d ", impar);
    }

    printf("\n\nLa suma de los impares es: %d\n", suma);
    printf("El cuadrado de %d es: %d\n", n, n * n);

    if(suma == n * n) {
        printf("El numero que ha ingresado se puede obtener mediante la suma de sus numeros impares.\n");
    } else {
        printf("No se cumple.\n");
    }

    return 0;
}
