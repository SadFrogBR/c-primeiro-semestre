#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
int dona, filho1, filho2, filho3;

printf("Digite a idade de dona ana \n");
scanf("%i", &dona);

printf("Digite a idade do primeiro filho \n");
scanf("%i", &filho1);

printf("Digite a idade do segundo filho \n");
scanf("%i", &filho2);

filho3 = (dona - filho1) - filho2;

if(filho1 > filho2 && filho1 > filho3)
{
printf("O primeiro filho e o mais velho, tendo %i anos \n", filho1);	
}
else if(filho2 > filho1 && filho2 > filho3)
{
printf("O segundo filho e o mais velho, tendo %i anos \n", filho2);
}
else if(filho3 > filho1 && filho3 > filho2)
{
printf("O terceiro filho e o mais velho, tendo %i anos \n", filho3);
}



		
}

