/*  . Escreva um programa que calcule e imprima o fatorial de um número inteiro positivo 
dado pelo usuário.  */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, fatorial;

    printf("Informe um número: ");
    scanf("%d", &numero);

    for(fatorial = 1; numero > 1; numero = numero - 1){
        fatorial = fatorial * numero;
    }

    printf("%d\n", fatorial);
}
