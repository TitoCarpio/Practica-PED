#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

// Funcion que cuenta y devuleve la cantidad de vocales de la cadena
int contarvocales(char *p, int longitud){
    int n = longitud;
    int contador =0;
    for(int i =0; i<n; i++){
        if(p[i]=='a')
            contador ++;
        else if(p[i]=='e')
            contador ++;
        else if(p[i]=='i')
            contador ++;
        else if(p[i]=='o')
            contador ++;
        else if(p[i]=='u')
            contador ++;
        else
            contador= contador;
    }

    return contador;
}

int main(){
    char cadena[30];
    char *p = cadena;
    int vocales = 0, longitud;


    cout<<"\t Ingrese la cadena de caracteres: ";
    cin.getline(cadena,30,'\n');
    
    // obtengo la longitud de mi cadena para poder usar un for en la funcion contarvocales
    longitud = strlen(cadena);

    vocales = contarvocales(cadena,longitud);
    cout<<"\t La cadena cuenta con "<<vocales<<" vocales."<<endl;
    
    getch();
    return 0;
}