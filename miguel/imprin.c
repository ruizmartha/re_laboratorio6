#include<stdio.h>
void main()
{
	int n,f,i=0,c;
	
	printf("Ingrese un valor inicial\n");
	scanf("%d",&n);
	printf("Ingrese un valor final\n");
	scanf("%d",&f);
	printf("Ingrese el contador\n");
	scanf("%d",&i);
	
	for(c=n;c<=f;c+i)
	{
		c=c+i;
		printf("%d\n",c-1);
	}
}
