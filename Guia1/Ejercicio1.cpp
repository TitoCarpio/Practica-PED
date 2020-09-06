#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int num = 10;
    int *p = &num;

    cout<<"\t el valor entero es: "<<num<<endl;
    cout<<"\t Modificando...."<<endl;
    *p = 50;
    cout<<"\t El nuevo valor es: "<<*p<<endl;


    getch();
    return 0;
}