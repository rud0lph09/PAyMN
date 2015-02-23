/*
Declarar 1 matriz de 3x3, pedir los valores al usuario y mostrarla, 
indicar cuantos elementos son cero, cuantos positivos y negativos.
*/

#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	int mat[3][3];
	int charger;
	int neg = 0, pos = 0, nil = 0;
	int count = 3;

	printf("Bienvenido al contador de valores. Por favor lea con atencon lo siguiente: \n\n\tA continuacion llenara la matriz con valores, ya sean negativos o nulos o positivos\n\tFavor de solo introducir NUMEROS. Para continuar presione enter...");
	getchar();
	printf("\n\n\n");

	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count; ++j)
		{
			printf("Porfavor introduzca el valor para la casilla [%d, %d]: ", i, j);
			scanf("%d", &charger);
			mat[i][j] = charger;
		


			if(charger >= 0){
				if(charger == 0){
					nil = nil + 1;
				} else {
					pos = pos + 1;
				}
			} else {
				neg = neg + 1;
			}



		}		
	}

	printf("\n\n\n");
	printf("El proceso de llenado y conteo de valores ha terminado.\nPresione enter para imprimir la matriz introducida...");
	printf("\n\n");

	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count; ++j)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Cantidad de números negativos: %d\n", neg);
	printf("Cantidad de números positivos: %d\n", pos);
	printf("Cantidad de números nulos o 0: %d\n\n\n", nil);

	return 0;
}
