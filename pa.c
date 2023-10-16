#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50] = "Meu projeto 01";

    int opcao;

    while (1) { 
        printf("Nome Atual do Projeto: %s\n\n", nome);
        printf("Inserir novo nome?  1-Sim  2-Não\n");
        scanf("%d", &opcao);
        if (opcao == 1) {
            printf("Nome novo: ");
            scanf("%s", nome);

        } else if (opcao == 2) {
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
