#include <stdio.h>
//le dice al compilador que incluya el contenido de stdio (standard input, output).
int main(void){
//declaramos la funcion principal del programa

	short a;
	//declaración de short
	int b;
	//declaración de int
	unsigned int c;
	//declaración de unsigned int
	char e;
	//declaración de char
	float f;
	//declaración de float
	double g;
	//declaración de double
	int *d;
	//declaración de apuntador a int

	printf("El tipo short tiene tamaño %lu\n", sizeof(a));
	//imprime, %lu dice que se va a imprimir un unsigned long int, que es lo que da la función sizeof()
	printf("El tipo int tiene tamaño %lu\n", sizeof(b));
	//imprime, %lu dice que se va a imprimir un unsigned long int, que es lo que da la función sizeof()
	printf("El tipo unsigned int tiene tamaño %lu\n", sizeof(c));
	//imprime, %lu dice que se va a imprimir un unsigned long int, que es lo que da la función sizeof()
	printf("El tipo apuntador a int tiene tamaño %lu\n", sizeof(d));
	//imprime, %lu dice que se va a imprimir un unsigned long int, que es lo que da la función sizeof()
	printf("El tipo char tiene tamaño %lu\n", sizeof(e));
	//imprime, %lu dice que se va a imprimir un unsigned long int, que es lo que da la función sizeof()
	printf("El tipo float tiene tamaño %lu\n", sizeof(f));
	//imprime, %lu dice que se va a imprimir un unsigned long int, que es lo que da la función sizeof()
	printf("El tipo double tiene tamaño %lu\n", sizeof(g));
	//imprime, %lu dice que se va a imprimir un unsigned long int, que es lo que da la función sizeof()

	return 0;
	//si se hace return 0 entonces el programa acabó sin errores.
}
