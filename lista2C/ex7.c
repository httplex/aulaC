/*  Faça um programa que peça a nota de um aluno em uma prova e verifique se ele foi
aprovado (nota maior ou igual a 6) ou reprovado (nota menor que 6).  */

#include <stdio.h>
#include <stdlib.h>

float resultado(float nota);

int main(){
    float nota;

    printf("Informe a nota do aluno: ");
    scanf("%f", &nota);

    return resultado(nota);
}

float resultado(float nota){
    if(nota >= 6){
        printf("Você passou!!!\n");
    } else {
        printf("Reprovado.\n");
    }
}