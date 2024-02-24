#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
int meses = 0, opcao, valorinicial = 5600;
float valorcarro, valorrendido = valorinicial, valorfinal;


printf("Digite a opcao correspondente ao numero \n");
printf("1 para poupança com retabilidade de 3 porcento ao mes \n");
printf("2 para os fundos imobiliarios com 7 porcento de rentabilidade ao mes \n");
printf("3 para bolsa de valores com 11 porcento de rentabilidade ao mes \n");
scanf("%i", &opcao);

if(opcao == 1){
printf("Digite o valor do carro que deseja comprar \n");
scanf("%f", &valorcarro);

do{

valorrendido += (valorrendido * 0.03);
meses++;

}while(valorrendido < valorcarro);

printf("Quantidade de meses necessaria = %i, risco baixo", meses);
}
if(opcao == 2){
printf("Digite o valor do carro que deseja comprar \n");
scanf("%f", &valorcarro);

do{

valorrendido += (valorrendido * 0.07);
meses++;

}while(valorrendido < valorcarro);

printf("Quantidade de meses necessaria = %i, risco medio", meses);
}

if(opcao == 3){
printf("Digite o valor do carro que deseja comprar \n");
scanf("%f", &valorcarro);

do{

valorrendido += (valorrendido * 0.11);
meses++;

}while(valorrendido < valorcarro);

printf("Quantidade de meses necessaria = %i, risco alto", meses);
}
}


