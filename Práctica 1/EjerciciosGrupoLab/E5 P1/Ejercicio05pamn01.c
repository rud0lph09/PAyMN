/*
Diseñar una estructura para leer las coordenadas 
de 1 recta y obtener su longitud.
*/

#include "stdio.h"		//Libreria general
#include "stdlib.h"		//Libreria general
#include "math.h"		//Libreria de matematicas

int main(int argc, char const *argv[])	//Funcion principal
{
	int val1, val2;						//Declaramos dos variables auxiliares

	printf("\n\nBienvenido.\n");		//Mensaje de bienvenida

	struct vector 						//Declaramos Estructura vector 
	{									//el cual contiene coordenada inicial
		int cordInit[2];				//coordenada final y vector representativo
		int cordEndo[2];				//asi como su magnitud
		int realVect[2];
		float longitud;
	};

	struct vector vect;					//creamos un vector de nombre vect

	printf("\n\nIntroduce el valor en x para la coordenada inicial: ");
	//Pedimos al usuario valor de x en coordenada inicial

	scanf("%d", &val1);					//Guardamos en val1
	printf("Introduce el valor en y para la coordenada inicial: ");
	//Pedimos al usuario valor de y en coordenada inicial

	scanf("%d", &val2);					//Guardamos en val2
	printf("La coordenada introducida fue: [%d, %d]\n\n", val1, val2);
	//Avisamos cual fue la variable introducida

	vect.cordInit[0] = val1;			//Cargamos los valores a el arreglo cordInit que es parte de vect
	vect.cordInit[1] = val2;
	val1 = 0; val2 = 0;					//limpiamos ambas variables

	printf("\n\nIntroduce el valor en x para la coordenada final: ");
	//Pedimos al usuario valor de x en coordenada final

	scanf("%d", &val1);					//Guardamos en val 1
	printf("Introduce el valor en y para la coordenada final: ");
	//Pedimos al usuario valor de y en coordenada final

	scanf("%d", &val2);					//Guardamos en val 2
	printf("La coordenada introducida fue: [%d, %d]\n\n", val1, val2);
	//Avisamos cual fue la variable introducida

	vect.cordEndo[0] = val1;			//Cargamos los valores a el arreglo cordEndo que es parte de vect
	vect.cordEndo[1] = val2;
	val1 = 0; val2 = 0;					//Limpiamos ambas variables

	printf("\n\nEl proceso ha terminado presiona enter para continuar...");
	//Avisamos al usuario que el proceso ha terminado y pedimos que presionen enter
	getchar();

	vect.realVect[0] = vect.cordEndo[0] - vect.cordInit[0];	//Computamos los valores del vect representativo asignando sus coordenadas
	vect.realVect[1] = vect.cordEndo[1] - vect.cordInit[1];	//a las diferenciales de las coordenadas inicial y final.

	val1 = vect.realVect[0] * vect.realVect[0];		//Computamos el cuadrado de el valor en X y Y de el
	val2 = vect.realVect[1] * vect.realVect[1];		//Vector representativo
	val1 = val1 + val2; val2 = 0;					//Sumamos ambos valores y los guardamos en val1, mientras
													//Limpiamos val2

	vect.longitud = sqrt(val1);						//Asignamos a la longitud de vect, la raiz cuadrada
													//de el valor guardado en val1

	printf("Vector representativo: [%d, %d] \n", vect.realVect[0], vect.realVect[1]);	//Imprimimos el vector representativo
	printf("Longitud: %3lf unidades\n", vect.longitud);									//posteriormente su magnitud

	printf("\n\nEl programa ha finalizado, presione enter para salir. Hasta luego :)");
	//Imprimimos sobre el final de el programa

	getchar();

	
	return 0;		//Regresamos 0
}





