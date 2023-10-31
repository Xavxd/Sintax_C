#include<stdio.h>

int main(){
    //declarando variables para ordenar
    int mayor,medio,menor,num1,num2,num3;

    printf("Hola usuario ingresa el numero 1\n");
    scanf("%d",&num1);
    
    printf("Hola usuario ingresa el numero 2\n");
    scanf("%d",&num2);
    
    printf("Hola usuario ingresa el numero 3\n");
    scanf("%d",&num3);

    /*
    AND -> &&
    OR -> ||
    NOT -> != */ 

    //num1 mayor de los 3
    if( (num1>num2) && (num1>num3) ){
        mayor=num1;
        
        if(num2>num3){
            medio=num2;
            menor=num3;
        }else{
            medio=num3;
            menor=num2;
        }
    
    //num1 es el menor de todos
    }else if( (num1<num2) && (num1<num3) ){
        menor=num1;

        if(num2>num3){
            mayor=num2;
            medio=num3;
        }else{
            mayor=num3;
            medio=num2;
        }

    //num1 no es el mayor y tampoco es el menor            
    }else if( (num1>num2) && (num1<num3) || (num1>num3) && (num1<num2)){
        medio=num1;

        if(num2>num3){
            mayor=num2;
            menor=num3;
        }else{
            mayor=num3;
            menor=num2;
        }
    }

    printf("El numero mayor es: %d\n",mayor);
    printf("El numero medio es: %d\n",medio);
    printf("El numero menor es: %d",menor);
}