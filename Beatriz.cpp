#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	
	int d,m,a; 
	
	printf("Digite o dia :");
	scanf("%d",&d);
	printf("Digite o Mês:");
	scanf("%d",&m);
	printf("Digite o ano:");
	scanf("%d",&a);
	
	printf("\n\nHoje é %.2d/%.2d/%.4d Feliz Dia dos Namorados: \nA vontade de estar sempre por perto, de querer sempre fazer o melhor para e por vc, de sorrir sempre que vc precisa e de ser feliz por ter vc. Obrigado meu amor por trazer tanta alegria para minha vida. Eu te amo.\n\n",d,m,a);
	
	system("pause");
	return 0;
}
