#include <stdio.h>

int main(){

    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if(idade > 0){
        if(idade >= 18){

            printf("Voce pode votar!\n");
        }
        else{

            printf("Voce nao pode votar!\n");
        }

        /*forma reduzida
        if(idade >= 18)printf("Voce pode votar!\n");
        else printf("Voce nao pode votar!\n");
        */

        if(idade >= 60){
            printf("Voce e senior...\n");
        }
        else if(idade >= 18){
            printf("Voce e um adulto!\n");
        }
        else{
            printf("Voce e uma crianca\n");
        }
    }
    else{
        printf("Valor invalido\n");
    }

    return 0;
}