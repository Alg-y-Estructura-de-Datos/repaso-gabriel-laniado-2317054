#include <iostream>
using namespace std;

/*int main() {
    unsigned long long  numero, factorial=1;

    cout << "Ingrese el numero que quiere saber su factorial:" << endl;
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}*/

unsigned long long factorial(int numero){
    if(numero == 0){
        return 1;
    }else{
        return numero * factorial(numero-1);
    }
}  

int main(){
    int numero;
    cout<<"Ingrese el numero que quiere saber su factorial: ";
    cin>>numero;
    cout<<"El factorial de "<<numero<<" es: "<<factorial(numero)<<endl;
    return 0;
}