#include <stdio.h>
#include <stdlib.h>
void pre (int f,int a){
	float p=0;
	p=f/a;
	printf("la presion es:%f\n",p);
}

int main (){
	int f=0,a=0;
	printf("ingrese fuerza\n");
	scanf("%d",&f);
	printf("ingrese area\n");
	scanf("%d",&a);
	pre(f,a);
	return 0;
}
