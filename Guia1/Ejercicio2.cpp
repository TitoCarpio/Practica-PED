#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int num1 = 0, num2 = 0;
    int *puntero = &num1;
    int *p = &num2;

    cout<<"\t Ingrese un entero: ";
    cin>>num1;
    cout<<endl;
    cout<<"\t Ingrese el segundo entero: ";
    cin>>num2;
    cout<<endl;


    // mostrando direccion y valor de las variables por medio de los punteros
    cout<<"\t La direccion de la variable num1 es: "<<puntero<<endl;
    cout<<"\t Contiene el valor : "<<*puntero<<endl;
    cout<<"\t La direccion de la variable num2 es: "<<p<<endl;
    cout<<"\t contiene el valor : "<<*p<<endl;

    getch();
    return 0;
}