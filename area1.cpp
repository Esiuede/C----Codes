#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include"area.h"
int main(){
	setlocale(LC_ALL, "portuguese");
	float raio=0,x=4,pi=3.14;
	printf("digite um numero inteiro positivo:");
	scanf("%f",&raio);
	printf("\n\na area da esfera e:%f\n\n",area(raio,pi,x));
	system("pause");
	return 0;
	}
