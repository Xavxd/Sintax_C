//Tipos de variables:

#include <stdio.h>//esto es una libreria y para incluirla usamos el #include


/*En ocaciones el main puede tener argumentos dentro del parentesis main(int argc, char const *argv[]) pero eso lo veremos despues 
por el momento no es necesario  */
int main(){
    /*----------variables--------*/
    //Estas variables son parecidas pero long soporta numeros mas grandes que int
    int numero_int=10;
    long numero_long=1000000;

    //short es usado para enteros muy pequeños
    short nuemro_short= -10;
    
    //esta variable solo representa una cantidad no tiene signo
    unsigned num_unsigned=100;

    //double y float se parecen pero la diferencia es que double es para numeros con decimales mas grandes
    float numero_float=0.5;
    double numero_double=3.141516;    

    //char es para letras o caracteres y pueden ser mayusculas o minusculas 
    char letra="A";

    

    /*Tambien podemos usar la variable bool que es para establecer un resultado 'true' o 'false'
    pero para esto hay que importar otra libreria que es <stdbool.h> y se veria:

    #include<stdbool.h>
    
    int main (){
        bool isTrue= true;
    }
    */

    return 0;
}

/*Simbolos para poder imprimir o recibir dartos de cada variable:
int=> %d
float=> %f
double=> %lf
Long double=> %Lf
unsigned=> %u
*/

/*nota no siempre se usan todas la variables las mas comunes son: 
int, double, char, bool(pero bool no la usaremos aparentemente por ahora)*/ 