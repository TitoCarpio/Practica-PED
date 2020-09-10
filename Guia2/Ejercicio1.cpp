#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
// variable global que utilizaremos para controlar los for y manejar el arreglo de notas
int n = 0;

// Resgistro donde almacenaremos todos los datos del usuario
struct Estudiante{

    string nombre;
    string apellido;
    string estado = "Indefinido";
    float notas[];

};

/*variable del mismo tipo de nuestro registro, de ambito global para poder hacer
**uso de ella en cualquiera de nuestras variables */

struct Estudiante estudiante;

// lista de todas las variables a usar
void Ingresar_datos();
void notas(int );
float promedio();
void mostrar(float);

int main(){

    float prome = 0;
    Ingresar_datos();
    cout<<"\t Cuantas notas desea ingresar: ";
    cin>>n;
    notas(n);
    prome = promedio();
    mostrar(prome);

    getch();
    return 0;
}

// Funcion con la que pedimos datos al usurio
void Ingresar_datos(){
    cout<<"\t Ingrse su nombre: ";
    cin>>estudiante.nombre;
    cin.ignore();
    cout<<endl;
    cout<<"\t Ingrese su apellido: ";
    cin>>estudiante.apellido;
    cin.ignore();
}

// Funcion con la que pedimos las notas al usurio
void notas(int n){
    for(int i=0;i<n;i++){
    cout<<"\t Ingrese la nota "<<i+1<<":";
    cin>>estudiante.notas[i];
    }
}

// funcion que calcula el promedio de las notas y verifica el estado del usuario
float promedio(){
    float prom = 0;
    for(int i = 0;i<n;i++){
        prom = (prom + estudiante.notas[i]);
    }
    prom = prom/n;
    if(prom < 6){
        estudiante.estado = "Resprobado";
    }else{
        estudiante.estado  = "Aprobado";
    }
    return prom;
}

// Funcion que muestra toda la informacion del usuario
void mostrar(float promedio){
    cout<<"_______________________________________________"<<endl;
    cout<<"\t Nombre del Alumno: "<<estudiante.nombre<<" "<<estudiante.apellido<<endl;
    cout<<"\t Obtuvo notas de:";
    for(int i=0;i<n;i++){
        cout<<"["<<estudiante.notas[i]<<"] ";
    }
    cout<<endl;
    cout<<"\t Promedio Final: "<<promedio<<endl;
    cout<<"\t Estado: "<<estudiante.estado<<endl;
}