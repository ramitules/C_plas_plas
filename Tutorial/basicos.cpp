#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Hola mundo\n";

    cout << "Insertar nueva linea con \\n\n";

    // Asi se comenta una linea

    /* Asi se comentan
    varias lineas */

    // VARIABLES
    int integral = 0;           // 2 o 4 bytes
    float flotante = 0.1;       // 4 bytes - hasta 7 decimales
    double flotanteLargo = 0.1; // 8 bytes - hasta 15 decimales
    char caracter = 'a';        // 1 byte - siempre con comillas simples
    string texto = "Hola mundo";// Siempre con comillas dobles
    bool booleano = false;      // 1 byte

    // Una variable flotante tambien puede ser un numero cientifico
    // con una "e" para indicar la potencia de 10
    float cientifico = 13e4;
    cout << cientifico << '\n';

    // CONSTANTES - solo-lectura
    const float PI = 3.14;  // Cualquier variable puede ser constante con "const"

    // Declaracion de multiples variables
    int x = 5, y = 6, z = 7;  
    cout << x + y + z << '\n';

    // Mismo valor a multiples variables
    bool one, two, three;
    one = two = three = true;  
    cout << one << two << three << '\n';  // true = 1, false = 0

    /* Se recomienda utilizar nombres descriptivos para las variables.
    * Pueden contener letras, digitos y guion bajo.
    * Deben comenzar con una letra o un guion bajo.
    * Los nombres son sensibles a mayusculas (MiVar es distinto a mivar).
    * No pueden contener espacios ni caracteres especiales.
    * No pueden ser nombres reservados de C++ (por ejemplo int).*/

    // ENTRADA
    float entrada = 0.0;
    cout << "Insertar un valor numerico: ";
    cin >> entrada;  // Utiliza el extractor >>
    cout << "El valor es: " << entrada << '\n';

    return 0;
}