#include <stdio.h>
#include <stdlib.h>

int verificar(int numero);

int main(){
    int numero;

    printf("Informe o número: ");
    scanf("%d", &numero);

    return verificar(numero);
}

int verificar(int numero){
    if(numero < 0){
        printf("O número é negativo.\n");
    } else if(numero > 0){
        printf("O número é positivo.\n");
    } else {
        printf("O número é igual a zero.\n");
    }
}