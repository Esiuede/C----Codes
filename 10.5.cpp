#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int x;
	setlocale(LC_ALL, "portuguese");
	printf("digite sua nota");
	scanf("%d",&x);
	if(x>=0 && x<=5 ){
		printf("Conceito D");
	}else if(x>=5 && x<=7){
		printf("Conceito C");
	}else if(x>=6 && x<=8){
		printf("Conceito B");
	}else if(x>=9 && x<=10){
		printf("Conceito A");
	}
	system("pause");
	return 0;
	}
