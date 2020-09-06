#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){
    char cadena[] = {'p','u','n','t','e','r','o'};
    char *pun = cadena;

    
    cout<<"\t"<<*pun<<" "<<&cadena<<" "<<*(pun+2)<<" "<<*(pun+3)<<endl;
    cout<<*pun;




    getch();
    return 0;
}