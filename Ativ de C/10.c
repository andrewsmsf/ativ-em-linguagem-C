/*.Faça um programa que peça uma nota, entre zero e dez. Mostre uma 
mensagem caso o valor seja inválido e continue pedindo até que o 
usuário informe um valor válido
*/

#include <stdlib.h>
#include <stdio.h>

void main (){

    int a;
    printf("\nInforme um numero de 0 a 10 aqui seu animal: ");
    scanf("%d", &a);

        if( a > 0 && a < 10){
            printf("\nValor correto!");
        }
        else{
            printf("\nSomente numero de 0 a 10.\n");
            system("pause");
            system("cls");
            main();
        }
}