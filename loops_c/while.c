#include<stdio.h>

int main(){
    /*comensando con algo simple comenzamos usando un while() para explicar como funcionan 
    las estructuras de control que tambien se conocen como loops o bucles */

    //declarando variable para evaluar
    int contador=0,lim;

    /*while(condicon) {
        codigo para ejecutar...
      }*/

      printf("ingresa un valor para el limite del loop");
      scanf("%d", &lim);

    while(contador < lim){
        printf("\n inicio de vuelta contador vale: %d \n",contador);        
        
        contador++; // contador=contador+1;
        //printf("vuelta numero: %d \n",contador);

        printf("fin de vuelta contador vale: %d \n",contador);
    }    

    /*el funcionamiento es básicamente evaluar si la condicion se cumble y despues ejecutar 
    lo que esta dentro del loop y solo eso, 
    NO SALE DEL LOOP HASTA QUE LA CONDICIÓN QUE EVALUA NO SE CUMPLA*/
    return 0;
}


