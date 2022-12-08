#include <iostream>
#include "lib.h"
using namespace std;

bool conversione( char &a ){
    int n;
    n = (int) a;
    cout << n << endl;
    if ( (n>= 65 and n<=90) or (n >= 97 and n <= 122) ){
       
        if( n>=65 and n<=90){

        n = n + 32;
        a = (char) n;
    
        } else if ( n >= 97 and n <= 122){

        n = n - 32;
        a = (char) n;
   
        }
        return true;
    } else {

    return false;
        
    }
}
