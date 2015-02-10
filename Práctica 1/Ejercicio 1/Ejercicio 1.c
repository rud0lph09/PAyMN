/*
    Ejercicio propuesto #1 de la práctica 1 para el Laboratorio
    de Programación avanzada y métodos numéricos.

    Rodolfo Castillo Vidrio

    Propuesta: Hacer el algoritmo y programa que almacene números 
    en una matriz de 5 x 6. 
    Imprimir la matriz, así como la suma de todos sus elementos.

*/

#include "stdio.h"


//Recordar, algunos compiladores no permiten el Tipado de Void en
//Funciones, esto se puede resolver regresando un int simple
int main()
{
  //Declaracion de variables, variable acumuladora y ayudante
    printf("Bien venido al Programa\n\n");//Simple intro

    int i, j;
    int m[5][6];
    int helper = 0;
    int accum = 0;

    for(i=0; i<5; i++){ //Doble ciclo 'for' para recorrer arreglo 2D

      for(j=0; j<6; j++){
      printf("\nIntroduce el número de la casilla %i, %i:  ", i, j );
      scanf("%i", &helper); //Simple scan para obtener los datos y se
                            //Envian a la variable ayudante
      printf("\n\n");
      m[i][j] = helper;
      accum = accum + helper; //Se acumulan los datos proporcionados
                              //por el usuario
      }
    }

    printf("\nLa matriz introducida por el usario es:\n\n");

for(i=0; i<5; i++){

      for(j=0; j<6; j++)
      
        printf("%i\t", m[i][j]);
        printf("\n");
      // impresion de la matriz completa

    }

    printf("\n");

    printf("El valor total de la suma de todas las casillas es %i\n", accum
      );
    //Solo tomamos el valor de la variable acumuladora y
    //lo imprimimos
    return 0;
}