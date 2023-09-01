#include <stdio.h>
#include <stdlib.h>

int bisssexto(int ano);

int main(){
    int ano;

    printf("Informe o ano para saber se ele é bissexto ou não: ");
    scanf("%d", &ano);

    return bisssexto(ano);
}

int bisssexto(int ano)
{
    if (ano % 4 == 0)
    {
        printf("O ano é bissexto!\n");
    }
    else
    {
        printf("O ano não é bissexto.\n");
    }
}
