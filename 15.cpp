#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i;
	printf("\t.:multiplos de 3 e 5:. \n\n");
	printf("informe um numero:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\n %.2dx3 = %.2d| %.2dx5 = %.2d",i,i*3,i,i*5);
	}
	printf("\n\n");
	system("pause");
		return 0;
}
