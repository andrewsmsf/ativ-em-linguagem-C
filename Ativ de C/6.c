/* Faça um Programa que peça um valor e mostre na tela se o valor é 
positivo ou negativo.*/

#include <stdlib.h>
#include <stdio.h>

void main(){

    float j;

    printf("Digite um numero: ");
    scanf("%f", &j);

    if ( j < 0){
        printf("\nO numero %f eh negativo.", j);

    }else{
        printf("\nO numero %f eh positivo.", j);
    }
}