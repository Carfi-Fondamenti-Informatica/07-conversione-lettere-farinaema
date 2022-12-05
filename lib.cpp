#include <iostream>
using namespace std;

bool carattere( char a ){
    int n;
    n = (int) a;

    if ( n>= 48 and n<=57){
        return false;
    }

    return true;
}

void conversione (char &a){

    int n;
    n = (int) a;
    if( n>=65 and n<=90){

        n = n + 32;
        a = (char) n;
    }

    n= n-32;
    a = (char) n;
}

int main(){
    return 0;
}
