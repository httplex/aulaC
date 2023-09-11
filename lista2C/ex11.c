/*  Implemente um programa que peça ao usuário para adivinhar um número inteiro
secreto entre 1 e 100. Forneça dicas de "maior" ou "menor" até que o usuário acerte.  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Gerar um número inteiro secreto entre 1 e 100
    int numeroSecreto = (rand() % 100) + 1;
    int tentativa, tentativas = 0;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número secreto entre 1 e 100.\n");

    do {
        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);
        tentativas++;

        if (tentativa < numeroSecreto) {
            printf("Tente um número maior.\n");
        } else if (tentativa > numeroSecreto) {
            printf("Tente um número menor.\n");
        } else {
            printf("Parabéns! Você acertou o número secreto %d em %d tentativas.\n", numeroSecreto, tentativas);
        }
    } while (tentativa != numeroSecreto);

    return 0;
}
