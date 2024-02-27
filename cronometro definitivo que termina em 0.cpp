#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

int main()
{
int auxi;
int crono[2];
int i;
int segundos;


printf("Digite Quantos minutos deseja \n");
scanf("%i", &crono[0]);

printf("Digite Quantos segundos deseja \n");
scanf("%i", &segundos);

if(segundos < 10){
	
	crono[1] = 0;
	crono[2] = segundos;
}

else if(segundos >= 10 && segundos < 20){
	crono[1]= 1;
	auxi = segundos - 10;
	crono[2]= auxi;
}

else if(segundos >= 20 && segundos < 30){
	crono[1]= 2;
	auxi = segundos - 20;
	crono[2]= auxi;
}

else if(segundos >= 30 && segundos < 40){
	crono[1]= 3;
	auxi = segundos - 30;
	crono[2]= auxi;
}

else if(segundos >= 40 && segundos < 50){
	crono[1]= 4;
	auxi = segundos - 40;
	crono[2]= auxi;
}

else if(segundos >= 50 && segundos < 60){
	crono[1]= 5;
	auxi = segundos - 50;
	crono[2]= auxi;
}

do{
	Sleep(950);
	system("cls");
	printf("------------------------------TEMPORIZADOR-----------------------------\n");
	printf("\t\t\t\t|%i:%i%i| \n", crono[0], crono[1], crono[2]);
	printf("-----------------------------------------------------------------------");
	
	if(crono[2] == 0 && crono[1] >= 1){
		crono[1]--;
		crono[2] = 10;

	}

	else if(crono[1] <= 0 && crono[2] == 0){

		crono[0]--; 
		crono[1] = 6;	

		if(crono[2] == 0 && crono[1] >= 1){
			crono[1]--;
			crono[2] = 10;

		}
	}

	else if(crono[0] == 0){

		if(crono[2] == 0 && crono[1] >= 1){
		crono[1]--;
		crono[2] = 10;

		}

		else if(crono[1] <= 0 && crono[2] == 0){

		crono[0]--; 
		crono[1] = 6;	

		}

	}

	crono[2]--;
	

}while(crono[0] != -1 || crono[1] != 5 || crono[2] != 9);

}
