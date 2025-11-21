/*Rosales Lopez Jesica Merari
Tarea 2 Problemas con arreglos 3*/

#include <stdio.h>

int main ()
{
  int n;
  int positivos = 0, negativos = 0, nulos = 0;

  printf("Ingrese la cantidad de elementos del arreglo: ");
  scanf("%d", &n);

  int arreglo[n];

  for (int i = 0; i < n; i++)
    {
     printf("Ingrese el elemento %d: ", i + 1);
     scanf("%d", &arreglo[i]);
    }
       for (int i = 0; i < n; i++)
      {
        if (arreglo[i] > 0)
          {
            positivos++;
          }
        else if (arreglo[i] < 0)
          {
            negativos++;
          }
        else 
          { 
            nulos++;
          }
      }

printf("\nCantidad de positivos: %d\n", positivos);
printf("Cantidad de negativos: %d\n", negativos);
printf("Cantidad de nulos: %d\n", nulos);

return 0;
}
