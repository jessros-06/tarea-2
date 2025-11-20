/*Rosales Lopez Jesica Merari
Tarea 2 Problemas con Condicional SI (if) 4*/

#include <stdio.h>

int main() 
{
    int a, b;

    printf("Ingresa el primer número entero: ");
    scanf("%d", &a);

    printf("Ingresa el segundo número entero: ");
    scanf("%d", &b);

    if (a != 0 && b % a == 0) 
    {
        printf("%d es divisor de %d\n", a, b);
    } 
    else if (b != 0 && a % b == 0) 
    {
        printf("%d es divisor de %d\n", b, a);
    } 
    else 
    {
        printf("Ninguno es divisor del otro.\n");
    }

    return 0;
}
