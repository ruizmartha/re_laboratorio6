#include<stdio.h> 
void main() 
{ 
int i,ini,fin,contador=0; 

printf("Ingrese un valor inicial \n"); 

	scanf("%d",&ini); 

printf("Ingrese un valor final \n"); 

scanf("%d",&fin); 
printf("Ingrese el contador \n"); 

	scanf("%d",&contador); 

	for(i=ini;i<fin;i+1) 
	{ i=i+contador;
		printf("%d \n",i-1); 
	} 


} 
