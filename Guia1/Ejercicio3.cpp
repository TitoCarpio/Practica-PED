#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int num1 = 0;
    int *p = &num1;

    cout<<"\t Ingrese un entero: ";
    cin>>num1;
    cout<<endl;

    cout<<"\t Mostrando el valor ingresado:"<<*p<<endl;




    getch();
    return 0;
}