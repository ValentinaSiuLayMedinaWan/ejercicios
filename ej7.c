#include <stdio.h>
#include <stdlib.h>
void com (int a,int b){
	if (a==b)
		printf("los dos numeros son iguales\n");
	else 
		if (a<b)
			printf("el numero %d es mayor que %d\n",b,a);
		else
			printf("el numero %d es mayor que %d\n",a,b);
}

int main (){
	int a=0,b=0;
	printf("ingrese un numero\n");
	scanf("%d",&a);
	printf("ingrese otro numero\n");
	scanf("%d",&b);
	com (a,b);
	return 0;
}

