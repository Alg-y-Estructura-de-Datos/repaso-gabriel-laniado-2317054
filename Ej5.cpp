#include <iostream>
using namespace std;

class calculadora {
    private:
        double a;
        double b;
    public:
        calculadora();
        calculadora(double, double);
        double sumar();
        double restar();
        double multiplicar();
        double dividir();
};

calculadora::calculadora(){
}

calculadora::calculadora(double _a, double _b){
    a = _a;
    b = _b;
}

double calculadora::sumar(){
    return (a+b);
}

double calculadora::restar(){
    return (a-b);
}

double calculadora::multiplicar(){
    return (a*b);
}

double calculadora::dividir(){
    /*if(b == 0){
        throw "No se puede dividir entre 0";
        return 0;
    } else {
        return (a/b);
    }*/
   try {
       if(b == 0){
           throw "No se puede dividir entre:";
       } else {
           return (a/b);
       }
    } catch (const char* e){
       cout<<e<<endl;
    }
   return 0;
}

int main(){
    double a, b;
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;

    calculadora c(a, b);

    cout<<"La suma de los numeros es: "<<c.sumar()<<endl;
    cout<<"La resta de los numeros es: "<<c.restar()<<endl;
    cout<<"La multiplicacion de los numeros es: "<<c.multiplicar()<<endl;
    cout<<"La division de los numeros es: "<<c.dividir()<<endl;

}