#include<stdio.h>
#include<stdlib.h>

int main()
{
	float n1,n2,resp=7;
	printf("informe o primeiro numero");
	scanf("%f",&n1);
	printf("informe o segundo numero");
	scanf("%f",&n2);
	printf("o intervalo de numeros entre \"%f\"e\"%f""multipicados por 7 sao \n\n",n1,n2);
	if(n1<=n2)
	{
		for(n1+=1;n1<n2;n1++)
		{
			printf(" %fx7 = %f\n",n1,resp*n1);
			
		}
	}
	else
	{
		for(n1=1;n2<n1;n1--)
		{
			printf("%fx7 =%f\n",n1,resp*n1);
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}
