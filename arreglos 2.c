/*Rosales Lopez Jesica Merari
Tarea 2 Problemas con arreglos 2*/

#include <stdio.h>

int main ()
{
  int n, numero, contador = 0;

  printf("Ingrese la cantidad de elementods del arreglo: ");
  scanf("%d", &n);

  int arreglo[n];

  for (int i = 0; i < n; i++)
      {
       printf("Ingrese el elemento %d: ", i + 1);
       scanf("%d", &arreglo[i]);
      }

  printf("\nIngrese el numero que desea buscar: ");
  scanf("%d", &numero);

  for (int i = 0; i < n; i++)
     {
      if (arreglo[i] == numero)
         {
          contador++;
         }
     }

 printf("\nEl numero %d se encuentra %d veces en el arreglo.\n", numero, contador);

return 0;
}
