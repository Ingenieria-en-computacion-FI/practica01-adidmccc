#include <stdio.h> 

int main() {
    int a[3];
    int b[3];
    int c[3];
    for(int i = 0; i < 3; i++ ){
        printf("El elemento a[%d] tiene la direccion : %x\n", i, &a[i]);
        printf("El elemento b[%d] tiene la direccion : %x\n", i, &b[i]);
        printf("El elemento c[%d] tiene la direccion : %x\n", i, &c[i]);
    }
    return 0; 
}
