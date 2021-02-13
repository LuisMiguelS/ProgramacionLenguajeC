#include <stdio.h>

int suma (int a, int b);
void saludos ();

int main()
{
	int resultado = 0;

	resultado = suma(15, 25);
	
	if(resultado >= 0 && resultado <= 50)
		printf("El resultado de la suma se encuentra en un intervalo de 0-50: %d", resultado);
	
	printf("\nEl resultado de la suma es igua al: %d", suma(100, 150));
	
	saludos();
}


/* Desde aquí mis funciones */

// función para sumar números
int suma (int a, int b)
{
	int total;
	
	total = a + b;

	return total;
}

// función que no devuelve valor
void saludos ()
{
	int yyear = 0;

	printf("\nIngresa el yyear actual: ");
	scanf("%d", &yyear);
	
	printf("\nHola usuario, te encuentras en el year %d", yyear);
}
















