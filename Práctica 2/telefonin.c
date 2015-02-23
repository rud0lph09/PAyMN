#include "stdio.h"
#include "math.h"

int main()
{
						//Este programa efectua la funcion x a la n, x siendo un número complejo	
	struct 
	{
		int real;
		int imaginario
		int potencia

	}x;

	printf("Bienvenido al Programa 1\n");
	printf("\n\nSiga las instrucciones y al introducir datos favor de solo introducir números indicando si es positivo o negativo, \npresione cualquier tecla para continuar...\n\n");
	getchar();

	printf("\nPor favor introduce un valor real para x\n");
	scanf("%d", &x.real);
	printf("\nPor favor introduce un valor imaginario (solo el numero) para x\n");
	scanf("%d", &x.imaginario);
	printf("\nPor favor introduce la potencia a la cual se elevara la función\n");
	scanf("%d", &x.potencia);

	return 0;
}


int calcular(int real, int imag, int pot){

int xf[2] = {real, imag};
int ay1, ay2;
int func[pot];
for (int i = 0; i < pot; ++i)
{
	for (int j = 0; j < 2; ++j)
	{
		
	}
}

}