#include <stdio.h>

// Função para imprimir números intercalados
void imprimir_intercalados(int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (i % 2 == 0) {
            printf("0");
        } else {
            printf("1");
        }
    }
    printf("\n");  // Pule para a próxima linha após imprimir cada sequência
}

int main() {
    // Tamanhos desejados para o wallpaper
    int tamanhos[] = {6, 12, 18, 24};

    // Imprimir sequências intercaladas para os tamanhos desejados
    for (int i = 0; i < sizeof(tamanhos) / sizeof(tamanhos[0]); i++) {
        imprimir_intercalados(tamanhos[i]);
    }

    return 0;
}
