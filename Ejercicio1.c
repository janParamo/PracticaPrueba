/*1.	Escribe un programa que permita convertir temperaturas Fahrenheit a grados Celsius.  
Utilice una función con parámetros.*/

#include<stdio.h>


float convCel(int fah);

int main(int argc, char const *argv[])
{
    float cel;
    int tempfah;

    printf("Dime la temperatura en Fahrenheit que quieres convertir:");
    scanf("%d", &tempfah);
    
    cel = convCel(tempfah);

    printf("La temperatura en grados celsius es de: %.2f", cel);

    return 0;
}

float convCel(int fah)
{
    return (fah-32)/1.8;
}

