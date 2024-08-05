#include <iostream>
using namespace std;


void sumarEnteros(int a, int b){
    cout<<"La suma de los numeros es: "<<a+b<<endl;
}

void calcularAreaCirculo(int radio){
    cout<<"El area del circulo es: "<<3.1416*radio*radio<<endl;
}

void calcularPotencia(int numero, int potencia){
    int resultado = 1;
    for(int i = 0; i < potencia; i++){
        resultado *= numero;
    }
    cout<<"El resultado de elevar "<<numero<<" a la potencia "<<potencia<<" es: "<<resultado<<endl;
}

int main(){
    int opcion;
    do{
        cout<<"Menu"<<endl;
        cout<<"1. Sumar dos numeros enteros"<<endl;
        cout<<"2. Calcular el area de un circulo"<<endl;
        cout<<"3. Calcular la potencia de un numero"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingrese la opcion que desea realizar: ";
        cin>>opcion;
        switch(opcion){
            case 1:
                int a, b;
                cout<<"Ingrese el primer numero: ";
                cin>>a;
                cout<<"Ingrese el segundo numero: ";
                cin>>b;
                sumarEnteros(a,b);
                break;
            case 2:
                int radio;
                cout<<"Ingrese el radio del circulo: ";
                cin>>radio;
                calcularAreaCirculo(radio);
                break;
            case 3:
                int numero, potencia;
                cout<<"Ingrese el numero: ";
                cin>>numero;
                cout<<"Ingrese la potencia: ";
                cin>>potencia;

                calcularPotencia(numero, potencia);
                break;
            case 4:
                cout<<"Saliendo..."<<endl;
                break;
            default:
                cout<<"Opcion invalida"<<endl;
        }
    }while(opcion != 4);
}