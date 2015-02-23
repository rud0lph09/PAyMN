#include "stdio.h"
#include "stdlib.h"
//Programa para sacar promedio con memoria dinamica
//int- devuelve a un enterto
//main- funcion principal para ejecutar
//argc- contador de argumentos
//arcgv- donde se guardaron los argumentos 

void leer_arreglo(float *arreglo, int numeroelem);
void imprimir_arreglo(float *arreglo, int numeroelem);
float promedio(float *arreglo, int numeroelem);
int main(int argc, char* argv[]){//abre la funcion principal
	printf("\t\t |-----------------------------------|\n");
	printf("\t\t |   PROMEDIO CON MEMORIA DINAMICA   |\n");
	printf("\t\t |-----------------------------------|\n\n");
	
	int datos=0, conde=0;
	float *ap= NULL;
	
	printf("Programa de promedio\n\n");
	printf("Cuantos datos quieres:");
	scanf("%d",&datos);
	
	ap=(float*)calloc(datos,sizeof(float));
	
	if(ap==NULL){
		printf("No puede reservar la memoria\n");
		exit(0);//termina la ejecucion ahi
	}

	leer_arreglo(ap, datos);
	imprimir_arreglo(ap, datos);

	printf("\n\nEl promedio de los datos es: %f", promedio(ap, datos));

	printf("\n\n");
	
	fflush(stdin);
	getchar();//mantiene pantalla estatica
	return 0;//termina ejecucion volviendo a cero
}//cierra funcion principal

void leer_arreglo(float *arreglo, int numeroelem){
	int conde = 0;
	for(conde=0; conde < numeroelem; conde++){
		printf("Ingresa el dato %d\n", conde);
		scanf("%f", (arreglo+conde));
	}
}

void imprimir_arreglo(float *arreglo, int numeroelem){
	int conde = 0;
	for(conde = 0; conde < numeroelem; conde++){
		printf("\n\t dato %d: %f", conde, *(arreglo + conde));
	}
}

float promedio(float *arreglo, int numeroelem){
	float prom = 0;
	int conde = 0;
	for(conde = 0; conde < numeroelem; conde++){
		prom = prom + *(arreglo+conde);	
	}
	prom = prom / numeroelem;
	return prom;
}
