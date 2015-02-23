/*
	Usando las definiciones de estructuras anidadas mostradas realizar el código restante para
	leer los datos de alumno y profesor dados por el usuario e imprimir todos los campos.
*/

#include "stdio.h"
#include "stdlib.h"
#include "string.h"




int main(int argc, char const *argv[])
{

	struct persona {
		char nombre[25];
		int edad;
		char estado;

						// C = casado, S = soltero
	};
	struct alumno {
		struct persona p1;
		int cuenta;
		char carrera[25]; 
	};
	struct profe {
		struct persona p2;
		int trabajador;
		char asignatura[25]; 
	};

	
	int tipo;
	struct alumno alu;

	printf("Bienvenido al programa de registro de usuarios\n\nPor favor selecciona la opción que te correspona");
	printf("Que tipo de usuario desea registrar?\n1)alumno\n2)profesor\n\n");

	scanf("%d", &tipo);

	if(tipo > 2 && tipo < 1){
		printf("Error... Presione enter y reinicie el programa...\n");
		getchar();
	} else {
		if(tipo == 1){

			

			char *name = malloc (25);

			printf("Porfavor ingrese su nombre y apellidos, todo entre comillas: ");
			fgets(name, 25, stdin); 
			printf("\n\nPorfavor ingrese su edad: ");
			scanf("%d", &alu.p1.edad);
			printf("\n\nPor favor escriba C, si es casado o S, si es soltero: ");
			scanf("%c", &alu.p1.estado);
			for (int i = 0; i < 25; ++i)
			{
				alu.p1.nombre[i] = name[i];
			}
			printf("\n\nIngrese su número de cuenta: ");
			scanf("%d", &alu.cuenta);
			printf("\n\nIngrese el nombre de su carrera, todo entre comillas: ");
			scanf("%s", alu.carrera);
			printf("\n\n");

			

			printf("Su nombre es: %s\nDe %d años de edad\nSu estado civil es: %c\n# cuenta: %d\ncarrera: %s\n\nPresione enter para continuar...", alu.p1.nombre, alu.p1.edad, alu.p1.estado, alu.cuenta, alu.carrera);
			getchar();


		} else{

			struct profe prof;

			printf("Porfavor ingrese su nombre y apellidos, todo entre comillas: ");
			scanf("%[^\n]s", prof.p2.nombre);
			printf("\n\nPorfavor ingrese su edad: ");
			scanf("%d", &prof.p2.edad);
			printf("\n\nPor favor escriba C, si es casado o S, si es soltero: ");
			scanf("%c", &prof.p2.estado);

			printf("\n\nIngrese su id de trabajador: ");
			scanf("%d", &prof.trabajador);
			printf("\n\nIngrese el nombre de la asignatura a impartir: ");
			scanf("%s", prof.asignatura);
			printf("\n\n");


			printf("Su nombre es: %s\nDe %d años de edad\nSu estado civil es: %c\nid trabajador: %d\nasignatura: %s\n\nPresione enter para continuar...", prof.p2.nombre, prof.p2.edad, prof.p2.estado, prof.trabajador, prof.asignatura);
			getchar();

		}

		printf("\n\nSe ha registrado exitosamente, hasta luego!\n");
	}

	return 0;
}


