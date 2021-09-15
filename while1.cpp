#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int x;
	setlocale(LC_ALL, "portuguese");
	while(x<=10){
	printf("\a");
	//x++;
	}
	system("pause");
	return 0;
	}
