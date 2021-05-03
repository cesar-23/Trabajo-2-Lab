#include <iostream>
#include <ctime>
using namespace std;

int numeroR(){
    return rand()%9+1;
}
void imprimirA(int array[],long int n){
    for(long int i=0;i<n;i++){
        cout<<array[i];
    }
}

void ordenar(int array[],int tam){     
    if(tam>0){                          
        for (int i=0;i<tam-1;i++){      
            if(array[i]>array[i+1]){    
                int aux=array[i];
                array[i]=array[i+1];    
                array[i+1]=aux;         
            }
        }
        ordenar(array,tam-1);           
    }
}

int main(){

    int tam=1000000;
    int *array =new int[tam] ,aux;      

    srand(static_cast<unsigned int>(time(0)));       
    for(long int i=0;i<tam;i++){
        array[i]=numeroR();
    }
    imprimirA(array,tam);
    cout<<"\n";
    ordenar(array,tam);
    imprimirA(array,tam);

    delete[] array;
    return 0;
}

