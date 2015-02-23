#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{

	char c = NULL;
	FILE *archivo=NULL;
	//Descripcion para el usuario
	if((archivo = fopen("datos.txt", "r"))==NULL){
		printf("CHI?N, ERROR\n");
		getchar();
		exit(0);
	}
	while(feof(archivo)==0){
	c = fgetc(archivo);
	printf("%c", c);
	}

	fclose(archivo);

	fflush(stdin);
	getchar();
	return 0;
}