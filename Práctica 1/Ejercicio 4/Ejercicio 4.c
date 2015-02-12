/*
	Rodolfo Castillo 2015.
	Hacer el algoritmo y programa que lea una matriz de 3 x 5. 
	Sumar las columnas e imprimir la columna que tuvo la máxima 
	suma, así como ese resultado.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
	int matriz[3][5];						//matriz de 3x5 en la que guardaremos los datos introducidos por el usuario	
	int sum[5];								//en este simple arreglo guardaremos las sumas totales por columna
	int i, j;								//variables que nos ayudan para poder determinar la columna y fila en la que estamos
	int acum, loader, col;					//acum ira sumando los valores, loader sera nuestra variable auxiliar y col representara la 
											//	columna con mayor valor


	printf("\n\n\t\tBienvenido.\n\nFavor de tomar en cuenta que en este programas las columnas y filas se numeran desde el 0 en adelante.\nPresiona cualquier tecla para continuar...");
	getchar();
	printf("\n\n\n");

	for(i = 0; i < 3; ++i)					//en este ciclo vamos guardando cada valor en la matriz
	{
		acum = 0;							//limpiamos el acumulador
		for(j = 0; j < 5; j++){
			printf("Introduce el valor para la casilla [%d,%d]: ", i, j);
			scanf("%d", &loader);			//obtenemos el valor y lo mandamos a nuestra variable auxiliar
			matriz[i][j] = loader;			//de esta forma asignamos lo que se encuentre en el cargador a la matriz
		}
	}

	loader = 0;								//limpiamos el cargador para utilizarlo en el ciclo siguiente

	for(j=0; j<5; j++){						//en este ciclo recorremos la matriz
		acum = 0;							//para sumar cada una de las columnas
		for(i=0; i<3; i++){
			acum+= matriz[i][j];			//acum ira sumando todos los valores por columna para luego sintetizarlos
											//en una sola fila			
		}
		sum[j] = acum;						//guardamos esa fila en el arreglo sum
		if(acum > loader){					//comparamos si el valor de acum es mayor a lo que loader tiene
			loader = acum;					// si es de esta forma loader tendra ese valor
		}
	}

	for(i=0; i<5; i++){						//en este ciclo obtenemos la columna en la 
		if(sum[i] >= loader){				//	que se encuentra la suma total mayor
											//	comparando el valor de loader con los valores de la suma total
											//	de cada columna
			col = i;						//al encontra la columna le pasamos el dato a la variable col
		}
	}

	printf("\n\nLa matriz introducido por el usuario es: \n");
	for(i=0; i<3; i++){						//Ciclo para la impresion de matriz
		for(j=0; j<5; j++)
			printf("%d\t", matriz[i][j]); 	//impresion de matriz
		printf("\n");
	}

	printf("\n\n\n");

	/*
	El siguiente bloque de codigo solo imprime la columna con mayor valor
	*/

	printf("\nDe esta matriz la columna (de la columna 0 - 4) %d es la que tiene una suma total mayor\nSu total es %d y los valores individuales son:\n\n", col, sum[col]);
	for (int i = 0; i < 3; ++i)
	{
		printf("\t%d\n", matriz[i][col]);		
	}

	printf("\n\n\n");

	/*
	for(i=0; i<5; i++){
	printf("%d\t", sum[i]);					//Descomenta este codigo si quieres imprimir todas las somas totales
	}										//por columna
	*/
	

	return 0;
}