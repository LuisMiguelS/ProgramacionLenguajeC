#include <stdio.h>

int main()
{
	int x = 0;
	
	// x++ es igual que decir: x = x + 1
	/*
		primera parte (x = 1) : inicializa la variable contador.
		segunda parte (x < 10): indica la condición que se debe cumplirse para que se ejecute el ciclo.
		tercera parte (x++)   : incrementa la variable contador.
	*/
	for(x = 1; x <= 10; x++)
	{
		printf("Hola, voy por la iteracion no.: %d\n", x);
	}
	
	printf("Valor de la variable x: %d", x);
}
