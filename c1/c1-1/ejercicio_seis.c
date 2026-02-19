#include <stdio.h>
#include <stdlib.h>

int main() {

    char buffer[100];
    long VALOR;
    char *endptr;

    printf("Ingrese un numero entero: ");

    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        return 1;  
    }

    VALOR = strtol(buffer, &endptr, 10);

   
    if (*endptr != '\n' && *endptr != '\0') {
        printf("Error: El tipo de dato no es correcto y el programa no se puede ejecutar.\n");
        return 1;
    }

   
    if ((VALOR & 1) == 0) {
        printf("{\n");
        printf("  \"VALOR\": %ld,\n", VALOR);
        printf("  \"resultado\": \"PAR\"\n");
        printf("}\n");
    } else {
        printf("{\n");
        printf("  \"VALOR\": %ld,\n", VALOR);
        printf("  \"resultado\": \"IMPAR\"\n");
        printf("}\n");
    }

    return 0;
}
