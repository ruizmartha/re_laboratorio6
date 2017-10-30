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
	while (ini<fin+1)
	{
		ini=(ini+(cont-1));
		printf("%d\n", ini);
		ini+=cont-1;
    }
}

