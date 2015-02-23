#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{	
	FILE *arch = NULL;

	int matriz[3][3];
	int i;

	printf("Descripcion general\n\n");

	if((arch = fopen("matriz.txt", "r"))==NULL){
		printf("ERROR ERROR ERROR\n");
		getchar();
		exit(0);
	}

	while(feof(arch)==0){
	fscanf(arch,"%d %d %d", &matriz[i][0], &matriz[i][1], &matriz[i][2]);
	printf("%d %d %d\n", matriz[i][0], matriz[i][1], matriz[i][2]);
	i++;
	}

	fclose(arch);

	fflush(stdin);
	getchar();


	return 0;
}