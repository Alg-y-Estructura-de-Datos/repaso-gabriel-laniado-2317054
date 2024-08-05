#include <iostream>
using namespace std;

void intercambiarJugos(float &jugoNaranja, float &jugoManzana){
    float aux;
    aux = jugoNaranja;
    jugoNaranja = jugoManzana;
    jugoManzana = aux;
}

int main() {

    float jugoNaranja, jugoManzana;

    do {
        cout << "Ingrese la cantidad de jugo de naranja: "<<endl;
        cin >> jugoNaranja;
    } while (jugoNaranja < 0);
    
    do {
        cout << "Ingrese la cantidad de jugo de manzana: "<<endl;
        cin >> jugoManzana;
    } while (jugoManzana < 0);

    intercambiarJugos(jugoNaranja, jugoManzana);

    cout << "La cantidad de jugo de naranja es: "<<jugoNaranja<<endl;
    cout << "La cantidad de jugo de manzana es: "<<jugoManzana<<endl;
    return 0;
}
