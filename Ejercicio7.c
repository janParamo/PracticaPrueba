/*7.	Programa para calcular el área y el perímetro de un rectángulo dada la base y
la altura. Utilizar una función diferente por cada cálculo.*/

#include<stdio.h>

int area();
int perimetro();


int main(int argc, char const *argv[])
{
    int op;
    printf("Bienvenido...\n");
    printf("Opcion 1: area\n");
    printf("Opcion 2: perimetro\n");
    printf("Opcion 3: Salida\n");

    printf("Elegi una opcion...\n");
    scanf("%i", &op);


    if (op == 1)
    {
        printf("El area es:, %i",  area());
    }
    else if (op == 2){
        printf("El perimetro es:, %i", perimetro());
    }
    else if(op == 3)
    {
        printf("Adios");
    }
    else
    {
        printf("Opcion invalida, vuelve a intentarlo...\n");
    }
    if(op != 3)
    {
        main(0,0);
    }
    return 0;
}

int area(){
    int base, altura;
    printf("Dime la base");
    scanf("%i", &base);
    printf("Dime la altura");
    scanf("%i", &altura);
    return base*altura;
}

int perimetro(){
    int base, altura;
    printf("Dime la base");
    scanf("%i", &base);
    printf("Dime la altura");
    scanf("%i", &altura);
    return 2*(base+altura);
}