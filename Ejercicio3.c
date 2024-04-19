/*3.	Escriba un programa para crear un procedimiento que reciba un valor como argumento y
 lo cambie de signo. */

 #include<stdio.h>

 int cambiarSigno(int num1);

 int main(int argc, char const *argv[])
 {
    int resultado;
    int num1;

    printf("Dime el numero que quieres cambiar de signo:");
    scanf("%d", &num1);
    
    resultado = cambiarSigno(num1);

    printf("El resultado del cambio es: %d", resultado);
    return 0;
 }

 int cambiarSigno(int num)
 {
    return  (-1*num);
 }
