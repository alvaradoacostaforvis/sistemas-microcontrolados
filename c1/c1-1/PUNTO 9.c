#include <stdio.h>//punto 9 

int main() {
    int bit;
    int estado = 0; // 0=S0, 1=S1, 2=S2, 3=S3

    printf("Ingrese 1 bits (0 o 1) y luego enter para ingresar los bist restantes hasta llegar a un 1byte (8bits):\n");

    for (int i = 0; i < 8; i++) {
        printf("Bit #%d: ", i + 1);
        scanf("%d", &bit);//(%d  “voy a leer un número entero” )  (&x “guárdalo dentro de la variable)

        // Si el usuario mete algo diferente de 0 o 1, lo vuelve a pedir
        if (bit != 0 && bit != 1) {// Si el bit no es 0 ni 1 (! = es diferente de)
            printf("Solo se permite 0 o 1.\n");
            i--; // para repetir este mismo intento
            continue;// Salta al siguiente ciclo del for sin ejecutar el código de abajo
        }

        // Máquina de estados para detectar 1011
        if (estado == 0) {              // S0
            if (bit == 1) estado = 1;
        }
        else if (estado == 1) {         // S1: "1"
            if (bit == 0) estado = 2;   // "10"
            else estado = 1;            // sigue siendo posible inicio "1"
        }
        else if (estado == 2) {         // S2: "10"
            if (bit == 1) estado = 3;   // "101"
            else estado = 0;            // se rompe
        }
        else if (estado == 3) {         // S3: "101"
            if (bit == 1) {
                printf("Cerradura abierta\n"); // detectó 1011
                estado = 1; // el último fue 1, puede servir para iniciar otra vez
            } else {
                estado = 2; // queda como "10"
            }
        }
    }

    return 0;
}
