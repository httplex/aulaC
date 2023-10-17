#include <stdio.h>

int main(){
    int idade = 43;
    int* ptr = &idade;
    printf("%d\n", *ptr);
    return 0;
}