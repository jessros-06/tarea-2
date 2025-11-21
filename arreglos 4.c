/*Rosales Lopez Jesica Merari
Tarea 2 Problemas con arreglos 4*/

#include <stdio.h>

int main() 
{
    int pares[100];
    int i;
    int num = 2;

    for(i = 0; i < 100; i++) 
    {
        pares[i] = num;
        num = num + 2;
    }

    for(i = 0; i < 100; i++) 
    {
        printf("%d ", pares[i]);
    }

    printf("\n");
    return 0;
}
