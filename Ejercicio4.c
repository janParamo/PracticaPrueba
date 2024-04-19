/*4.	Programa para crear un procedimiento que reciba dos variables reales como argumentos e 
intercambiar sus valores.*/

#include<stdio.h>

void intercambio(float n1, float n2)
{
    float out = n1;
    n1 = n2;
    n2 = out;
    printf("El nuevo valor del numero 1 es: %2.f\n", n1);
    printf("El nuevo valor del numero 2 es: %2.f\n", n2);
}

int main(int argc, char const *argv[])
{
    int opcion;
    float n1, n2;
    printf("1. Intercambiar valores\n");
    printf("2. Salir\n");
    printf("Opcion:");
    scanf("%i", &opcion);

    switch (opcion)
    {

    case 1:
        printf("El nuevo valor de sus variables es:\n");
        printf("Numero 1:\n");
        scanf("%f", &n1);
        printf("Numero 2: \n");
        scanf("%f", &n2);
        intercambio(n1, n2);
        break;

    case 2:
        break;
    default:
        printf("Opcion invalida\n");
        break;
    }

    if (opcion != 2)
    {
        main(0, 0);
    }
    return 0;
}