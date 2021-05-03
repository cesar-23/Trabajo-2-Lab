#include <iostream>
using namespace std;
int longitudI(string cadena){
    int i=0;
    while (cadena[i]!='\0'){
        i++;
    }
    return i;
}
int longitudR(string cadena,int n){
    if(cadena[n]=='\0'){
        return 0;
    }
    return 1+longitudR(cadena,n+1);
}
int main(){
    string cadena="Ejercicio numero 4 CCI2, tengo 44 caracteres";
    cout<<longitudI(cadena)<<"\n";
    cout<<longitudR(cadena,0)<<"\n";
    return 0;
}