/*
Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. 
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% 
sobre o que ultrapassar este valor, calcular e escrever o seu salário total.
*/

#include <stdio.h>
#include <stdlib.h>

void main(){

    float valor, comissao;

    printf("Valor das vendas efetuadas: R$");
    scanf("%f",&valor);

    if (valor <= 1.500){
        comissao = valor * 0.3;
        printf("\nSalario total:R$ %f", comissao);

    }else{
        comissao = valor * 0.5;
        printf("\nSalario total: R$ %f", comissao);
    }
}