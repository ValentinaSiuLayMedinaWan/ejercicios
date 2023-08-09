#include <stdio.h>
#include <stdlib.h>
void peri (int a,int b){
	int p=0;
	p=2*a+2*b;
	printf("el perimetro es:%d\n",p);
}

void area(int a,int b){
	int ar;
	ar=a*b;
	printf("el area es:%d\n",ar);
}
int main (){
	int a=0,b=0;
	printf("ingrese lado a\n");
	scanf("%d",&a);
	printf("ingrese lado b\n");
	scanf("%d",&b);
	peri(a,b);
	area(a,b);
	return 0;
}
