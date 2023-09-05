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