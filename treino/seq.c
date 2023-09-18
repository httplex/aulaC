#include <stdio.h>

// Função recursiva para calcular o N-ésimo número triangular
int numeroTriangular(int n) {
    if (n <= 0) {
        return 0;
    } else {
        return n + numeroTriangular(n - 1);
    }
}

// Função recursiva para imprimir o triângulo equivalente
void imprimirTriangulo(int n, int linha, int coluna) {
    if (linha <= n) {
        if (coluna <= linha) {
            printf("* ");
            imprimirTriangulo(n, linha, coluna + 1);
        } else {
            printf("\n");
            imprimirTriangulo(n, linha + 1, 1);
        }
    }
}

int main() {
    int N;

    printf("Digite um número natural N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O número deve ser maior que zero.\n");
        return 1;
    }

    int resultado = numeroTriangular(N);
    printf("O %d-ésimo número triangular é %d.\n", N, resultado);

    printf("Triângulo equivalente:\n");
    imprimirTriangulo(N, 1, 1);

    return 0;
}
