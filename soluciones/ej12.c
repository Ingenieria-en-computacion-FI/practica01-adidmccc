
#include <stdio.h>
int main(){
/*Se sabe:
int m[3][5];
base = 4000
Calcula:
La formula que se utilizara es esta Dirección = Base + ( i × C + j ) × F
1. dirección de m[2][4] = 4000 + ( 2 x 3 + 4 ) x 5 = 4050
2. dirección de m[1][3] = 4000 + ( 1 x 3 + 3 ) x 5 = 4030
3. diferencia entre ambas = La diferencia es de 20 bytes, es decir, 5 espacios, ya que los valores almacenados son enteros 
Una matriz bidimensional se almacena en memoria como un arreglo lineal. Primero se realiza un salto completo por filas, multiplicando el índice de la fila por el número total de columnas, y posteriormente se avanza dentro de la fila mediante el índice de la columna. Todo el desplazamiento resultante se multiplica por el tamaño del tipo de dato y, como se utiliza int, que ocupa 4 bytes, se obtiene finalmente la dirección de memoria correspondiente.
*/
    return 0;
}
