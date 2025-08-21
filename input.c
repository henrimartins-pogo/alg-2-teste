#include <stdio.h>

int main(){

    //declarações de variáveis
    int i;
    int x;
    int a;

    /*
    Parte de atribuição
    */
    i = 10;
    x = 50;

    printf("Numero informado: %d %d \n", i, x);

    printf("Insira o valor de a: ");
    scanf("%d",&a);

    printf("Valor inserido: %d\n", a);
    //printf("Endereco de memoria: %X", &a);

    return 0;

}