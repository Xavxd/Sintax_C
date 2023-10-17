#include<stdio.h>

int main(){
    //imprimir todo el codigo ASCII
    //variable para guardar la cantidad
    char n_cod;

    //bucle para incrementar la cantidad en n_cod usando i
    for(int i=32; i<128; i++){
        n_cod =i;

        //al momento de guardar un entero con el uso de %c imprime un caracter acorde al codigo ascii 
        printf("%c\n", n_cod);
    }

    return 0;
}