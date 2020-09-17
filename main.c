#include <stdio.h>

int main(){
	char nombre[100];

	printf("hola mundo\n");
	printf("Nombre: ");
	fgets(nombre, sizeof(nombre), stdin);
	printf("hola %s",nombre);

	return 0;
}