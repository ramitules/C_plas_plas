#include <iostream>
#include <string>

using namespace std;

int main(){
    // OPERADORES ARITMETICOS
    int uno = 1, dos = 2;
    int suma = uno + dos;  // 3
    int resta = dos - uno;  // 1
    int multiplicacion = uno * dos;  // 2
    int division = dos / uno;  // 2
    int modulo = dos % uno;  // 0
    int incremento = ++dos;  // 3
    int sustraccion = --dos;  // 1

    // OPERADORES DE ASIGNACION
    uno += dos;  // Igual que uno + dos, pero asignando el resultado a la variable "uno"

    // OPERADORES DE COMPARACION
    cout << (uno < dos) << '\n';  // 1: true
    cout << (uno > dos) << '\n';  // 0: false
    cout << (uno == dos) << '\n';
    cout << (uno != dos) << '\n';
    cout << (uno <= dos) << '\n';
    cout << (uno >= dos) << '\n';

    // OPERADORES LOGICOS
    cout << (uno < dos) && (uno != dos) << '\n';  // true
    cout << (uno > dos) || (uno <= dos) << '\n'; 
    cout << !(uno < dos) << '\n';
    
    return 0;
}