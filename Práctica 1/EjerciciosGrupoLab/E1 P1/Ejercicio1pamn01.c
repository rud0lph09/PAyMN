/*
 Declarar 1 matriz de 2x2, inicializarla en cero con un ciclo y mostrarla,
 generar números aleatorios para cada cuadrito de la matriz,
 sumar los elementos y mostrar la suma.
 */

#include "stdio.h"      //Libreria general
#include "stdlib.h"     //Libreria general
#include "time.h"       //Libreria que contine srand y time

int main(int argc, char const *argv[])      //Declaracion de la funcion principal
{

    printf("\n\nBienvenido al generador automático de matrices.\n\nEstamos generando una matríz aleatoria. Presione enter para continuar...");
                        //Mensaje de bienvenida para el usuario

    getchar();          //Hacemos una llamada a la funcion getchar... De esta forma esperaremos a que el usuario 
                        //presione enter

    matrizGen();        //Hacemos una llamada a la funcion matrizGen

    return 0;           //Regresamos 0
}

int matrizGen(){        //Declaracion de la funcion matriz Gen

    printf("\nLa matriz generada es: \n");  //Mensaje de instruccion para el usuario
    int des =0;                             //Esta variable nos ayudara para toma de decisiones mas adelante
    int mat[2][2] = {{0,0},{0,0}};          //Declaramos matriz de tipo entero y la inicializamos en 0
    int count = 2, acum = 0;                //Declaramos una vandera para contar y un acumulador
    srand(time(NULL));                      //Esta funcio declara la semilla a partir de la cual generaremos
                                            //valores aleatorios

    for (int i = 0; i < count; ++i)         //Declaracion del ciclo for por el cual recorreremos la matriz en i
    {
        for (int j = 0; j < count; ++j)     //En este ciclo recorreremos la matriz en j
        {
         mat[i][j] = rand()%30;             //Asignamos a el valor de i y j un valor aleatorio desde 0 a 30
        }
    }
    for (int i = 0; i < count; ++i)         //Segundo recorrido en i de la matriz
    {
        for (int j = 0; j < count; ++j)     //Segundo recorrido en j de la matriz
        {
            printf("%d\t", mat[i][j]);      //Imprimimos el valor de la matris en i, j
            acum = acum + mat[i][j];        //Vamos acumulando el valor en acum
        }
        printf("\n");                       //Realizamos un espacio
    }
    printf("\nLa suma de cada uno de los elemetos de esta matriz es: ");    //Mensaje 
    printf("%d\n\n\n", acum);                                               //Imprimimos el valor de acum
    printf("Desea calcular otra? \n1)Si\t2)No\n\n");                        //Notificacion de toma de decision
    scanf("%d", &des);                                                      //Le pedimos el valor al usuario

    if(des > 2 || des < 1){             //Verificamos que el valor se quede en el rango de 2 a 1 

        printf("\nError, solo puedes seleccionar la opcion 1 o la opcion 2, porfavor digita 1 o 2...\n");
                                        //Notificacion de error
        regreso();                      //Llamamos la funcion de regreso, esto nos permitira reevaluar el valor de toma
                                        //de decision

    } else {                            //De estar en el rango de valores                           
        if(des == 1){                   //revisamos
            matrizGen();                //En este punto volvemos a ejecutar la funcion matrizGen ya que el usuario decidio volver a hacerlo
        } else{                         //Si no desea hacerlo
            return 0;                   //Regresa 0 y termina el programa
        }
    }
}

int regreso(){                          //Declaramos la funcion regreso
    int des = 0;                        //Volvemos a declarar otra variable local para toma de decicion

    //Repetimos el bloque de codigo de toma de decicion

    printf("\n\nDesea calcular otra? \n1)Si\t2)No\n\n");
    scanf("%d", &des);
    if(des > 2 || des < 1){
        printf("\nError, solo puedes seleccionar la opcion 1 o la opcion 2, porfavor digita 1 o 2...\n");
    } else {
        if(des == 1){
            matrizGen();                //En este punto regresamos a matrizGen
        } else{
            return 0;
        }
    }    
}



