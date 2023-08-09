#include <stdio.h>
#include <stdlib.h>
void porcen (int m,int h){
	int t=0;
	float pm=0, ph=0;
	t=m+h;
	pm=(m*100)/t;
	ph=(h*100)/t;
	printf("porcentaje de mujeres:%f\nporcentaje de hombres:%f\n",pm,ph);
}

int main (){
	int m=0,h=0;
	printf("ingrese cantidad de mujeres que han enviado su curriculum\n");
	scanf("%d",&m);
	printf("ingrese cantidad de hombres\n");
	scanf("%d",&h);
	porcen(m,h);
	return 0;
}
