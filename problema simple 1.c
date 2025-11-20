/*Rosales Lopez Jesica Merari
Tarea 2 Programa simple 1*/

#include <stdio.h>

int main()
{
  int a, b;
  int suma, resta, multiplicacion;

  printf("Dame el primer numero: ");
  scanf("%d", &a);
  printf("Dame el segundo numero: ");
  scanf("%d", &b);

  suma = a + b;
  resta = a - b;
  multiplicacion = a * b;

  printf("La suma es: %d\n", suma);
  printf("La resta es: %d\n", resta);
  printf("La multiplicacion es: %d\n", multiplicacion);

  return 0;
}
