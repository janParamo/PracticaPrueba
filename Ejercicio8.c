/*8.	Programa que permita leer el valor correspondiente a una distancia en millas y la visualice expresada 
en metros.  Sabiendo que 1 milla marina equivale a 1852 metros. Utiliza una función sin parámetros.*/

#include<stdio.h>

int convMillas(int metros);

int main(int argc, char const *argv[])
{
    int m;
    int Millas;

    printf("Dime las millas que quieres convertir:");
    scanf("%d", &m);
    
    Millas = convMillas(m);

    printf("La conversion es de: %d", Millas);

    return 0;
}

int convMillas(int metros)
{
    return metros*1852;
}
