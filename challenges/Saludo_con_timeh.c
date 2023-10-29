#include<stdio.h>
#include<time.h>


int main(){
    //la variable de tipo time_t sirve para referenciar al tiempo
    time_t hora_actual; 
    /*la sintaxis para struct es: struct tm *name_structure, (tm) es el tipo de estructura y 
    *name_structure quiere decir que es el nombre de la estructura */
    struct tm *var_local;

     hora_actual=time(NULL);//obteniendo la hora actual de la pc 
     var_local=localtime(&hora_actual);// almacenando los datos de tiempo en la estructura de tipo tm

    //para obtener los datos de la estructura por aparte se declaran las variables
    //para especificar la parte de la estructura se usa la sintaxis: variable= nombre_estructura-> dato;
    int hrs= var_local-> tm_hour;
    int min= var_local-> tm_min;
    int seg= var_local-> tm_sec;

    //condicional en caso de que la hora actual este entre las 12 y las 19 hrs dira buenas tardes
    if((hrs>12) && (hrs<19)){
        printf("Buenas tardes");
    }else{
        //en caso de que la hora sea menos de las 12 hrs
        if(hrs<12){
            printf("buenos dias!");
        }else{
            //en caso de que la hora sea mas de las 19 hrs 
            printf("buenas noches");
        }
    }

    return 0;
}

//usando la hora ingresada por el usuario
