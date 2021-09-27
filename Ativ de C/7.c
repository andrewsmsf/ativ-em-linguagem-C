/*Faça um Programa que peça um número inteiro e determine se ele é par 
ou impar. Dica: utilize o operador módulo (resto da divisão).*/

#include <stdlib.h>
#include <stdio.h>

void main (){

    int i;

    printf("Digite um numero: ");
    scanf("%d", &i);

    if(i % 2 == 0){
        printf("\nSeu numero %d eh par", i);
    }else{
        printf("\nSeu numero %d eh impar", i);
    }
}