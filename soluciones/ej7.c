
#include <stdio.h>
int main(){
/*Sin ejecutar determina cuál dirección es mayor:
&m[0][3]
&m[1][0]
La dirección mayor es &m[1][0], ya que primero se llenan los elementos horizontales, una vez que estos acaban, se cambia de fila y así sucesivamente, esto es así por el orden de llenado de los ciclos for
Justifica matemáticamente.
El llenado de los espacios es por filas primero, por lo que al &m[1][0] tener un valor mas grande de filas, implica que es su dirección posee un valor mas grande que &m[0][3], ya que 0 < 1 y Como [C] (total de columnas) debe ser mayor a 3 para que exista el índice [0][3], entonces C > 3. Por lo tanto, la dirección de &m[1][0] es mayor porque el salto de una fila completa siempre supera a 3 posiciones en la fila anterior.
*/
    return 0;
}
