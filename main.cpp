#include <iostream>
#include "lib.h"

using namespace std;

int main () {
char a [10][20] = {};
char nome [1][20] = {};
nome [0][19]='\0';
int count=0;

for (int i=0; i<10; i++){
    a [i][19] = '\0';
}

cout << "Inserire 10 nomi: " << endl;
listanomi (a);

cout << "Inserire nome da cercare: "<< endl;
cin >> nome [0] ;

if ( ricerca (a, nome,  count) ) {
    cout << count << endl;
} else {
    cout << "non presente" << endl;
}

return 0;
}
