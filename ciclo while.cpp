#include <stdio.h>

int main()
{
	int x = 0, /*x es la variable que servirá como iterador del ciclo*/
		numero,
		sumatoria = 0,
		promedio; /*es la variable que va a recibir los valores ingresados por el usuario*/
	
	while(x < 5)
	{
		printf("Por favor, ingrese un numero entero: ");
		scanf("%d", &numero);
		
		printf("\n");
		
		// sumatoria = sumatoria + numero;
		sumatoria += numero;
		
		x++;
	}
	
	// promedio = sumatoria / 5;
	
	printf("\n\nEl promedio de los numeros ingresados es igual a: %d", (sumatoria / 5));
	
	return 0;		
}
