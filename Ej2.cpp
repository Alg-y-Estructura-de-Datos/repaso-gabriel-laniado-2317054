#include <iostream>
using namespace std;

int main() {
    unsigned long long  numero, factorial=1;

    cout << "Ingrese el numero que quiere saber su factorial:" << endl;
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}
