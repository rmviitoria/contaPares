/******************************************************************************

Crie um programa que imprime os números pares de 0 a 2000.

*******************************************************************************/
#include <stdio.h>

int main() {
    int i;

    printf("Números pares de 0 a 2000:\n");
    for (i = 0; i <= 2000; i += 2) {
        printf("%d\n", i);
    }

    return 0; 
}
