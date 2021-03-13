#include <stdio.h>
#include <string.h>
#define TAMAN 255

int main ()
{
	char texto[TAMAN];
	char texto_copia[TAMAN];
	
	printf("Escriba su texto: \n");
	gets(texto);
	
	printf("\nEl texto que has ingresado fue el siguiente: \n\n");
	
	// distintas formas de imprimir una cadena de caracteres
	// printf(texto);
	// printf("%s", texto);
	
	/*for(int x = 0; texto[x] != '\0'; x++)
	{
		printf("%c", texto[x]);
	}*/
	
	
	/* Algunas funciones para trabajar con cadenas de caracteres */
	
	// 1. función strlen(cadena de caracteres)	
	printf("\nLa cantidad de caracteres es de: %d: ", strlen(texto));
	
	// 2. función strcpy(texto_copia, texto)
	strcpy(texto_copia, texto);
	
	printf("\n%s", texto);
	printf("\n%s", texto_copia);
	
	// 3. función strcat(texto, "el texto que queremos agregar")
	printf("\n%s", strcat(texto, " desde aqui va el texto agregado"));
	
	return 0;
}
