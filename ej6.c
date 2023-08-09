#include <stdio.h>
#include <stdlib.h>
void octa (int a){
	float oc=0;
	oc=a/8;
	printf("la 8va parte de %d es:%f\n",a,oc);
}

int main (){
	int a=0;
	printf("ingrese un numero\n");
	scanf("%d",&a);
	octa(a);
	return 0;
}
