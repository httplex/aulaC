#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[30];
    int idade;

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Nome: %s \nIdade: %d",nome,idade);
}