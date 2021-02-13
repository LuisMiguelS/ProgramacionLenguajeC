#include <stdio.h>

int main()
{
	int calificacion;
	
	printf("Por favor, ingrese una calificacion: ");
	scanf("%d", &calificacion);
	
	if(calificacion >= 90)
		printf("\nTu calificacion es igual a una: A");
	
	else if(calificacion >= 80 && calificacion <= 89)
		printf("\nTu calificacion es igual a una: B");
	
	else if(calificacion >= 70 && calificacion <= 79)
		printf("\nTu calificacion es igual a una: C");
	
	else if(calificacion >= 60 && calificacion <= 69)
		printf("\nTu calificacion es igual a una: D");
	
	else
		printf("\nTu calificacion es igual a una: F");
	
	return 0;
}
