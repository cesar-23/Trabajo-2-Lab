#include <iostream>

using namespace std;
int longitudI(string cadena){
    int i=0;
    while (cadena[i]!='\0'){
        i++;
    }
    return i;
}
void unir(char cadena1[], char cadena2[]){
    int i = 0;
    int j = longitudI(cadena2)+1;
    while (cadena1[i] != '\0')
    {
        cadena2[j] = cadena1[i];
        j++;
        i++;
    }
    cadena2[longitudI(cadena2)] = ' ';
    cadena2[longitudI(cadena2)+i] = '\0';
}


int main(){
    char cadena1[] = "Peque";
    char cadena2[20] = "Cadena base";
    unir(cadena1, cadena2);

    cout<<cadena2;

    return 0;
}

