#include<stdio.h>
#include<stdlib.h>

int main()
{
	float n,resp;
	printf(" digite um numero:");
	scanf("%f",&n);
	for(resp=1;n>1;n=1)
	{
		resp=resp*n;
	}
	printf("o fatorial do numero informado e: %.2f \n\n",resp);
	system("pause");
	return 0;
}
