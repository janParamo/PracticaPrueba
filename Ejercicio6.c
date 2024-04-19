/*6.	Escribe un programa que permita introducir una medida expresada en centímetros y 
la convierta en pulgadas. (1 pulgada=2.54 centímetros). 
Utilizar un procedimiento para el cálculo indicado en este problema.*/

#include<stdio.h>

float convCm(int Plg);

int main(int argc, char const *argv[])
{
    float cm;
    int pulgadas;

    printf("Dime los centimetros que quieres convertir a pulagadas:");
    scanf("%d", &pulgadas);
    
    cm = convCm(pulgadas);

    printf("La conversion es de: %.2f", cm);

    return 0;
}

float convCm(int plg)
{
    return plg/2.54;
}

