#include<stdio.h>

int main(){
    //multiplicación con variables inicializadas con un valor
    /*  int a=1 , b=2, resultado;
        resultado=a*b;
        printf("El resultado de la multiplicación es %d", resultado);*/

    //multiplicación usando el scanf
    int a,b,resultado;
    printf("Ingrese dos numeros para multiplicarlos\n");

    //si en scanf se usan comillas al momento de pedir el valos lo considera como un solo numero 
    scanf("%d %d", &a,&b);
    resultado=a*b;
    printf("El resultado de la multiplicación es %d", resultado);

    //poner return 0 es parte de la estructura del programa tambien
    return 0;
}