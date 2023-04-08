#include <iostream>
#include <string>

using namespace std;

int main() {
    int numero, copia, reversed = 0;
    cout << "Ingrese un n�mero entero: ";
    cin >> numero;

    copia = numero;

    // invertimos el n�mero
    while (copia > 0) {
        reversed = reversed * 10 + copia % 10;
        copia /= 10;
    }

    if (numero == reversed) {
        cout << numero << " es un pal�ndromo" << endl;
    } else {
        cout << numero << " no es un pal�ndromo" << endl;
    }

    return 0;
}
