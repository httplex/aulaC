/*  Crie um programa que leia um número inteiro e imprima seu quadrado e cubo.  */

#include <stdio.h>
#include <stdlib.h>

int quadrado(int numero);
int cubo(int numero);

int main(){
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    printf("O quadrado desse número é: %d\nO cubo desse número é: %d", quadrado(numero), cubo(numero));
}

int quadrado(int numero){
return numero*numero;
}

int cubo(int numero){
return numero*numero*numero;
}