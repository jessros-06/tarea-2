/*Rosales Lopez Jesica Merari
Tarea 2 Problemas con Condicional SI (if) 1*/

#include <stdio.h>

int main()
{
  float compra, total;

  printf("Dame el monto de la compra: ");
  scanf("%f", &compra);

  if (compra > 2500)
  {
    total = compra - (compra * 0.08);
  }
  else
  {
    total = compra;
  }

  printf("El total a pagar es: %f\n", total);

  return 0;
}
