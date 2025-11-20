/*Rosales Lopez Jesica Merari
Tarea 2 Problemas con Condicional SI (if) 3*/

#include <stdio.h>

int main() 
{
    float distancia_ida, distancia_total, precio, precio_final;
    int dias;

    printf("Ingrese la distancia de ida en km: ");
    scanf("%f", &distancia_ida);

    printf("Ingrese el numero de dias de estancia: ");
    scanf("%d", &dias);

    distancia_total = distancia_ida * 2;         // Ida y vuelta
    precio = distancia_total * 0.23;            // Precio sin descuento

    // Condición para aplicar el 30%
    if (dias > 7 && distancia_total > 800) 
    {
        precio_final = precio * 0.70;           // Se descuenta el 30%
    } 
    else 
    {
        precio_final = precio;                  // Sin descuento
    }

    printf("El precio final del ticket es: $%.2f\n", precio_final);

    return 0;
}
