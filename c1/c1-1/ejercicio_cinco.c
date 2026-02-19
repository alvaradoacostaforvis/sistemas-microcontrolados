#include <stdio.h>
#include <stdlib.h>

int main() {

    char buffer[100];
    long NUMERO;
    char *endptr;

    printf("Ingrese un numero entero (>= 2): ");

    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        return 1;  
    }

    NUMERO = strtol(buffer, &endptr, 10);

    
    if (*endptr != '\n' && *endptr != '\0') {
        printf("Error: El tipo de dato no es correcto y el programa no se puede ejecutar.\n");
        return 1;
    }

    
    if (NUMERO < 2) {
        printf("Error: NUMERO debe ser mayor o igual a 2.\n");
        return 1;
    }

    long f0 = 0;
    long f1 = 1;
    long resultado;

    for (long i = 2; i <= NUMERO; i++) {
        resultado = f0 + f1;
        f0 = f1;
        f1 = resultado;
    }

    printf("{\n");
    printf("  \"NUMERO\": %ld,\n", NUMERO);
    printf("  \"Fibonacci\": %ld\n", f1);
    printf("}\n");

    return 0;
}
