/*Faça um programa para a leitura de duas notas parciais de um aluno. O 
programa deve calcular a média alcançada por aluno e apresentar:
- A mensagem "Aprovado", se a média alcançada for maior ou igual a 
sete;
- A mensagem "Reprovado", se a média for menor do que sete;
*/

#include <stdio.h>
#include <stdlib.h>

void main(){

    int n1, n2, resultado, media;

    printf("Nota apresentada: ");
    scanf("%d", &n1);
    printf("Segunda nota: ");
    scanf("%d", &n2);

    resultado = (n1+n2)/2;

    if(resultado >= 7){
        printf("\n\nAPROVADO!!");
    }
    else{
        printf("\n\nREPROVADO.");
    }
}