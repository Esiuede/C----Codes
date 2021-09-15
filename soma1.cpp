#include<stdio.h>
#include<stdlib.h>
#include"soma.h"
int main(){
	
	int num1,num2;
	
printf("Digite o primeiro numero:");
scanf("%d",&num1);
printf("digite o segundo numero:");
scanf("%d",&num2);

printf("\n\na soma desses numero e:%d\n\n",soma(num1,num2));

system("pause");
return 0;
} 

