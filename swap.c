#include <stdio.h>
//deja al compilador usar standard input output (para printf())

void swap(int *a, int *b){
	//declración que recibe dos punteros
	int aux;
	//declaración de un int auxiliar

	aux = *b;
	//aux guarda el valor de b
	*b = *a;
	//se cambia el valor de la memoria de b y se le asigna el de a
	*a = aux;
	//se le asigna a el valor de memoria de a al de b que teníamos guardado en aux
}

int main(void){
	//main
	int a = 2;
	//declaracion de prueba
	int b = 3;
	//declaración de prueba

	printf("Antes del swap: \n");
	//antes del swap
	printf("a = %d\n", a);
	//se imprime a
	printf("b = %d\n", b);
	//se imprime b


	swap(&a, &b);
	//se llama a swap y se intercambian los valores de a y b
	
	printf("Después del swap: \n");
	//despues del swap
	printf("a = %d\n", a);
	//el valor (nuevo) de a
	printf("b = %d\n", b);
	//el valor (nuevo) de b

	return 0;
	//no hay errores
}

