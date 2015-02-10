/*
Hacer el algoritmo y programa que lea una matriz de 6 x 4. 
Calcular la suma de cada renglón y almacenarla en un vector; 
la suma de cada columna y almacenarla en otro vector; e 
imprimir ambos vectores.
*/

#include "stdio.h"						//libreria

int main(int argc, char const *argv[])
{
	int i, j;							//Indices
	int matriz[6][4];    				//Matriz a leer
	int sumasR[6], sumasC[4];			//vectores con sumas totales
	int acum;							//Acumulador
	printf("\n\n");

	for(i=0; i<6; i++){ 				//recorremos la matriz en el indice i
		acum = 0;						//reiniciamos el valor de acum
		for(j=0; j<4; j++){				//recorremos la matriz en el indice j
			printf("Introduce el valor para la casilla %d,%d: ", i, j);
			scanf("%d", &matriz[i][j]);	//Leemos valor del teclado y lo capturamos en la matriz
			acum += matriz[i][j];		//vamos sumando todos los valores de j en i con acum
		}
		sumasR[i] = acum;	
	}
	printf("\n\n");			//guardamos en el vector sumasR la suma total de j en i de acum

	for(j=0; j<4; j++){					//recorremos la matriz en el indice j
		acum = 0;						//seteamos el valor de acum de nuevo a 0
		for(i=0; i<6; i ++){			//recorremos la matriz en el indice i
			acum += matriz[i][j];		//sumamos todos los valores de los renglones en acum
		}
		sumasC[j] = acum;				//pasamos los valores al vector sumasC
	}

	printf("\n\nLa matriz introducida por el usuario es: \n\n");		//imprime mensaje

	for(i=0; i<6; i++){												//recorremos la matriz
		for(j=0; j< 4; j++)				
			printf("%d\t", matriz[i][j]);							//imprimos toda la matriz
		printf("\n");
	}

	printf("\nLas sumas totales por renglon son: \n\n["); 	//imprimimos mensaje
	for(i=0; i<5; i++)										//comenzamos recorrido de sumasR hasta el penultimo valor
		printf("%d\t,", sumasR[i]);							//Imprimimos casi todos los valores del vector sumasR
	printf("%d]\n\n\n", sumasR[5]);							//imprimimos el ultimo valor de sumas R
	printf("Las sumas totales por columna son: \n\n[");		//imprimimos mensaje
	for(i=0; i<3; i++)										//recorremos el vector sumasC y lo imprimimos hasta su penultimo valor
		printf("%d\t,", sumasC[i]);
	printf("%d]\n\n", sumasC[3]);								//imprimimos el ultimo valor de sumasC

	return 0;						//Regresamos valor entero
}

