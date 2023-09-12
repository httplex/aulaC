/*  1. Implemente um programa de calculadora que ofereça as seguintes opções:
a. Soma (+)
b. Subtração (-)
c. Multiplicação (*)
d. Divisão (/)
e. Média Ponderada (MP)
Para a média ponderada, o usuário deve informar uma nota seguida do respectivo
peso enquanto quiser, e o programa deve calcular a média ponderada das “n” notas
com os “p” pesos.  */

#include<stdio.h>
#include<stdlib.h>

int main(){
    char opcao;
    int num1, num2;
    printf("Escolha uma das seguintes opções: \na. Soma (+) \nb. Subtração (-) \nc. Multiplicação (*) \nd. Divisão (/) \ne. Média Ponderada (MP)\n");
    scanf(" %c", &opcao);

    if(opcao == 'a'){
        printf("Informe o primeiro número: ");
        scanf("%d", &num1);
        printf("Informe o segundo número: ");
        scanf("%d", &num2);
        
        int soma = num1 + num2;
        printf("a soma é: %d\n", soma);
    
    } else if(opcao == 'b'){
        printf("Informe o primeiro número: ");
        scanf("%d", &num1);
        printf("Informe o segundo número: ");
        scanf("%d", &num2);
        
        int subtracao = num1 - num2;
        printf("a subtração é: %d\n", subtracao);
    
    } else if(opcao == 'c'){
        printf("Informe o primeiro número: ");
        scanf("%d", &num1);
        printf("Informe o segundo número: ");
        scanf("%d", &num2);
        
        int multiplicacao = num1 * num2;
        printf("a multiplicação é: %d\n", multiplicacao);
    }
     else if(opcao == 'd'){
        printf("Informe o primeiro número: ");
        scanf("%d", &num1);
        printf("Informe o segundo número: ");
        scanf("%d", &num2);
        
        int divisao = num1 / num2;
        printf("a divisão é: %d\n", divisao);
    
    } else if(opcao == 'e'){
        int n, p;
        double nota, peso, somaNotas = 0, somaPesos = 0, mediaPonderada;

        printf("Digite o número de notas: ");
        scanf("%d", &n);
        printf("Digite o número de pesos: ");
        scanf("%d", &p);

        for (int i = 1; i <= n; i++) {
        printf("Informe a nota %d: ", i);
        scanf("%lf", &nota);
        printf("Informe o peso para a nota %d: ", i);
        scanf("%lf", &peso);

        somaNotas += nota * peso;
        somaPesos += peso;
    }

    mediaPonderada = somaNotas / somaPesos;

    printf("A média ponderada é: %.2lf\n", mediaPonderada);    

    } else {
        printf("Opção Inválida.");
    }
    
    return 0;
}