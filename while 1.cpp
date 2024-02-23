#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
int i, cnh, contadormulta = 0, numeromultas = 0, maiornumero = 0, semmultas = 0, maiorcnh = 0, contadormaior;		
float multa, somamultas, detran, somamotorista;

do{

printf("Digite o numero de sua CNH \n");
scanf("%i", &cnh);

if(cnh >= 1 && cnh < 4327){
	
printf("CNH = %i \n", cnh);	
printf("quantas multas voce tem ? \n");
scanf("%i", &numeromultas);
somamultas = 0;

if(numeromultas > maiornumero){
maiornumero = numeromultas;
maiorcnh = cnh;
}
if(numeromultas >= 1){

for(i = 1; i <= numeromultas; i++)
{
printf("Digite o valor da multa \n");
scanf("%f", &multa);
printf("Valor da multa: %.2f \n", multa);
somamultas += multa;
somamotorista = somamultas;
}

printf("Motorista da cnh %i, ao total deve %.2f \n", cnh, somamotorista);
detran += somamultas;

}
else if(numeromultas == 0){
semmultas++;
}


}	
}while(cnh != 0);

printf("Valor total a ser arrecadado pelo detran: %.2f \n", detran);
printf("Total de cnhs sem multas %i \n", semmultas);
printf("cnh com mais multas: %i", maiorcnh);
}
