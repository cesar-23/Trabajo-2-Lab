  
#include <iostream>
#include <ctime>
using namespace std;

void imprimirA(int array[],long int n){
    for(long int i=0;i<n;i++){
        cout<<array[i];
    }
}
int numeroR(){
    return rand()%9+1;
}
void InvertirI(int array[],int n){
    int aux;
    for(int i=0;i<n/2;i++){
        aux=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=aux;
    }
}
void invertirR(int *array,long int inicio,long int fin){
    if(inicio>fin ){                                         
        int aux=array[inicio];
        array[inicio]=array[fin];                            
        array[fin]=aux;
        invertirR(array,inicio-1,fin+1);
    }
}

int main(){
    srand(static_cast<unsigned int>(time(0)));
    long int tam=1000000;
    int *lista=new int[tam];
    for(int i=0;i<tam;i++){
        lista[i]=numeroR();
    }
    cout<<"lista original"<<"\n";
    //imprimirA(lista,tam);
    cout<<"los 3 primeros elementos son:"<<lista[0]<<lista[1]<<lista[2];
    cout<<"\n";
    cout<<"Modificacion iterativa"<<"\n";
    InvertirI(lista,tam);
    //imprimirA(lista,tam);
    cout<<"los 3 ultimos elementos son:"<<lista[tam-3]<<lista[tam-2]<<lista[tam-1];
    cout<<"\n";
    cout<<"Modificacion recursiva"<<"\n";
    invertirR(lista,tam-1,0);
    //imprimirA(lista,tam);
    cout<<"los 3 primeros elementos son:"<<lista[0]<<lista[1]<<lista[2];
    return 0;
}