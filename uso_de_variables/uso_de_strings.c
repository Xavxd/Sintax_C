#include<stdio.h>
#include<string.h>

int main(){
    /*en el lenguaje C no extiste el tipo de variable string pero existe una libreria que 
    ayuda a operar con strings y estos los podemos manipular como arrays de caracteres*/

    char nombre[]= "Jonathan";
    char segundo_nombre[]= "Xavier";
    //como no sabemos cuantos espacios ocupara entonces le damos un numero algo grande al array:
    char nombre_completo[50]; 
    //para imprimir si se le pasa el argumento como s para una cadena de caracteres(string)
    //printf("%s ",nombre);

    strcpy(nombre_completo,nombre);// en nombre completo se guarda solo "Jonathan"
    strcat(nombre_completo," ");//añade un espacio al nombre completo
    strcat(nombre_completo,segundo_nombre);// en nombre completo se añade "Xavier"
    printf("%s \n",nombre_completo);

    int tamaño = strlen(nombre_completo);
    printf("El tamaño de la string es: %d",tamaño);

    int son_iguales =strcmp(nombre,segundo_nombre);
    printf("%d",son_iguales);

    /*
     strcpy ( c1, c2 ); Copia c2 en c1
     strcat ( c1, c2 ); Añade c2 al final de c1
     int strlen ( cadena ); Devuelve la longitud de la cadena
     int strcmp ( c1, c2 ); Devuelve cero si c1 es igual a c2;*/
}