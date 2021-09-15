#include<stdio.h>
#include<stdlib.h>

int main()
{
 int n;
float i,soma=0,rest;
printf("informe um numero inteiro positivo");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	rest=1/i;
	printf("\n\t%.2f",rest);
	soma+=rest;
	
}
printf("\n\na soma resulta em: %.2f \n\n",soma);
system("pause");
return 0;


}
