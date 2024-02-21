#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{

int moedas, marinheiros, valorcapitao, valormarinheiro;

printf("Digite o numero de moedas achadas na arca \n");
scanf("%i", &moedas);

printf("Digite o numero de marinheiros no navio \n");
scanf("%i", &marinheiros);

valormarinheiro = moedas / (marinheiros + 2);

valorcapitao = valormarinheiro * 2;

printf("Cada marinheiro ira receber %i \n", valormarinheiro);
printf("O capitao ira receber %i \n", valorcapitao);

if(valorcapitao >= 120)
{
printf("Sera possivel realizar a manutencao do navio \n");
}
else if(valorcapitao < 120)
{
printf("Nao sera possivel realizar a manutencao do navio \n");
}
	
}

