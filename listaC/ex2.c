#include <stdio.h>
#include <stdlib.h>

int grausFahrenheit(int grausCelsius);

int main(){
    int grausCelsius;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%d", &grausCelsius);

    printf("A temperatura em Fahrenheit é de: %d \n", grausFahrenheit(grausCelsius));
}

int grausFahrenheit(int grausCelsius){
    return (grausCelsius * 1.8) + 32;
}
