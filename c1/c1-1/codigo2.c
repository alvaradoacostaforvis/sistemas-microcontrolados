//codigo 2
#include <stdio.h>

double raizNewton(int NUMERO) {
    double aproximacion = NUMERO;
    double tolerancia = 0.00001;
    double diferencia;

    if (NUMERO == 0)
        return 0;

    do {
        double nueva = (aproximacion + NUMERO / aproximacion) / 2;
        diferencia = nueva - aproximacion;
        if (diferencia < 0)
            diferencia = -diferencia;
        aproximacion = nueva;
    } while (diferencia > tolerancia);

    return aproximacion;
}

int main() {
    int NUMERO;
    double RESULTADO;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &NUMERO);

    if (NUMERO < 0) {
        printf("El numero debe ser positivo.\n");
        return 0;
    }

    RESULTADO = raizNewton(NUMERO);

    printf("{ 'Numero': %d, 'Raiz cuadrada usando Newton': %.5lf }\n", NUMERO, RESULTADO);

    return 0;
}
//De un número entero positivo que está guardado en una variable llamada NUMERO, mostrar en pantalla su raíz cuadrada usando el método de Newton. Para este ejercicio debe realizarse una función que acepte el valor la variable NUMERO y retorne el resultado usando el método de Newton, sin usar una librería que contenga esa función. Resultado esperado en pantalla: {'Número' : NUMERO, 'Raíz cuadrada usando Newton' : RESULTADO}