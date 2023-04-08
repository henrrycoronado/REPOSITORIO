#include <iostream>
using namespace std;

int main() {
    int decimal, cociente, resto, binario = 0, digito = 1;

    cout << "Ingresa un número decimal: ";
    cin >> decimal;

    cociente = decimal;

    while (cociente != 0) {
        resto = cociente % 2;
        cociente = cociente / 2;
        binario = binario+(resto * digito);
        digito = digito * 10;
    }

    cout << "El número " << decimal << " en binario es: " << binario << endl;

    return 0;
}
