#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1,n2;
	 printf("Digite um numero");
	 scanf("%d",&n1);
	 for(n2=1;n2<=10;n2++){
	 	printf("\n%d x %d = %d",n1,n2,n1*n2);
	 }
	 system ("pause");
	 return 0;
}
