/*Rosales Lopez Jesica Merari
Tarea 2 Programa simple 4*/

#include <stdio.h>

int main()
{
  float cantidad, tasa, monto;

  printf("Dame la cantidad a invertir: ");
  scanf("%f", &cantidad);

  printf("Dame la tasa de interes mensual: ");
  scanf("%f", &tasa);

  monto = cantidad + (cantidad * tasa);

  printf("El monto al finalizar el mes es: %f\n", monto);

  return 0;
}
