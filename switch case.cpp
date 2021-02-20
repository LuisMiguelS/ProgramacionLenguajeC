#include <stdio.h>

int main ()
{
	int opcion, numero_1, numero_2;
	
	/*printf("MENU DE OPCIONES:\n");
	printf("1. Realizar la suma de dos numeros.\n");
	printf("2. Realizar la resta de dos numeros.\n");
	printf("3. Realizar la multiplicacion de dos numeros.\n");
	printf("4. Realizar la division de dos numeros.\n");
	
	printf("\nElija una opcion: ");
	scanf("%d", &opcion);
	
	printf("\nAhora, ingrese el primer numero: ");
	scanf("%d", &numero_1);
	
	printf("\nFinalmente, ingrese el segundo numero: ");
	scanf("%d", &numero_2);*/
	
	opcion = 1;
	
	switch(opcion)
	{
		case 1:
			printf("\nEl resultado de la operacion seleccionada es igual a: %d", numero_1 + numero_2);
			break;
		
		case 2:
			printf("\nEl resultado de la operacion seleccionada es igual a: %d", numero_1 - numero_2);
			break;
		
		case 3:
			printf("\nEl resultado de la operacion seleccionada es igual a: %d", numero_1 * numero_2);
			break;
		
		case 4:
			printf("\nEl resultado de la operacion seleccionada es igual a: %d", numero_1 / numero_2);
			break;

		default:
			printf("\nLa opcion ingresada no existe.");
			break;
	}
	
	return 0;
}
