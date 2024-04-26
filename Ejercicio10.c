/*10.	Escriba un programa para capturar por teclado el número de horas trabajadas y que envíe dicho valor a 
una función que determine y retorne el valor a pagar, 
considerando que las primeras 160 horas trabajadas serán a $6.5 y el resto de horas a $7.5.*/

#include<stdio.h>

void salario(int horas);

int main(int argc, char const *argv[]) {
    int op, horas;
    
    do {
        printf("1. Evaluar salario\n");
        printf("2. Salir\n");
        printf("Opcion:");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Dime tus horas trabajadas: ");
                scanf("%d", &horas);
                salario(horas);
                break;
            case 2:
                break;
            default:
                printf("Opcion invalida...\n");
                break;
        }
    } while (op != 2);

    return 0;
}

void salario(int horas){
    int resultado;

    if (horas >= 0 && horas < 160){
        resultado=horas*6.5;
        printf("Tu salario es: %d\n", resultado);

    }else{
        resultado=horas*7.5;
        printf("Tu salario es...%d\n", resultado);
    }
        
}