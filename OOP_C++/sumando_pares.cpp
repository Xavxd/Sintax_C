#include<iostream>

using namespace std;
//prototipos
//valor_de_retorno nombre(){codigo...}
void notacion_arreglo();
void notacion_apuntador();
void apuntador_como_arreglo();
void arreglo_como_apuntador();

int main(){
    notacion_arreglo();
    notacion_apuntador();
    apuntador_como_arreglo();
    arreglo_como_apuntador();
}

/*------funciones------*/
void notacion_arreglo(){
    int my_array[10]={1,2,3,4,5,6,7,8,9,10};
                    //0,1,2,3,4,5,6,7,8,9-posiciones
    int not_arr=0;
    for(int i=0;i<10;i++){
        //notación arreglo:
        if(my_array[i]%2 == 0){
            not_arr+=my_array[i];
        }
    }

    cout<<"Suma con notacion arreglo= "<<not_arr<<"\n";
}

void notacion_apuntador(){
    int my_array[10]={1,2,3,4,5,6,7,8,9,10};
                    //0,1,2,3,4,5,6,7,8,9-posiciones
    int* ap_ar=&my_array[0],not_ap=0;

    for(int i=0;i<10;i++){
        //notación apuntador
        ap_ar=&my_array[i]; 

         if(*ap_ar%2 == 0){
            not_ap+=*(ap_ar++);
            //ap_ar++;            
            }
    }
    cout<<"Suma con notacion apuntador= "<<not_ap<<"\n";
}


void apuntador_como_arreglo(){
    int my_array[10]={1,2,3,4,5,6,7,8,9,10};
                    //0,1,2,3,4,5,6,7,8,9-posiciones
    int *apuntador= my_array;
    int sum=0;

    for(int i=0;i<10;i++){
        //notación arreglo:
        if(my_array[i]%2 == 0){
            sum+=*(apuntador + i);
        }
    }

    cout<<"apuntador como arreglo= "<<sum<<"\n";
}

void arreglo_como_apuntador(){
    int my_array[10]={1,2,3,4,5,6,7,8,9,10};
                    //0,1,2,3,4,5,6,7,8,9-posiciones
    int sum_b=0;

    for(int i=0;i<10;i++){
        //notación apuntador
         if(my_array[i]%2 == 0){
            sum_b+=*(my_array+i);
            //ap_ar++;            
            }
    }

    cout<<"arreglo como apuntador= "<<sum_b<<"\n";
}
