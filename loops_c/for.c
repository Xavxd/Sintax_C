#include<stdio.h>

int main(){
    /*el bucle for es la misma idea pero en este caso de preferencia 
    declarar la variable dentro del parentesis y usar solo esa variable para el for*/

    //for( variable_inicial; condición; iterador)
    //int i;
    for(int i=1; i<=5; i++){
        //codigo a ejecutar
        printf("variable del loop %d \n", i);
    } 
    
    /*si tratamos de usar la variable i fuera del for dara un error porque es solo una variable local
    osea solo se usa dentro del loop */
    //i;
    return 0;
}
