#include <iostream>
#include <conio.h>

using namespace std;

int raizDigital(int);

int main() {
    int num=0;
    int raiz=0;

    cout << "Ingrese un numero (NO NEGATIVO): ";
    cin >> num;

    raiz = raizDigital(num);
    cout<<raiz;

    getch();
    return 0;
}

int raizDigital(int num) {
    int aux, suma = 0;
    if (num < 10)
    {
        return num;
    }else {
        while (num > 0)
        {
            suma = suma + num%10;      //con esto saco el residuo de la division
            num = num/10;
        }
        
        return raizDigital(suma);
    }

}