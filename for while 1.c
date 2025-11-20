/*Rosales Lopez Jesica Merari
Tarea 2 Problemas con Estructuras Repetitivas (For, While) 1*/

#include <stdio.h>

int main()
{
    int N, i;

    printf("Ingresa un número entero: ");
    scanf("%d", &N);

    for(i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
