#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	printf("\t.:Tabela ascII: \n\n");
	for(i=32;i<=255;i++)
	{
		printf("caractere %c decimal %d hexadecimal %x \n",i,i,i);
	}
	system("pause");
	return 0;
}
