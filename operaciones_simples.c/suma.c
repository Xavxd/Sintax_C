#include<stdio.h>

int main(){
    //Suma con variables inicializadas con un valor
    /*  int a=1 , b=2, resultado;
        resultado=a+b;
        printf("El resultado de la suma es %d", resultado);*/

    //suma usando el scanf
    int a,b,resultado;
    printf("Ingrese dos numeros para sumarlos\n");

    //si en scanf se usan comillas al momento de pedir el valos lo considera como un solo numero 
    scanf("%d %d", &a,&b);
    resultado=a+b;
    printf("El resultado de la suma es %d", resultado);

    //poner return 0 para que solo muestre el resultado del programa
    return 0;

    /*Nota: esto es un comentario para poder ejecutar lo que esta comentado elimina los simbolos (/ * ) y (* /) */
}
