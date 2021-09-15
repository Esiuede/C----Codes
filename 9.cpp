#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=100,i,soma;
	printf(" \t.:Exercicio 9:. \n\n");
	for(i=2;i<=n;)
	{
	printf("%d",i);
	i+=2;
	soma+=i;	
	}
	printf("\n\no resultado e: %d \n\n",soma);
	system("pause");
	return 0;
}
