/*
	Rodolfo Castillo Vidrio 2015.

  Ejercicio propuesto #2:

	Programa que lea una matriz de 5x5 en la que señale su valor maximo, en caso de repetirse
	señalar todas las posiciones

*/

// Favor de leer las anotaciones...

#include "stdio.h"

int main()
{

  printf("Bien venido al Programa\n\n");//Simple intro

	int i, j; //indices
	int m[5][5]; //matriz de 5x5
	int loader, counter = 0;
	int bigger = 0; //cargador y comparador
	int loc[2][25];//arreglo para las localidades


	for(i=0; i<5; i++){ //Doble ciclo 'for' para recorrer arreglo 2D

      for(j=0; j<5; j++){
      printf("\nIntroduce el número de la casilla %i, %i:  ", i, j );
      scanf("%i", &loader); //cargamos el dato al loader
      printf("\n\n");
      m[i][j] = loader;//cargamos valor en la matriz
      if (loader >= bigger){
        if(loader > bigger){
          bigger = loader;//solo igualamos para asignar el mayor valor
          counter = 0;
          } else {
            counter += 1; // en caso de que el valor se repita añadimos una unidad a nuestro contador
          }
        }
      }
    } 

    printf("\n\nEl proceso ha terminado...");
    
    printf("\n\nLa matriz introducida es:\n\n");

    for(i=0; i<5; i++){

      for(j=0; j<5; j++)
      
        printf("%i\t", m[i][j]);
        printf("\n");
      // impresion de la matriz completa

    }

    if (counter == 0){
      printf("\n\nEl valor máximo en la matriz es: %i\n\nEl valor se encuentra en:\n", bigger);
    }       //Toma de decision para decirle al usuario
    else{   //si el valor se repite o no
    printf("\n\nEl valor máximo en la matriz es: %i\n\nEl valor se repite %d veces en:\n", bigger, counter+1);
    }

    for(i=0; i<5; i++){
      for(j=0; j<5; j++){           //En este ciclo se compara nuestra variable bigger, a cada una de las localidades del arreglo, si es igual se imprime, si no... pues no...
        if(bigger == m[i][j]){  
          printf("[%d,%d] ", i, j); //ciclo par imprimir las localidades
        }                          //en las que se encuentra el numero
      }                            //dentro del arreglo
    }
    printf("\n\n\n");
    

    //imprimimos el, valor máximo
    return 0;
}
