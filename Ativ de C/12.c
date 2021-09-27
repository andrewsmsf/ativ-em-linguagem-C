/*12.Altere o programa anterior para mostrar no final a soma dos números.*/
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
    int soma =0;
    int resultado;
    int i= menor + 1 ;
    for (i ; i <= h; i++){
        printf(" %d,", i);
        soma = soma + i;
    }
    printf("\n\nSoma: %d", soma);
}