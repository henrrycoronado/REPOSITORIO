#include <iostream>
#include <string>

using namespace std;

int main() {
    int numero, copia, reversed = 0;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    copia = numero;

    // invertimos el número
    while (copia > 0) {
        reversed = reversed * 10 + copia % 10;
        copia /= 10;
    }

    if (numero == reversed) {
        cout << numero << " es un palíndromo" << endl;
    } else {
        cout << numero << " no es un palíndromo" << endl;
    }

    return 0;
}
