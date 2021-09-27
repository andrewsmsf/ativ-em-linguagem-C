/*
Faça um programa para uma loja de tintas. O programa deverá pedir o 
tamanho em metros quadrados da área a ser pintada. Considere que a 
cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta 
é vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário 
a quantidades de latas de tinta a serem compradas e o preço total.
*/

#include <stdio.h>
#include <stdlib.h>

void main(){

    float metros, litros, latas, preco, diferenca, ulatas;

    do{

    printf("\n\nMetros quadrados a serem pintados: ");
    scanf("%f", &metros);

/*  1 lata = 18l = 54 metros = R$80
    1l / 3 metros
    
    1 l = 3 metros
    xl = xmetros
        3 metros * xl = 1l * xmetros 
        x = resultado de 1l * xmetros / 3 mestrosl

        se >= x.5 recomenda mais uma lata de 18l
        se < x.5 recomenda uma lata de 10l com preço de 40
*/
    litros = (metros)/3;
    latas = (litros)/18;
    preco = latas * 80;

    float partInt = (int)latas;
    float partDecimal = latas - partInt;

    if(partDecimal >= 0.5){
        latas = partInt + 1;
        preco = latas * 80;
    }else if (partDecimal < 0.5 && partDecimal >0){
        latas = partInt;
        preco = (partInt * 80) + 40;
        printf("\nQuantida de latas de 10l: %.2f", latas);
    }

    printf("\nQuantida de latas: %.2f", latas);
    printf("\nPreco total: R$%.2f", preco);
    printf("\nParte decimal: %.2f", partDecimal);
    printf("\nParte Inteira: %.2f", partInt);
    }while(metros!=0);
}