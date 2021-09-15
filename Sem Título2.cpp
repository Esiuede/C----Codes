#include<stdio.h>
#include<stdlib.h>

int main()
{
	float c1,c2,c3,c4,c5,v1,v2,v3,v4,v5,x1=5,x2=10,x3=25,x4=50,x5=100,q1;
	printf("Informe a quantidade de moedas de 5 centavos");
	scanf("%f",&v1);
	printf("\n\nO valor de moedas de 5 centavos e:""\%f",c1=x1*v1);
	printf("\n\nInforme a quantidade de moedas de 10 centavos");
	scanf("%f",&v2);
	printf("\n\nO valor de moedas de 10 centavos e:""\%f",c2=x2*v2);
	printf("\n\nInforme a quantidade de moedas de 25 centavos");
	scanf("%f",&v3);
	printf("\n\nO valor de moedas de 25 centavos e:""\%f",c3=x3*v3);
	printf("\n\nInforme a quantidade de moedas de 50 centavos");
	scanf("%f",&v4);
	printf("\n\nO valor de moedas de 50 centavos e:""\%f",c4=x4*v4);
	printf("\n\nInforme a quantidade de moedas de 1 real");
	scanf("%f",&v5);
	printf("\n\nO valor de moedas de 1 real e:""\%f",c5=x5*v5);
	printf("\n\nO valor total de moedas em reais e:""\%f",q1=(c1+c2+c3+c4+c5)/100);
	system("pause");
	return 0;
	
}
