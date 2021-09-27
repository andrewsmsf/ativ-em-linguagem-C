//Faça um programa que leia 5 números e informe a soma e a média dos números.

#include <stdlib.h>
#include <stdio.h>

void main (){

    float i, o, p, q, r, soma, media;

    printf("Informe 5 numeros: ");
    scanf("%f%f%f%f%f",&i,&o, &p, &q,&r);

    soma = i+o+p+q+r;
    media= (soma)/5;

    printf("\nSoma eh: %f", soma);
    printf("\nMedia eh: %f", media);
    
}