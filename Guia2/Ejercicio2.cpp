#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int n=0, nota=0;

// Resgistro donde almacenaremos todos los datos del usuario
struct Estudiante{

    string nombre;
    string apellido;
    float *notas;

};


void Ingresar_datos(Estudiante[]);
float *notas();
float promedios(float *);
int mayor(float[]);
void mostrar(int, Estudiante[]);

int main(){
    float promedio[n];
    int pmayor=0;

    cout<<"\t Ingrese la cantidad de estudiantes a promediar: ";
    cin>>n;
    cin.ignore();
    struct Estudiante estudiantes[n];
    Ingresar_datos(estudiantes);
    cout<<"\t Cantidad de notas a promediar por alumno: ";
    cin>>nota;

    // ingresar las notas de cada alumno
    for(int i=0;i<n;i++){
        cout<<"\t Notas del alumno "<<estudiantes[i].nombre<<endl;
        estudiantes[i].notas = notas();
        
    }
    
    // calcular promedio 
    for(int i=0;i<n;i++){
        promedio[i]= promedios(estudiantes[i].notas);
    }

    pmayor=mayor(promedio);

    mostrar(pmayor,estudiantes);



    getch();
    return 0;
}

void Ingresar_datos(Estudiante *estudiantes){
    for(int i=0;i<n;i++){
        cout<<"\t Ingrse el nombre del alumno "<<i+1<< ": ";
        cin>>estudiantes[i].nombre;
        cin.ignore();
        cout<<endl;
        cout<<"\t Ingrese el apellido: ";
        cin>>estudiantes[i].apellido;
        cin.ignore();
    }
}

// funcion que devulve un arreglo
float *notas(){
    float *ar_notas = new float[nota];
    for(int i=0;i<nota;i++){
        cout<<"\t Ingrese la nota "<<i+1<<": ";
        cin>>ar_notas[i];
    }
    return ar_notas;
}
float promedios(float *promedio){
    float prom = 0;
    for(int i = 0;i<n;i++){
        prom = (prom + promedio[i]);
    }
    prom = prom/n;
    
    return prom;
}

int mayor(float *promedios){
    float mayor = 0;
    int posicion=0;
    for(int i=0;i<nota;i++){
        if(promedios[i]>mayor){
            mayor = promedios[i];
            posicion = i;
        }
    }
    return posicion;
}

void mostrar(int m, Estudiante *estudiantes){
    cout<<"\t El estudiante con mayor promedio : "<<estudiantes[m].nombre<<" "<<estudiantes[m].apellido<<endl;

}