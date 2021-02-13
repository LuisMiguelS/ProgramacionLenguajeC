#include <stdio.h>

int main()
{
	int x = 0;
	
	while(x < 20)
	{
		printf("Variable iterador igual a: %d", x);
		
		x = x + 2;
		x += 2;
	}
}
