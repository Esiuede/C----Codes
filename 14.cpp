#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=100,i,raiz;
	printf(" .: Exercicio 14.: \n\n");
	for(i=1;i<=100;i++)
	{
		raiz=i*i;
		printf("\t%.3d %.5d\n",i,raiz);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
