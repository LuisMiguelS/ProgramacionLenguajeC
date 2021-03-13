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
	// declarando variables del tipo de estructura Persona
	per p;
	
	// llenando la estructura
	printf("Ingrese su nombre: ");
	fflush(stdin); // esto nos permite limpiar el buffer o evita que se salte la prox. línea sin esperar a su valor ingresado por el usuario
	gets(p.nombre);
	
	printf("Ingrese su apellido: ");
	fflush(stdin);
	gets(p.apellido);
	
	printf("Ingrese su edad: ");
	scanf("%d", &p.edad);
	
	printf("Ingrese su ciudad: ");
	fflush(stdin);
	gets(p.ciudad);
	
	printf("\n\n");
	
	// imprimir el contenido de la estructura
	printf("Hola, has ingresado los siguientes valores: \n");
	
	printf("Nombre:   %s\n", p.nombre);
	printf("Apellido: %s\n", p.apellido);
	printf("Edad:     %d\n", p.edad);
	printf("Ciudad:   %s\n", p.ciudad);

	return 0;
}
