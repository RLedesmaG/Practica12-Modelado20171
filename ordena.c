#include <stdio.h>
//uso de printf()

void bubble_sort(int *a, int n){
	//declaración
	int i, j, aux;
	//declaración
	for(i=1;i<n;i++){
		//iteración
		for(j=0;j<n-1;j++){
			//como crece i, la longitud del ciclo va disminuyendo, pues siempre se pone en su lugar al elemento mayor
			if(*(a+j) > *(a+j+1)){
				//el apuntador del arreglo a apunta en realidad a a[0], y la posición de *(a+k) apunta a a[k].
				//se hace la comparación de bubble sort.
				aux = *(a+j);
				//guarda el valor del apuntador
				*(a+j) = *(a+j+1);
				//intercambia los valores
				*(a+j+1) = aux;
				//intercambia por el valor guardado
			}
		}
	}
}

int main(void){
	//main
	int prueba[10];
	//declaración
	prueba[0] = 4;
	//prueba
	prueba[1] = 5;
	//prueba
	prueba[2] = 8;
	//prueba
	prueba[3] = 1;
	//prueba
	prueba[4] = 9;
	//prueba
	prueba[5] = 3;
	//prueba
	prueba[6] = 7;
	//prueba
	prueba[7] = 6;
	//prueba
	prueba[8] = 0;
	//prueba
	prueba[9] = 2;
	//prueba
	
	printf("Lista sin ordenar:\n");
	//imprime el antes de ordenar
	for(int i=0;i<10;i++){
		//para los elementos del arreglo...
		printf("%d ", prueba[i]);
		//...imprimelos
	}
	bubble_sort(prueba, 10);
	//se ordena el arreglo. de nuevo, el nombre del arreglo apunta a arreglo[0]
	printf("\nLista ordenada:\n");
	//imprime después de ordenar
	for(int i=0;i<10;i++){
		//para los elementos del arreglo...
		printf("%d ", prueba[i]);
		//...imprimelos
	}

	return 0;
	//no hubo errores
}