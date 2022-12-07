#include <iostream>
#include "lib.h"
using namespace std;

bool carattere( char a ){
    int n;
    n = (int) a;
    cout << n << endl;
    if ( n>= 65 and n<=90 ){
        return true;
    } else if ( n>=97 and n<=122) {
        return true;
    }

    return false;
}

void conversione (char &a){

    int n;
    n = (int) a;

    if( n>=65 and n<=90){

        n = n + 32;
        a = (char) n;
        
    } else if ( n >= 97 and n <= 122) {

        n = n - 32;
        a = (char) n;
        
    }
}
