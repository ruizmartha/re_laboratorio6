#include<stdio.h>
void main (){
	int sal=2000, op, canti=0, cant=0, ret=0;
	printf("1.Ingrese la cuenta\n");
	printf("2. Retiro\n");
	printf("3. Saldo de la cuenta\n");
	printf("4.Opcion salida\n");
	scanf("%d", &op);
	switch (op)
	{
	case 1:
		printf("Ingrese la cantidad\n");
		scanf("%d", &cant);
		canti=(sal+cant);
		printf("Su nuevo saldo es:%d", canti);
		break;
		case 2:
			if(ret<sal){	
			printf("La cantidad a retirar\n");
			scanf("%d", &ret);		
			ret=sal-ret;
			printf("Su nuevo saldo es:%d\n",ret);
		}
		else
	{ 
	printf("Ingrese una nueva cuenta");
	}
	break;
	case 3:
	printf("Saldo de la cuenta es:%d\n", sal);
	break;
	case 4:
		printf("Si introduce 0 salir del programa");
		break;
		default:
			printf("opcion no valida");
	}
	}
	
