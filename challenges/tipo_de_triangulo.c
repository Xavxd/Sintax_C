#include<stdio.h>

int main(){
    float l_a,l_b,l_c;

    printf("Ingresa el valor del lado a\n");
    scanf("%f", &l_a);

    printf("Ingresa el valor del lado b\n");
    scanf("%f", &l_b);

    printf("Ingresa el valor del lado c\n");
    scanf("%f", &l_c);

    //lados iguales
    if((l_a==l_b)&&(l_a==l_c)&&(l_b==l_c)){
            printf("El triangulo es Equilatero");
    }
    
    //lados diferentes
    if((l_a!=l_b) && (l_b!=l_c) && (l_a!=l_c)){
            printf("El triangulo es Isosceles");
    }

    //2 lados iguales 
    if( ((l_a==l_b) && (l_c!=l_a)) || ((l_a==l_c) && (l_b!=l_a)) || ((l_b==l_c) && (l_a!=l_b)) ){
        printf("El triangulo es Escaleno");
    }
    /*en este ultimo if se convinan el or y el and para ser mas precisos, se puede hacer tambien usando if anidados 
    (un if dentro de otro if pero para poder resumirlo lo use con or y and)*/
    return 0;
}