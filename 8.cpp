#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	printf("informe um numero inteiro:");
	scanf("%d",&n);
	printf("seus numeros impares sao:");
	for(i=1;i<=n;)
	{
		printf("%d",i);
		i+=2;
	}
	printf("\n\n");
	system("pause");
	return 0;
}
