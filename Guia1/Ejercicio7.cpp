#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void pos_carcater(char *p , int longitud , int *posicion){
    char caracter;

    cout<<endl;
    cout<<"\t Ingrese el caracter a buscar: ";
    cin>>caracter;

    for(int i=0; i<longitud;i++){
        if(*(p+i) == caracter){
            *posicion = i;
            cout<<"\t Lo encontramos!!!!"<<endl;
            break;
        }else 
            *posicion = 100;   

    }

}

int main(){
    char cadena[30];
    int longitud = 0, posicion = 0;

    cout<<endl;
    cout<<"\t Ingrese una cadena de carcteres:";
    cin.getline(cadena,30,'\n');
    longitud = strlen(cadena);

    pos_carcater(cadena,longitud,&posicion);

    if(posicion<100)
        cout<<"\t La posicion en la que se encuentra su caracter es: "<<posicion<<endl;
    else
        cout<<"\t El caracter no existe en su cadena:("<<endl;

    getch();
    return 0;
}