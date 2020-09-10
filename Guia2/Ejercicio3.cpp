#include <iostream>
#include <conio.h>

using namespace std;

int n=0;
void llenar(int [] , int );

int main() {
    
    int arreglo[n];
    int indice =0;
    cout<<"\t Ingrese el tamano del arreglo: ";
    cin>>n;

    int *puntero = arreglo;

    llenar(puntero,indice);

    cout<<"\t Mostrando el arreglo:"<<endl;
    for(int i =0;i<n;i++){
        cout<<"\t";
        cout<<arreglo[i]<<" ";
    }

    getch();
    return 0;
}

// funcion recursiva para llenar un arreglo
void llenar(int *puntero,int indice){
    if(indice==n){
        return;
    }else{
        cout<<"\t introduzca el entero de la casilla "<<indice<<" del arreglo:";
        cin>>puntero[indice];
        indice++;
        llenar(puntero,indice);
    }
    

    
}
