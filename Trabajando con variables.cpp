#include <stdio.h>

int main ()
{
	// tipos de datos
	int juegos = 0;
	
	// escape "\n": especifica que el texto que continue a partir de este escape, empezar� en la prox. l�nea
	printf("Ingrese un numero entero: \n");

	// scanf(): sirve para recibir entrada de datos del usuario
	scanf("%d", &juegos);

	/*
		%d => nos permite leer n�meros enteros.
		%i => nos permite leer n�meros enteros.
		%f => nos permite leer n�meros tipo flotante.
	*/
	// la salida de esta instrucci�n ser� igual a: "La variable juegos posee un valor de: 0"
	printf("\nLa variable juegos posee un valor de: %i", juegos);
	
	return 0;
}
