#include "lib.h"
#include <cstring>
#include <iostream>

using namespace std;

bool ricerca ( char a [10][20], char nome [1][20] , int &count) {

    for (int i=0; i<10; i++){
        if (strcmp(a[i], nome [0]) == 0) {
                count = i;
                return true;
            }
    } return false;

}
