#include <stdio.h>//punto 8

// Función que recibe A, B, C (0 o 1) y devuelve F
int calcularF(int A, int B, int C) {// A, B, C deben ser 0 o 1
    int AB = A && B;   // A·B  (AND)
    int noC = !C;      // C̄   (NOT)
    int F = AB || noC; // (A·B) + C̄  (OR)
    return F;// Devuelve 1 si F es verdadero, 0 si es falso 
}

int main() {
    int A, B, C;

    printf("Tabla de verdad para F = (A·B) + C̄\n\n");
    printf("A B C | F\n");
    printf("------|---\n");

    // Recorremos todas las combinaciones posibles (0 y 1)
    for (A = 0; A <= 1; A++) {// A puede ser 0 o 1
        for (B = 0; B <= 1; B++) {// B puede ser 0 o 1
            for (C = 0; C <= 1; C++) {// C puede ser 0 o 1
                int F = calcularF(A, B, C);// Calculamos F para la combinación actual de A, B, C
                printf("%d %d %d | %d\n", A, B, C, F);// Imprimimos la combinación actual de A, B, C y el resultado F
            }
        }
    }

    return 0;
}
