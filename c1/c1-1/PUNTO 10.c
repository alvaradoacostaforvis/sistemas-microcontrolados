#include <stdio.h> //punto 10 

int main() {
    int LECTURASADC[10] = {520, 510, 530, 525, 540, 535, 550, 545, 560, 555};// Declara un arreglo para almacenar las lecturas ADC y otro para las lecturas filtradas, así como una variable de índice
    int FILTRADAS[10];// Declara un arreglo para almacenar las lecturas ADC y otro para las lecturas filtradas, así como una variable de índice
    int i;// Declara un arreglo para almacenar las lecturas ADC y otro para las lecturas filtradas, así como una variable de índice

    FILTRADAS[0] = 0;
    FILTRADAS[1] = 0;
    FILTRADAS[9] = 0;

    for (i = 2; i <= 8; i++) {// Itera a través de las lecturas desde el índice 2 hasta el 8 para calcular las lecturas filtradas
        FILTRADAS[i] = (LECTURASADC[i] + LECTURASADC[i-1] + LECTURASADC[i-2]) / 3;// Calcula el promedio de la lectura actual y las dos anteriores para suavizar los datos
    }

    for (i = 0; i < 10; i++) {  // Itera a través de las lecturas y las filtradas
        printf("i=%d ADC=%d FILTRADA=%d\n", i, LECTURASADC[i], FILTRADAS[i]);// Imprime el índice, la lectura original y la lectura filtrada
    }

    return 0;// Finaliza el programa
}
