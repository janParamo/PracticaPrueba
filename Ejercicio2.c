/*2.	Escriba el programa que realice las operaciones básicas (suma, resta, multiplicación y división), 
a partir de dos números enteros desconocidos. Utilizar una función diferente por cada operación.  
Utilizar función sin parámetros.*/

#include<stdio.h>


int sumar();
int resta();
int division();
int multiplicar();

int main(int argc, char const *argv[])
{
   int opcion;
   printf("Bienvenido...\n"); 
   printf("Opcion 1: Sumar\n"); 
   printf("Opcion 2: Restar\n"); 
   printf("Opcion 3: Dividir\n"); 
   printf("Opcion 4: Multiplicar:\n"); 
   printf("Opcion 5: Salir\n");

   printf("Elige un opcion..\n");
   scanf("%i", &opcion);

   if (opcion == 1)
   {
    printf("La suma es: %i\n", sumar());
   }
   else if (opcion == 2)
   {
    printf("La resta es: %i\n", resta());
   }
   else if (opcion == 3)
   {
    printf("La division es: %i\n", division());
   }
   else if (opcion == 4)
   {
    printf("La multiplicacion es: %i\n", multiplicar());
   }
   else if (opcion == 5)
   {
    printf("Adios");
   }
   else
   {
    printf("Opcion invalida\n");
   }
   if (opcion !=5)
   {
    main(0,0);
   }
    return 0;
}

int sumar(){
    int num1, num2;
    printf("Dime el primer numero");
    scanf("%i", &num1);
    printf("Dime el segundo numero");
    scanf("%i", &num2);
    return num1+num2;
}
int resta(){
    int num1, num2;
    printf("Dime el primer numero");
    scanf("%i", &num1);
    printf("Dime el segundo numero");
    scanf("%i", &num2);
    return num1-num2;
}
int division(){
    int num1, num2;
    printf("Dime el primer numero");
    scanf("%i", &num1);
    printf("Dime el segundo numero");
    scanf("%i", &num2);
    return num1/num2;
}
int multiplicar(){
    int num1, num2;
    printf("Dime el primer numero");
    scanf("%i", &num1);
    printf("Dime el segundo numero");
    scanf("%i", &num2);
    if(num2>0)return num1*num2;
    return 0;
}