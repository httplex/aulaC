#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipoPessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipoPessoa tipoPessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    tipoPessoa pes = {0, 0.0, "Teste"};

    printf("Início:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //Atribuindo valores aos campos
    pes.idade = 19;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("\nAlterando os campos via código:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //Solicitando inserções via teclado
    printf("\nInsira um número inteiro:\n");
    scanf("%d", &pes.idade);
    printf("\nInsira um número real:\n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("Insira uma palavra:\n");
    scanf("%s", pes.nome);

    printf("\nAlterando com dados do usuário:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);
}