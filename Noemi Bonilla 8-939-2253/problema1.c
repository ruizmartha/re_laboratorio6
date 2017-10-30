#include <stdio.h>
void main () {
	int saldo=2000, op, ing=0, ret=0, ret1=0;
	printf("Bienvenido, Ingrese el numero de la opcion deseada\n");
	printf("1. Ingreso a la cuenta\n");
	printf("2. Retiro\n");
	printf("3. Ver saldo\n");
	printf("Opcion Salida(al presionar 0, terminara el programa)\n");
	scanf("%d", &op);
	printf("\n\n");
	switch (op)
	{
		case 1:
			printf("Opcion 1: INGRESO\n");
		    printf("Dijite la cantidad que desea ingresar\t");
		    scanf("%d", &ing);
		    saldo=saldo+ing;
	 	    printf("SU NUEVO SALDO ES:\t %d", saldo);
	 	    break;
		case 2:
		    printf("Opcion 2: RETIRO\n");
			printf("Dijite la cantidad que desea retirar\n");
			scanf("%d", &ret);
		    if(ret>saldo)
		    {
		    	printf("SALDO INSUFICIENTE\n");
		    	printf("Ingrese la cantidad a retirar nuevamente\n");
		    	scanf("%d", ret1);
		    	if(saldo>ret1)
		    	{
		    		saldo=saldo-ret1;
			        printf("SU NUEVO SALDO ES: \t %d", saldo);
				}
		    }
			saldo=saldo-ret;
			printf("SU NUEVO SALDO ES: \t %d", saldo);
			break;
		case 3:
			printf("Opcion 3: VER CUENTA\n");
			printf("El saldo de la cuenta es: \t %d", saldo);
			break;
		case 0:
			printf("PROGRAMA TERMINADO.");
			break;
		default:
			printf("OPCION INVALIDA");
		
	}
}
