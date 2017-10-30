#include<stdio.h>
void main(){
	int vi=0, vf=0, cnt=0, i;
	printf("Introduzca el valor inicial\n");
	scanf("%d", &vi);
	printf("Introduzca el valor final\n");
	scanf("%d", &vf);
	printf("Introduzca el valor del contador\n");
	scanf("%d", &cnt);
	for(i=vi;i<vf;i+=cnt){
	printf("%d\n", i);
}
}

