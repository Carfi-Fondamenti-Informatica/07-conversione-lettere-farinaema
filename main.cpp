#include <iostream>
#include "lib.h"
using namespace std;

int main(){

    char a;

    cin >> a;
    if (carattere(a)){

        a=conversione(a);
        cout << a << endl;

    } else {

        cout << "errore" << endl;
    }

}
