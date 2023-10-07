#include<stdio.h>

int main(){
    //División con variables inicializadas con un valor
    /*  double a=1 , b=2, resultado;
        resultado=a/b;
        printf("El resultado de la división es %d", resultado);*/

    //división  usando el scanf
    double a,b,resultado;
    printf("Ingrese dos numeros para dividirlos\n");

    //si en scanf se usan comillas al momento de pedir el valos lo considera como un solo numero 
    scanf("%d %d", &a,&b);
    resultado=a/b;
    printf("El resultado de la división es %d", resultado);

    //poner return 0 para que solo muestre el resultado del programa
    return 0;
}