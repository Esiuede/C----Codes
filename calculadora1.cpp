#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	char op,ch;
	float num1,num2;
	do{
	system("cls");
	printf("Digite dois numeros e seu operador:");
	scanf("%f%c%f",&num1,&op,&num2);
	switch (op){
		case'+':printf("\n\nresultado:%.2f",num1+num2);
		break;
		case'-':printf("\n\nresultado:%.2f",num1-num2);
		break;
		case'*':printf("\n\nresultado:%.2f",num1*num2);
		break;
		case'/':printf("\n\nresultado:%.2f",num1/num2);
		break;
		default:printf("\n\nerror");
	
	}
	ch=getche();
	}while(ch=='s');
	
*printf("Digite o primeiro numero:");
scanf("%d",&num1);
printf("digite o segundo numero:");
scanf("%d",&num2);

printf("\n\na soma desses numero e:%d\n\n",soma(num1,num2));*/

printf("\n\n");
system("pause");
return 0;
} 

