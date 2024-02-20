#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
float total, totalcusto,totalpoupansa, totallucro, pao, broa, totalbroa, totalpao; 
float const valorpao = 0.25;
float const valorbroa = 0.35;
float const custo = 0.45;
float const poupansa = 0.30;
float const lucro = 0.25;

printf("Digite a quantidade de paes vendidos \n");
scanf("%f", &pao);

printf("Digite o valor de broas vendidas \n");
scanf("%f", &broa);

totalpao = pao * valorpao;
totalbroa = broa * valorbroa;
total = totalbroa + totalpao;
totalcusto = total * custo;
totalpoupansa = total * poupansa;
totallucro = total * lucro;

printf(" %2.f paes e igual a %.2f reais \n", pao, totalpao);
printf(" %2.f broas e igual a %.2f reais \n", broa, totalbroa);
printf("Venda ao todo = %.2f \n", total);
printf("Valor para pagar os custos = %.2f \n", totalcusto);
printf("Valor que vai para a poupansa = %.2f \n", totalpoupansa);
printf("Lucro = %.2f \n", totallucro);
 
		
}
