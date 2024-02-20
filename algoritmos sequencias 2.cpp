#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
float comprimento, largura, dimensao, totalsemimposto, total, totalimposto;
float const metro = 22.50;
float const imposto = 0.10;

printf("Informe o comprimento de seu terreno \n");
scanf("%f", &comprimento);

printf("Informe a largura de seu terreno \n");
scanf("%f", &largura);

dimensao = comprimento * largura;
totalsemimposto = dimensao * metro;
totalimposto = totalsemimposto * imposto;
total = totalsemimposto + totalimposto;


printf("Tamanho do terreno = %.2f metros quadrados \n", dimensao);
printf("Valor do imposto = R$%.2f \n", totalimposto);
printf("Valor do trabalho sem imposto = R$%.2f \n", totalsemimposto);
printf("Valor do trabalho a ser pago = R$%.2f \n", total);		
}
