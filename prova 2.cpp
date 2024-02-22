#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
int i, sexo, idade, contadorfem = 0, contadormasc = 0, contadormaior = 0;
float renda, rendamediafem, maiorrenda, rendamaiormasc, auxiliarrenda;

for(i = 1; i <= 5; i++){

printf("Digite sua idade \n");
scanf("%i", &idade);
printf("Digite seu sexo utilizanndo 1 para homem e 2 para mulher \n");
scanf("%i", &sexo);
printf("Digite sua renda pessoal \n");
scanf("%f", &renda);

if(sexo == 1){
contadormasc++;
if( renda > 1200){
contadormaior++;
}

}
else if(sexo == 1 && renda > 1200){
contadormaior++;
}
else if(sexo == 2)
{
contadorfem++;
rendamediafem += renda;
auxiliarrenda = rendamediafem / contadorfem;
}
if(renda > maiorrenda)
{
maiorrenda = renda;
}

}
printf("5 pessoas fizeram a pesquisa, sendo %i homens e %i mulheres \n", contadormasc, contadorfem);
printf("Renda media entre as mulheres = %.2f \n", auxiliarrenda);
printf("Quantidade de homens com renda superior a 1200 reais = %i \n", contadormaior);
printf("Maior renda entre os entrevistados = %.2f", maiorrenda);


}

