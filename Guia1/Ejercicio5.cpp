#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){
    char cadena[] = {'p','u','n','t','e','r','o','\0'};
    char *p = cadena;

    
    cout<<"\t"<<*p<<" "<<*p<<" "<<*(p+2)<<" "<<*(p+3)<<endl;
    cout<<"\t"<<p<<" "<<*(p+4)<<" "<<*(p+5)<<" "<<*(p+6)<<endl;


    getch();
    return 0;
}