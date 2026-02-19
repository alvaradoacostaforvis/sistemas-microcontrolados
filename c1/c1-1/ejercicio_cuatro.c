#include <stdio.h>
#include <stdlib.h>

int main() {

    char buffer[100];
    long NUMERO;
    char *endptr;

    printf("Ingrese un numero entero positivo: ");

    
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        return 1; 
    }

   
    NUMERO = strtol(buffer, &endptr, 10);

    
    if (*endptr != '\n' && *endptr != '\0') {
        printf("Error: El tipo de dato no es correcto y el programa no se puede ejecutar.\n");
        return 1;
    }

    if (NUMERO <= 0) {
        printf("Error: El numero debe ser entero positivo y el programa no se puede ejecutar.\n");
        return 1;
    }

    long suma = 0;
    long impar = 1;

    printf("{\n");
    printf("  \"NUMERO\": %ld,\n", NUMERO);
    printf("  \"operacion\": \"");

    for (long i = 0; i < NUMERO; i++) {
        suma += impar;
        printf("%ld", impar);

        if (i < NUMERO - 1) {
            printf(" + ");
        }

        impar += 2;
    }

    printf("\",\n");
    printf("  \"resultado\": %ld\n", suma);
    printf("}\n");

    return 0;
}
