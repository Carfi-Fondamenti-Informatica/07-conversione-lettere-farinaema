#include <iostream>
#include "lib.h"
using namespace std;

bool carattere( char a ){
    int n;
    n = (int) a;

    if ( n>= 48 and n<=57){
        return false;
    }

    return true;
}

char conversione (char a){

    int n;
    n = (int) a;
    if( n>=65 and n<=90){

        n = n + 32;
        a = (char) n;
        return a;
    }

    n= n-32;
    a = (char) n;
    return a;
}

int main(){
    return 0;
}
