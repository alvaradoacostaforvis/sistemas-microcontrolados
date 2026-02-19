#include <stdio.h>// punto 7 

int main() {
    unsigned char REGISTRO_ESTADO;

    
    REGISTRO_ESTADO = 0b10110110; // 182 en decimal

    //   nibble inferior bits 0-3
    unsigned char nibble_inferior = REGISTRO_ESTADO & 0x0F;//nibble_inferio se refiere a los 4 primeros bits 0-3 
    // muestra el bit 5 (0 o 1)
    unsigned char bit5 = (REGISTRO_ESTADO >> 5) & 0x01;

    printf("REGISTRO_ESTADO = %u\n", REGISTRO_ESTADO);
    printf("Nibble inferior (bits 0-3) = %u\n", nibble_inferior);
    printf("Bit 5 = %u\n", bit5);// u% imprime sin signo es decir el valor acsoluto  del blit 5

    return 0;
}
