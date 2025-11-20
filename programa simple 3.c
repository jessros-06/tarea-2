/*Rosales Lopez Jesica Merari
Tarea 2 Programa simple 3*/

#include <stdio.h>

int main()
{
  float dolares;
  float pesos;

  printf("Dame la cantidad en dolares: ");
  scanf("%f", &dolares);

  pesos = dolares * 11.96;

  printf("La cantidad en pesos es: %f\n", pesos);

  return 0;
}
