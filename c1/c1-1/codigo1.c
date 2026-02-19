//codigo 1
#include <stdio.h>

int main() {
    int NUMERO;
    int UNIDAD, DECENA, CENTENA, UNIDAD_DE_MIL;

    printf("Ingrese un numero entero de 4 digitos: ");
    scanf("%d", &NUMERO);

    if (NUMERO < 1000 || NUMERO > 9999) {
        printf("El numero esta fuera del rango permitido (1000 - 9999).\n");
        return 0;
    }

    UNIDAD = NUMERO % 10;
    DECENA = (NUMERO / 10) % 10;
    CENTENA = (NUMERO / 100) % 10;
    UNIDAD_DE_MIL = NUMERO / 1000;

    printf("{ 'Numero': %d, 'Unidad': %d, 'Decena': %d, 'Centena': %d, 'Unidad de mil': %d }\n",
           NUMERO, UNIDAD, DECENA, CENTENA, UNIDAD_DE_MIL);

    return 0;
}
//Una variable llamada NUMERO contiene un entero de 4 dígitos (mayor o igual a 1000 y menor o igual 9999). En caso que la variable NUMERO esté fuera del rango (menor a 1000 o mayor a 9999) entonces no se debe ejecutar el programa. Mostrar en pantalla cual es la unidad de mil, la centena, la decena y la unidad. No usar arreglos, vectores, listas o cualquier otro dato de ese tipo, la variable NUMERO debe ser de tipo entero. Resultado esperado en pantalla: {'Número' : NUMERO, 'Unidad' : UNIDAD, 'Decena' : DECENA, 'Centena' : CENTENA, 'Unidad de mil' : UNIDAD_DE_MIL}