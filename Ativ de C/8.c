//Faça um programa que leia 5 números e informe o maior número.

#include <stdlib.h>
#include <stdio.h>

void main (){
    float i,j,k,l,m, maior;

    printf("Digite 5 numeros: ");
    scanf("%f%f%f%f%f", &i,&j,&k,&l,&m);

    if(i> j){
        maior = i;
    }else{
        maior = j;
    }
    if(maior > k){
        maior = maior;
    }else{
        maior = k;
    }
    if( maior > l){
        maior = maior;
    }else{
        maior = l;
    }
    if(maior > m){
        maior = maior;
    }else{
        maior = m;
    }
    printf("\nO maior numero foi %f", maior);
}