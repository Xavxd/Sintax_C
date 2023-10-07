#include<stdio.h>

int main(){
    /*double dividendo=10, divisor=3, resultado;
    resultado = dividendo % divisor;
    printf("El residuo de %d dividido por %d es %d\n", dividendo, divisor, resultado);*/

    int a,b,resultado;
    printf("Ingresa dos numeros para usar el modulo");
    scanf("%d %d", a, b);
    
    //este operador solo funciona con int 
    resultado= a % b;
    printf("El resultado de la operación es ", resultado);
    return 0;
}