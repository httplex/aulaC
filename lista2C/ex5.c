#include <stdio.h>
#include <stdlib.h>

int parImpar(int numero);

int main(){
    int numero;

    printf("Informe o número: ");
    scanf("%d", &numero);

    return parImpar(numero);
}

int parImpar(int numero){
    if(numero % 2 == 0){
        printf("O número é par!\n");
    } else {
        printf("O número é ímpar.\n");
    }
}