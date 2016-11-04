#include <stdio.h>
//printf()

/* Declaración de funciones */
int misterio1(int (*fun) (int), int);
void misterio2(void (*fun) (int), int);
int cuadrado_num(int);
void imprime_num(int);

int main()
//main
{

  int (*fun1) (int);
  //declara un apuntador a una funcion que recibe int y regresa int
  void (*fun2) (int);
  //declara un apuntador a una funcion que recibe int y no regresa nada

  fun1 = &cuadrado_num;
  //asigna el apuntador a la funcione cuadrado_num
  fun2 = &imprime_num;
  //asigna el apuntador a la funcion imprime_num

  int var = misterio1(fun1, 3);
  //se guarda en un entero el valor de aplicarle la función del apuntador fun1(elevar al cuadrado) al número 3
  misterio2(fun2, var);
  //se aplica la función del apuntador fun2(imprimir) al entero var, que es el cuadrado de un numero
}


int misterio1(int (*fun) (int), int num)
//metodo que recibe un apuntador a una funcion, que recibe int y regresa int, tambien recibe un int(num) y regresa un int
{
    return fun(num);
    //aplica la funcion del apuntador al int(num)
}

void misterio2(void (*fun) (int), int num)
//metodo que recibe un apuntador a una funcion, que recibe un int y no regresa nada, y tambien recibe un int(num), y no regresa nada
{
    fun(num);
    //aplica la funcion del apuntador al int (num)
}

int cuadrado_num(int num)
//declaración método que recibe un int
{
    return num * num;
    //regresa el cuadrado del entero
}

void imprime_num(int num)
//declaración de método que imprime
{
    printf("Tada: %d\n", num);
    //imprime el numero recibido, junto con "Tada: "
}