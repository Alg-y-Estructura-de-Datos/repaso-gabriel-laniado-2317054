#include <iostream>
using namespace std;

void marcarAsiento(bool *p1){
    *p1 = true;
}

int main() {
    bool asientos[10] = {false, false, false, false, false, false, false, false, false, false};
    int asiento;

    cout << "Ingrese el numero de asiento que desea marcar: ";
    cin >> asiento;

    cout<< "Estado de los asientos: "<<endl;
    for (int i = 0; i < 10; i++) {
        cout << "Asiento " << i << ": ";
        if (asientos[i]) {
            cout << "Ocupado" << endl;
        } else {
            cout << "Libre" << endl;
        }
    }

    marcarAsiento(&asientos[asiento]);

    cout<< "Estado de los asientos: "<<endl;
    for (int i = 0; i < 10; i++) {
        cout << "Asiento " << i << ": ";
        if (asientos[i]) {
            cout << "Ocupado" << endl;
        } else {
            cout << "Libre" << endl;
        }
    }
    return 0;
}
