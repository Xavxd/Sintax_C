#include<stdio.h>

int main(){
    int hrs;
    printf("ingrese la hora actual");
    scanf("%d", &hrs);

    if(hrs<12){
        printf("Buenos dias");
    }

    if((hrs>=12) && (hrs<19)){
        printf("Buenas tardes");
    }

    if(hrs>19){
        printf("Buenas noches");
    }

    /*//operador ternario
    printf(" %s/%n",(hrs<12) ? "Buenos dias" : "");
    printf(" %s/%n",((hrs>=12) && (hrs<19)) ? "Buenas tardes" : "");
    printf(" %s/%n",(hrs>19) ? "Buenas noches" : "");*/
}