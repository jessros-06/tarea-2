/*Rosales Lopez Jesica Merari
Tarea 2 Problemas con arreglos 1*/

#include <stdio.h>

int main() 
{
    int a[5];
    int i;
    int suma = 0;

    // Lectura del arreglo
    for(i = 0; i < 5; i++) 
    {
        printf("Dame el valor %d: ", i+1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++) 
    {
        suma = suma + a[i];
    }

    printf("La suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}
