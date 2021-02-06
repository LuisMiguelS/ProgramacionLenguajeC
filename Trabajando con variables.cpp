#include <stdio.h>

int main ()
{
	// tipos de datos
	int juegos = 0;
	
	// escape "\n": especifica que el texto que continue a partir de este escape, empezará en la prox. línea
	printf("Ingrese un numero entero: \n");

	// scanf(): sirve para recibir entrada de datos del usuario
	scanf("%d", &juegos);

	/*
		%d => nos permite leer números enteros.
		%i => nos permite leer números enteros.
		%f => nos permite leer números tipo flotante.
	*/
	// la salida de esta instrucción será igual a: "La variable juegos posee un valor de: 0"
	printf("\nLa variable juegos posee un valor de: %i", juegos);
	
	return 0;
}
