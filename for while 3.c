/*Rosales Lopez Jesica Merari
Tarea 2 Problemas con Estructuras Repetitivas (For, While) 3*/

#include <stdio.h>

int main() 
{
    int i;
    int suma = 0;

    for(i = 10; i <= 50; i++) 
    {
        if(i % 2 == 0) 
        {
            suma = suma + i;
        }
    }

    printf("La suma de los números pares entre 10 y 50 es: %d\n", suma);

    return 0;
}
