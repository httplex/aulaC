/*  Escreva um programa que calcule e imprima a área de um triângulo. Peça ao usuário
para inserir a base e a altura do triângulo.  */

#include <stdio.h>
#include <stdlib.h>

float area(float base, float altura);

int main(){
    float base, altura;

    printf("Informe a base do triângulo: ");
    scanf("%f", &base);
    printf("Informe a altura do triângulo: ");
    scanf("%f", &altura);

    printf("A área do triângulo é de: %2.f", area(base, altura));

}

float area(float base, float altura){
    return (base * altura) / 2;
}