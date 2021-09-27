/*11.Faça um programa que receba dois números inteiros e gere os números 
inteiros que estão no intervalo compreendido por eles.
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int a, j, maior, menor;

    printf("\nDois valores inteiros: ");
    scanf("%d%d", &a, &j);

    if(a  > j){
        maior = a;
        menor = j;
    }
    else  if( j > a){
        maior = j;
        menor = a;
    }
    int h = maior - 1;
    for (int i = menor + 1  ; i <= h; i++){
        printf(" %d,", i);
    }
    printf("\nEnd.");
}