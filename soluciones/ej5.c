#include <stdio.h> 

int main() {
    char a[11];
    int b[11];
    for(int i = 0; i < 11; i++ ){
        printf("El elemento a[%d] tiene la direccion : %x\n", i, &a[i]);
    }
    for(int i = 0; i < 11; i++ ){
        b[i] = 1000 + i ;
        printf("El elemento b[%d] tiene el valor guardado de : %d\n", i, b[i]);
    }
    return 0; 
}
