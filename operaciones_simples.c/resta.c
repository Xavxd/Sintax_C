#include<stdio.h>

int main(){
    //Resta con variables inicializadas con un valor
    /*  int a=1 , b=2, resultado;
        resultado=a-b;
        printf("El resultado de la resta es %d", resultado);*/

    //Resta usando el scanf
    int a,b,resultado;
    printf("Ingrese dos numeros para restarlos\n");

    //si en scanf se usan comillas al momento de pedir el valos lo considera como un solo numero 
    scanf("%d %d", &a,&b);
    resultado=a-b;
    printf("El resultado de la resta es %d", resultado);

    //poner return 0 para que solo muestre el resultado del programa
    return 0;
}