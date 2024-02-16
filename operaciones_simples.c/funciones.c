#include<stdio.h>

//Las funciones son fragmentos de codigo que se pueden hacer fuera del metodo o función main

/*por ejemplo en la siguiente funcion pediremos como parametro dos numeros enteros para sumarlos y retornarlos
sintaxis: 
int(valor retornado)/ suma(nombre)/ parentesis(puete tener parametros o estar vacio){
    por ultimo dentro de las llaves se ejecutara el codigo aparte
}*/ 
int suma(int a,int b){
    int r=a+b;
    return r;
}

int main(){
    int a=1,b=2;
    //llamando a la función suma para sumar los valores
    int r=suma(a,b);
    printf("%d",r);
} 


