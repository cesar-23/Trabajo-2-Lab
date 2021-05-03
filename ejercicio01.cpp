#include <iostream>
#include <ctime>
using namespace std;

int numeroR(){
    return rand()%9+1;
}


long int sumaDeElementosI(int array[],long int n){
    long int suma=0;
    for(long int i=0;i<=n;i++){
        suma+=array[i];
    }
    return suma;
}

long int sumaDeElementosR(int array[],long int n){
    if(n == 1) {                                 
        return array[0];
        cout<<"llegue a 1";
    }else{
        return array[n-1]+sumaDeElementosR(array,n-1);
    }
}

int main(){
    srand(static_cast<unsigned int>(time(0)));
    const long int tam=1000000;
    int *a = new int [tam];
    for(long int i=0;i<tam;i++){
        a[i]=numeroR();
    }
    cout << sumaDeElementosI(a,tam)<<"\n";
    cout << sumaDeElementosR(a,tam);
    delete[] a;
    return 0;
}