/*
Declarar 1 matriz de 3x3, pedir los valores al usuario y solicitarle 
el valor de un escalar para multiplicarlo 
por la matriz guardando el resultado en la misma matriz y mostrarla.
*/

#include "stdio.h"		//Libreria general
#include "stdlib.h"		//Libreria general

int main(int argc, char const *argv[])
{
	int mat[3][3];		//Declaramos matriz
	int i, j, charge;	//Declaramos banderas y cargador
	int value = 0;		//Declaramos el escalar

	printf("\n\nBienvenido al multiplicador de matriz. \nPresiona enter para continuar...\n");
	//Notificacion de bienvenida

	getchar();			//Paramos el programa para llamar la atencion del usuario

	printf("\n");		//Salto de linea

	printf("Acontinuacion llenaremos la matriz: \n");
	//Notificacion de llenado de matriz

	for (i = 0; i < 3; ++i){			//Recorremos matriz en i
		for (j = 0; j < 3; ++j){		//Recorremos matriz en j
			printf("Introduce valor para [%d, %d]: ", i, j);
			//Notificacion sobre en que casilla pedimos el valor

			scanf("%d", &charge);		//Pedimos el valor al usuario
			mat[i][j] = charge;			//Asignamos el valor a la matriz
		}
	}

	printf("\n");		//Salto de linea

	printf("Gracias. Ahora porfavor introduce el escalar por el que quieres multiplicar la matriz: ");
	//Notificacion sobre el progreso

	scanf("%d", &value);//Pedimos el valor del escalar

	printf("\n");		//Salto de linea
	printf("\nLa matriz que introduciste previamente es: \n");
	//Notificamos sobre impresion de matriz

	for (i = 0; i < 3; ++i){			//Recorremos matriz en i
		for (j = 0; j < 3; ++j){		//Recorremos matriz en j
			printf("%d\t", mat[i][j]);	//Imprimimos valor en matriz[i][j]
			mat[i][j] = mat[i][j] * value;
			//Realizamos la multiplicacion por el escalar
		}
		printf("\n");	//Salto de linea
	}

	printf("\n");		//Salto de linea
	printf("La matriz multiplicada por el escalar %d es: \n", value);
	//Notificacion sobre imprecion de matriz

	for (i = 0; i < 3; ++i){			//Recorremos matriz en i
		for (j = 0; j < 3; ++j)			//Recorremos matriz en j
			printf("%d\t", mat[i][j]);	//Imprimimos valor en matriz[i][j]
		printf("\n");					//Salto de linea
	}

	printf("\n\nEl programa ha finalizado.");	//Notificacion de que le programa finalizo
	
	printf("\n\nHasta luego :)\n\n");			//Despedida



	return 0;		//Regresamos 0
}





