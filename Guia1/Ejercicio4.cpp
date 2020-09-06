#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n = 0, valormax = 0;
    int arreglo[n];
    int *p = &valormax;

    cout<<endl;
    cout<<"\t Cuantos valores desea ingresar:";
    cin>>n;

    cout<<"\t Ingrese los valores de su lista:"<<endl;

    for(int i = 0; i<n; i++){
        cout<<"\t Valor"<<i+1<<": ";
        cin>>arreglo[i];
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        if(valormax < arreglo[i])
            valormax = arreglo[i];
        else 
            valormax = valormax;
    }

    cout<<"\t El valor maximo es: "<<*p<<endl;

    getch();
    return 0;
}