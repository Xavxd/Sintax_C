#include<stdio.h>

int main() {
    //            c  f
    int mi_matiz [2][2];
    //       c   f 
    mi_matiz[0] [0]=1;    
    mi_matiz[1] [0]=2;
    mi_matiz[0] [1]=3;
    mi_matiz[1] [1]=4;

    for(int i=0; i<2; i++){
        //comenzamos con las columnas
        for(int j=0; j<2; j++){
         //conmenzamos con las filas

            //i=numero_de_columnas   j=numero_de_filas
            printf("%d \n",mi_matiz[i][j]);
        }
    }
    return 0;
}
