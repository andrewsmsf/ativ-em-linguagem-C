//Faça um Programa que peça dois números e imprima o maior deles.

#include <stdlib.h>
#include <stdio.h>

void main(){

    float i, j;

    printf("\nDois valores: ");
    scanf("%f%f", &i, &j);

    if( i > j){
        printf("\nO numero %2f eh maior que %f", i, j);
    }
    else if( i < j){
        printf("\nO numero %2f eh maoir que %f", j, i);
    }
    else{
        printf("\nOs numeros sao iguais ;-;");
    }
}