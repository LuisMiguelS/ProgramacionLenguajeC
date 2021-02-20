#include <stdio.h>
#include <stdlib.h> // importada para poder utilizar la función system("pause");
#define TAMAN 5

int main ()
{
	// trabajando con arreglos
	int numeros[5] = {10, -50, 13, 80, 35};
	
	for(int x = 0; x <= 4; x++)
	{
		printf("posicion: %d valor: %d\n", x, numeros[x]);
		numeros[x] = numeros[x] * 10;
		printf("nuevo valor: %d\n\n", numeros[x]);
	}
	
	// no traerá ningún valor, más que cero o basura encontrada en memoria
	// dado que no tenemos un array con posición 100
	printf("%d", numeros[100]);
	
	/*int numeros[TAMAN];
	//x | x | x | x | x
	
	// para asignar valores al arreglo
	for(int x = 0; x <= 4; x++)
	{
		scanf("%d", &numeros[x]);
		printf("\n");
	}
	
	// para andar el contenido del arreglo
	for(int x = 0; x <= 4; x++)
	{
		printf("%d\n", numeros[x]);
	}*/
	
	// función que sirve para pausar la pantalla y evitar que se cierre automáticamente
	system("pause");
}
