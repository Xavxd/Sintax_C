//reto: trata de ordenar los numeros del 1 al 1000 en pares e impares
#include<stdio.h>

int main(){
    // Declarar los array para ordenar los numeros 
    int num_par[500], num_impar[500];

    // Variable de inicio
    int inicio = 1;

    //iteradores par las posiciones de los arrays
    int pa=0,im=0;

    // Llenar el array con números en orden
    for (int i = 0; i < 1000; i++) {
        
        if(inicio %2==0){
            num_par[pa]=inicio;
            pa++;
        }

        if(!(inicio%2==0)){
            num_impar[im]=inicio;
            im++;
        }
        
        inicio++; // Incremento para el siguiente valor
    }

    // Imprimir el contenido del array
    printf("Numeros par:\n");
    for (int i = 0; i < 500; i++) {
        printf("Elemento par: %d\n", num_par[i]);
    }

    printf("\n Numeros impares:\n");
    for (int i = 0; i < 500; i++) {
        printf("Elemento impar: %d\n", num_impar[i]);
    }
    return 0;
}