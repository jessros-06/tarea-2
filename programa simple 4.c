/*Rosales Lopez Jesica Merari
Tarea 2 Programa simple 4*/

#include <stdio.h>

int main()
{
  int N;
  int i;
  int producto = 1;

  printf("Dame el valor de N: ");
  scanf("%d", &N);

  for(i = 1 ; i <= N ; i++)
  {
    producto = producto * i;
  }

  printf("El producto es: %d\n", producto);

  return 0;
}
