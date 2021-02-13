#include <stdio.h>

/**
	
**/
int main ()
{	
	int edad = 25;

	// primer valor de la variable edad es igual: 25
	printf("Su edad incial es igual a: %d", edad);
	
	printf("\nIngrese su edad: ");
	scanf("%d", &edad);
	
	// primer valor de la variable edad es igual: 10
	printf("\nSu edad ingresada es igual a: %d", edad);
	
	printf("\nIngrese su edad nuevamente: ");
	scanf("%d", &edad);
	
	// primer valor de la variable edad es igual: 55
	printf("\nLa nueva edad ingresada es igual a: %d", edad);
	
	// esto es una asignación por parte del programador
	edad = edad * 10;
	
	// primer valor de la variable edad es igual: 550
	printf("\nEl valor de la variable edad ha sido cambiada por el programador y tiene un valor de: %d", edad);
	
	edad = 0;
	
	// primer valor de la variable edad es igual: 0
	printf("\nEl valor de la variable edad se ha igualado a cero: %d", edad);
	
	return 0;
}
