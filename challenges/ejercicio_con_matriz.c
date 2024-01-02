#include<stdio.h>

int main(){
    int r;//rows
    int c;//cols
    printf("Bienvenido usuario, ingresa la cantidad de filas que necesitas para tu matriz \n");
    scanf("%d",&r);
    printf("ahora ingresa la cantidad de columnas\n");
    scanf("%d",&c);

    int mi_matriz[r][c];
    printf("muy bien! Ahora vamos a llenar la matriz\n");

    //ciclos anidados para llenar la matriz
    for(int ro=0; ro<r; ro++){

        for(int cols=0; cols<c; cols++){

            printf("ingresa el valor para la casilla %d %d \n",ro ,cols);
            scanf("%d", &mi_matriz[ro][cols]);//se guarda el valor ingresado en la casilla indicada
        
        }

    }

    printf("\nla matriz ingresada fue:\n");
    //ciclos anidados para  mostrar la matriz
    for(int f=0; f<r; f++){

        for(int colums=0; colums<r ;colums++){
            printf("%d ",mi_matriz[f][colums]);//imprimiendo elementos de la primera fila 
        }

        printf("\n"); //salto de linea para la siguiente fila
    }
}