#include <stdio.h>
#include <stdlib.h>
void muestra (int a,int b){
	printf("valor 1:%d\nvalor 2:%d\n",a,b);
}

int main (){
	int a=0,b=0;
	printf("ingrese un numero\n");
	scanf("%d",&a);
	printf("ingrese un numero\n");
	scanf("%d",&b);
	muestra(a,b);
	return 0;
}
