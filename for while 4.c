/*Rosales Lopez Jesica Merari
Tarea 2 Problemas con Estructuras Repetitivas (For, While) 4*/

#include <stdio.h>

int main() 
{
    int N;
    int i;
    int producto = 1;

    printf("Escriba un numero N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) 
    {
        producto = producto * i;
    }

    printf("El producto de los %d primeros numeros naturales es: %d\n", N, producto);

    return 0;
}
