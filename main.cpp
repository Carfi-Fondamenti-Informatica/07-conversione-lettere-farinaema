#include <iostream>
#include "lib.h"
using namespace std;

int main(){

    char a;

    cin >> a;
    if (carattere(a)){

        conversione(a);


    } else {

        cout << "errore" << endl;
    }

}
