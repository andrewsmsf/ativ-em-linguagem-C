/*1. Faça um Programa que pergunte quanto você ganha por hora e o número 
de horas trabalhadas no mês. Calcule e mostre o total do seu salário no 
referido mês, sabendo-se que são descontados 11% para o Imposto de 
Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos 
dê:
a. salário bruto.
b. quanto pagou ao INSS.
c. quanto pagou ao sindicato.
d. o salário líquido.
e. calcule os descontos e o salário líquido, conforme a tabela abaixo:
*/

#include <stdio.h>
#include <stdlib.h>

void main(){

    float gph, htm, sames, INSS, sindi, saliq, imp;

    printf("Quanto ganha por hora? ");
    scanf("%f", &gph);
    printf("\nNumero de horas trabalhadas no mes: ");
    scanf("%f", &htm);

    sames = (gph * htm) ;
    imp = sames - (sames * 0.89);
    saliq = sames * 0.89 * 0.92 * 0.95;
    INSS = sames - (sames * 0.92);
    sindi = sames - (sames * 0.95);

    printf("\nSalario bruto no mes: R$%2.f", sames);
    printf("\nSalario liquido: R$%2.f", saliq);
    printf("\nImposto (11%): R$ %2.f", imp);
    printf("\nQuanto pagou ao INSS (8%): R$%2.f", INSS);
    printf("\nQuanto pagou ao sindicato (5%): R$%2.f", sindi);
}