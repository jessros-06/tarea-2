/*Rosales Lopez Jesica Merari
Tarea 2 Problemas con Condicional SI (if) 2*/

#include <stdio.h>

int main() 
{
    float sueldo, nuevo_sueldo;

    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);

    if (sueldo < 1000) 
    {
        nuevo_sueldo = sueldo * 1.15;  // Aumento del 15%
    }
    else 
    {
        nuevo_sueldo = sueldo * 1.12;  // Aumento del 12%
    }

    printf("El sueldo con el aumento es: %.2f\n", nuevo_sueldo);

    return 0;
}
