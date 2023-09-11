/*  Faça um programa que exiba a sequência de Fibonacci até um número específico
fornecido pelo usuário. A sequência começa com 0 e 1, e cada termo subsequente é
a soma dos dois anteriores.  */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int termo1 = 0, termo2 = 1, somaTermos = 1;
    int limite;

    printf("Informe um número para que a sequência Fibonacci seja exibida: ");
    scanf("%d", &limite);

    while(somaTermos <= limite){
        printf("%d\n", somaTermos);
        termo1 = termo2;
        termo2 = somaTermos;
        somaTermos = termo1 + termo2;
    }
}