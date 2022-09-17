#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class EcuacionCuadratica{
private://atributos
    int a;
    int b;
    int c;
public://metodos
    EcuacionCuadratica(int,int,int);
    float obtenerDiscriminante();
    float getRaiz1();
    float getRaiz2();
    void mostrarResultado();

};
// constructor
EcuacionCuadratica::EcuacionCuadratica(int _a, int _b, int _c) {
    a=_a;
    b=_b;
    c=_c;
}

float EcuacionCuadratica::obtenerDiscriminante() {
    float x = (b*b) - (4*a*c);

    return x;
}

float EcuacionCuadratica::getRaiz1() {
    float raiz1;
    float discrimante=obtenerDiscriminante();
    if (discrimante < 0){


        raiz1=0;

    }else{
        // Aplicamos la formula
       float x1 = (-b + sqrt(discrimante)) / (2*a);

        return raiz1=x1;
    }
}

float EcuacionCuadratica::getRaiz2() {
    float raiz2;
    float discrimante=obtenerDiscriminante();
    if (discrimante < 0){


        raiz2=0;

    }else{

        float x2 = (-b + sqrt(discrimante)) / (2*a);

        return raiz2=x2;
    }
}

void EcuacionCuadratica::mostrarResultado() {

    float discrimante=obtenerDiscriminante();
    if (discrimante < 0){

        cout<<"La ecuacion no tiene raices reales"<<endl;

    }
    if(discrimante>0){
        // Aplicamos la formula
        float x1 = (-b + sqrt(discrimante)) / (2*a);
        float x2 = (-b - sqrt(discrimante)) / (2*a);

        cout<<"discrimante"<<discrimante<<endl;
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;

    }
    if(discrimante==0){
        // Aplicamos la formula
        float x1 = (-b + sqrt(discrimante)) / (2*a);

        cout<<"discrimante: "<<discrimante<<endl;
        cout<<" raiz es  = "<<x1<<endl;


    }


}

int main() {

    float a, b, c, x1, x2;

    cout<<"Ingresa el valor de a: ";
    cin>>a;

    cout<<"Ingresa el valor de b: ";
    cin>>b;

    cout<<"Ingresa el valor de c: ";
    cin>>c;

    EcuacionCuadratica ecu1=EcuacionCuadratica(a,b,c);
    ecu1.obtenerDiscriminante();
    ecu1.getRaiz1();
    ecu1.getRaiz2();
    ecu1.mostrarResultado();


    return 0;
}
