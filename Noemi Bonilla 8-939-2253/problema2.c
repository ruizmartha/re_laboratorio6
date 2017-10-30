#include <stdio.h>
void main () {
	int fin=0, cont=0, ini=0, i;
	printf("Introduza el valor de inicio\n");
	scanf("%d", &ini);
	printf("Introduza el valor final\n");
	scanf("%d", &fin);
	printf("Ingrese el incremento\n");
	scanf("%d", &cont);
	printf("\n\n");
	for (i=ini; i<fin+1; i+1)
		{
			i=i+cont;
			printf("%d\n", i-1);
			
		}	
}
