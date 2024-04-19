/*10.	Escriba un programa para capturar por teclado el número de horas trabajadas y que envíe dicho valor a 
una función que determine y retorne el valor a pagar, 
considerando que las primeras 160 horas trabajadas serán a $6.5 y el resto de horas a $7.5.*/

#include<stdio.h>

void salario(int horas);

int main(int argc, char const *argv[])
{
    /* code */
    int op, hora;
    printf("1. Evaluar salario\n");
    printf("2. Salir\n");
    printf("Opcion:");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
    
        printf("Dime tus horas trabajadas:");
        scanf("%d", &hora);
        salario(hora);
        break;
    case 2:
        break;
    default:
        printf("Opcion invalida...\n");
        break;
    }
    if (op != 2){
        main(0, 0);
    }
    return 0;
}

float salario(int hora, int resultado)
{
    if (hora >= 0 && hora < 160)
        resultado=hora*6.5;
        printf("Tu salario es....\n", resultado);

    else
        resultado=hora*7.5;
        printf("Tu salario es...\n", resultado);
}