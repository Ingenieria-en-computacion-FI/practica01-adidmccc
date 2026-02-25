#include <stdio.h>
int main (){
    int m[2][4];

for (int i = 0; i < 2; i++){
    for (int j = 0; j < 4; j++){
         printf("[%p]", &m[i][j]);
    }
    } 
}
/*
- lo almacena por filas
*/
