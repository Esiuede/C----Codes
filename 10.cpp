#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,soma=0,n1,n2;
	printf("informe um numero");
	scanf("%d",&n1);
	printf("informe um segundo numero");
	scanf("%d",&n2);
	printf("o intervalo de numeros entre \"%d\"e\"%d\"sao:",n1,n2);
	for(n1+=1;n1<n2;n1++)
	{
		printf("%d",n1);
		soma+=n1;
	}
	printf("a soma dos numeros do intervalo e: %d \n\n",soma);
	system("pause");
	return 0;
}

