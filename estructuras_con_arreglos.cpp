#include <stdio.h>
#define TAMAN 50

typedef struct Persona
{
	// aquí van las propiedades de la estructura
	char nombre[TAMAN];
	char apellido[TAMAN];
	int edad;
	char ciudad[TAMAN];
} per;

int main ()
{
	// declarando variables del tipo de estructura Persona tipo arreglo
	per p[2];
	
	// llenando la estructura
	printf("Ingrese su nombre: ");
	fflush(stdin); // esto nos permite limpiar el buffer o evita que se salte la prox. línea sin esperar a su valor ingresado por el usuario
	gets(p[0].nombre);
	
	printf("Ingrese su apellido: ");
	fflush(stdin);
	gets(p[0].apellido);
	
	printf("Ingrese su edad: ");
	scanf("%d", &p[0].edad);
	
	printf("Ingrese su ciudad: ");
	fflush(stdin);
	gets(p[0].ciudad);
	
	printf("\n\n");
	
	// imprimir el contenido de la estructura
	printf("Hola, has ingresado los siguientes valores: \n");
	
	printf("Nombre:   %s\n", p[0].nombre);
	printf("Apellido: %s\n", p[0].apellido);
	printf("Edad:     %d\n", p[0].edad);
	printf("Ciudad:   %s\n", p[0].ciudad);

	return 0;
}
