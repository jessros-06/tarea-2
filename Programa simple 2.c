/*Rosales Lopez Jesica Merari
Tarea 2 Programa simple 2*/

#include <stdio.h>

int main()
{
  float radio;
  float area, circunferencia;
  float pi = 3.1416;

  printf("Dame el radio del circulo: ");
  scanf("%f", &radio);

  area = pi * radio * radio;
  circunferencia = 2 * pi * radio;

  printf("El area es: %f\n", area);
  printf("La circunferencia es: %f\n", circunferencia);

  return 0;
}
