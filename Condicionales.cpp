#include <stdio.h>

int main ()
{
	int edad = 25;
	edad = 30;
	edad = 40;
	edad = 50;
	
	//edad >= 1: sí
	//edad <= 20: sí
	
	// true / false
	if(edad >= 1 && edad == 25)
		printf("La edad es mayor que 20\n");
		
	else
		printf("La edad no es mayor que 20\n");
	
	return 0;
}

/*
// edad == 25
¿20 es igual a 25?

// edad != 25
20 es diferente de 25

// edad = 20
la variable edad es igual a 20 / estamos asignando un valor a la variable edad
*/
