#include <stdio.h>

/* prototipo */
void mensaje ();
int operacionMatematica (int a, int b, char operador);
void ejemplo();
//void operacionMatematica (int a, int b, char operador);

int main ()
{
	// mensaje();
	
	int a, b;
	char operador;
	
	ejemplo();
	
	printf("Ingrese un n%cmero entero: ", 163);
	scanf("%d", &a);
	
	printf("\nIngrese otro n%cmero entero: ", 163);
	scanf("%d", &b);
	
	// NOTA: solo lee cuando lo pongo al inicio (ver qué pasa con esto) Ojo
	printf("\nIngrese el tipo de operaci%cn a realizar (+, -, *, /): ", 162);
	scanf("%c", &operador);
	
	printf("El resultado de la operaci%cn solicitada es igual a: %d", 163, operacionMatematica(a, b, operador));

	// uso de la función operacionMatematica() retornando valores.
	/*printf("Esto es el uso de la suma: %d", operacionMatematica(10, 20, '+'));
	printf("\nEsto es el uso de la resta: %d", operacionMatematica(100, 50, '-'));
	printf("\nEsto es el uso de la divisi%cn: %d", 162, operacionMatematica(15, 3, '/'));
	printf("\nEsto es el uso de la multiplicaci%cn: %d", 162, operacionMatematica(11, 50, '*'));*/
	
	/*operacionMatematica(10, 20, '+');
	operacionMatematica(100, 50, '-');
	operacionMatematica(15, 3, '/');
	operacionMatematica(11, 50, '*');*/
}

// desde aquí mis funciones
void ejemplo ()
{
	printf("funcion ejemplo");
}

void mensaje ()
{
	printf("Hola gente, klk!");
}

int operacionMatematica (int a, int b, char operador)
{
	if(operador == '+')
		return a + b;
	
	if(operador == '-')
		return a - b;
	
	if(operador == '/')
		return a / b;
	
	if(operador == '*')
		return a * b;
}

/*void operacionMatematica (int a, int b, char operador)
{
	if(operador == '+')
		printf("Esto es el uso de la suma: %d\n", a + b);
	
	if(operador == '-')
		printf("Esto es el uso de la resta: %d\n", a - b);
	
	if(operador == '*')
		printf("Esto es el uso de la multiplicaci%cn: %d\n", 162, (a * b));
	
	if(operador == '/')
		printf("Esto es el uso de la divisi%cn: %d\n", 162, (a / b));
}*/
