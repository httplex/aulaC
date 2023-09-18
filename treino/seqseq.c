#include <stdio.h>

int main() {
    int numero = 1296;
    int indice = 1;

    while (numero <= 10000) {
        printf("%d, ", numero);

        if (indice % 2 == 0) {
            numero = 4; // Alterna para 4 em números pares
        } else {
            numero = 1296; // Alterna para 1296 em números ímpares
        }

        indice++;
    }

    printf("\n");

    return 0;
}
