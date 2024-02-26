#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int QuantidadeBroa = 0;
int QuantidadePao = 0;
float ValorBroa = 0.35;
float ValorPao = 0.25; 
float TotalBroa = 0;
float TotalPao = 0;
float Total = 0;
void caixa();
bool calcula();
void fechar();

int main()
{
int opcao;
	
do{

caixa();
printf("Digite 1 Para abrir o caixa \n");
printf("Digite 2 para fechar o caixa \n");
	
scanf("%i", &opcao);

if(opcao == 1){
	
if(calcula() == true){
	printf("Venda registrada \n");
}

else{
printf("Venda nao registrada \n");
}
}

else if(opcao == 2)
{
system("cls");
fechar();
}
}while(opcao != 2);		
}

void caixa()
{
system("cls");
printf("Quantidade de paes = %i \n", QuantidadePao);
printf("Quantidade de broas = %i \n", QuantidadeBroa);
printf("Valor de paes =  %.2f \n", TotalPao);
printf("Valor de broas = %.2f \n", TotalBroa);
printf("Valor Total = %.2f \n", Total);
printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
}


bool calcula()
{
int P, B;
	
system("cls");
printf("Digite quantos paes deseja \n");
scanf("%i", &P);
	
printf("Digite a quantas broas deseja \n");
scanf("%i", &B);
	

if(P > 0 && B > 0){

QuantidadePao += P;
QuantidadeBroa += B;

TotalPao = TotalPao + (ValorPao * P);
TotalBroa = TotalBroa + (ValorBroa * B);
	
Total = TotalPao + TotalBroa;

return true;		
}	
}


void fechar()
{
system("cls");
struct tm *data_hora_atual;
float custo, lucro;

custo = Total * 0.75;
lucro = Total * 0.25;

time_t segundos;
	
time(&segundos);
data_hora_atual = localtime(&segundos);
	
printf("Data: %i/ %i/ %i\n", data_hora_atual->tm_mday, data_hora_atual->tm_mon+1, data_hora_atual->tm_year+1900);
printf("Hora: %i:%i:%i\n", data_hora_atual->tm_hour, data_hora_atual->tm_min, data_hora_atual->tm_sec);
printf("Total = %.2f\n", Total);
printf("Numero de paes vendidos = %i\n", QuantidadePao);
printf("Numero de broas vendidas = %i\n", QuantidadeBroa);
printf("Custo para a producao = %.2f\n", custo);
printf("Lucro = %.2f\n", lucro);
	
}



