/*
Declarar 1 matriz de 3x3, pedir los valores al usuario y solicitarle 
el valor de un escalar para multiplicarlo 
por la matriz guardando el resultado en la misma matriz y mostrarla.
*/

#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	//Declarado de variables y matrices
	int mat1[3][3];  
	int mat2[3][3];  	//Declaracion de las tres matrices
	int mat3[3][3];		
	int charger = 0;  	//Declaracion de variable cargadora
	int count = 3;		//Declaracion de la cuenta para ciclos
	int i, j; 			//Declaracion de banderas

	printf("\n\nBienvenido al sumador de matrices. Este programa suma dos matrices de 3x3 introducidas por el usuario.\n\n\tPresione enter para continuar...");
 	//Mensaje de bienvenida

	getchar();    		//Llamamos getch par apoder continuar el programa
	printf("\n\n");		//Espacio

	printf("Matriz número 1: \n"); 		//Notificacion sobre matriz 1
	//Llenado de matriz 1
	for (i = 0; i < count; ++i){		//Recorremos la matriz en i
		for (j = 0; j < count; ++j){	//Recorremos la matriz en j
			printf("Introduce el valor para la casilla [%d, %d]: ", i, j);
			//Imprimimos el mensaje al usaurio para que sepa que casilla llena

			scanf("%d", &charger); 		//guardamos el valor del usaurio en variable cargadora
			mat1[i][j] = charger;		//Asignamos a la matriz 1 el valor en charger
			mat3[i][j] = charger;		//Asignamos a la matriz 3 el valor en charger
			charger = 0;				//Limpiamos charger
		}
	}

	printf("\nMatriz número 2: \n");	//Notificamos al usuario sobre la matriz 2
	//Llenado de matriz 2
	for (i = 0; i < count; ++i){		//Recorremos la matriz en i
		for (j = 0; j < count; ++j){	//Recorremos la matriz en j
			printf("Introduce el valor para la casilla [%d, %d]: ", i, j);
			//Imprimimos el mensaje al usuario para que sepa que casilla llena

			scanf("%d", &charger);		//Obtenemos el valor del usuario y lo asignamos a charger
			mat2[i][j] = charger;		//Asignamos el valor de charger a la matriz 2
			mat3[i][j] += charger;		//Sumamos el valor de charger al valor en matriz 3
										//Y lo guardamos en matriz 3
			charger = 0;				//limpiamos charger
		}
	}

	//Notificaciones al usuario
	printf("\n\nEl proceso de suma ha terminado. Porfavor presiona enter para imprimir\nlas matrices...");
	getchar();	//Llamamos getchar para un stop del programa y luego continuarlo con un enter
	

	//Imprimir matriz 1
	printf("\n\nLa matriz 1 introducida por usted fue: \n");
	//Notificacion al usuario sobre la impresion de matriz 1

	for (i = 0; i < count; ++i){		//Recorremos la matriz en i
		for (j = 0; j < count; ++j){	//Recorremos la matriz en j
			printf("%d\t", mat1[i][j]);	//Imprimimos la casilla de la matriz en turno
		}
		printf("\n");					//Salto de linea
	}
	//Imprimir matriz 2
	printf("\nLa matriz 2 introducida por usted fue: \n");
	//Notificamos al usuario sobre la impresion de matriz 2

	for (i = 0; i < count; ++i){		//Recorremos la matriz en i
		for (j = 0; j < count; ++j){	//Recorremos la matriz en j
			printf("%d\t", mat2[i][j]);	//Imprimmos la casilla de la matriz en turno
		}
		printf("\n");					//Salto de linea
	}
	//Imprimir matriz 3
	printf("\nLa tercera matriz, suma de esas dos matrices es: \n");
	//Notificamos al usuario sobre la impresion de matriz final

	for (i = 0; i < count; ++i){		//Recorremos la matriz en i
		for (j = 0; j < count; ++j){	//Recorremos la matriz en j
			printf("%d\t", mat3[i][j]);	//Imprimimos la casilla de la matriz en turno
		}
		printf("\n");					//Salto de linea
	}

	printf("\n\nPresione enter para terminar el programa...\n");
	//Notificamos al usuario sobre la llamada a getchar

	getchar();
	printf("Hasta luego :)\n\n");		//Despedidia

	return 0;
}