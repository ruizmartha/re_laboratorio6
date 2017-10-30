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
while (ini<fin+1)
{
	
      ini=(ini+(contador-1));

		printf("%d \n",ini );
		
		ini+=contador-1; 
}
	} 

