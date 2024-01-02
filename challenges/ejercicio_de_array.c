#include<stdio.h>

int main(){
    int n;
    printf("Hola usuario! ingresa el numero de espacios que quieres en tu array\n");
    scanf("%d", &n);
    int arr[n];
    
    printf("ahora ingresa los valores para llenar el array\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("el array construido es: \n");
    for(int a=0; a<n ;a++){
        printf("%d ",arr[a]);
    }
    
}