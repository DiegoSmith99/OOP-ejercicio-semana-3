#include "area.h"
#include <iostream>

using namespace std;

area::area(int tipo, int base, int techo, int altura, int diagonal_1, int diagonal_2){
    cout << "CREADO" << endl;
    this->tipo = tipo;
    this->base = base;
    this->techo = techo;
    this->altura = altura;
    this->diagonal_1 = diagonal_1;
    this->diagonal_2 = diagonal_2;
}

area::~area(){
    cout << "DESTRUIDO" << endl;
}

int area::tipo(){
    cout << "\nSelecciona una de las siguientes opciones segun la figura de la que se quiere obtener el area: \nTriangulo: 0\nCuadrado: 1\nRectangulo: 2\nTrapecio: 3\nRombo: 4\nTu opcion: ";
    cin >> this->tipo;
}

void area::datos(){
    if (this->tipo == 0){
        cout << "ingresa la base: ";
        cin >> this->base;
        cout << "ingresa la altura: ";
        cin >> this->altura;
    }
    else if (this->tipo == 1){
        cout << "ingresa la base: ";
        cin >> this->base;
    }
    else if (this->tipo == 2){
        cout << "ingresa la base: ";
        cin >> this->base;
        cout << "ingresa la altura: ";
        cin >> this->altura;
    }
    else if (this->tipo == 3){
        cout << "ingresa la base mayor: ";
        cin >> this->base;
        cout << "ingresa la base menor: ";
        cin >> this->techo;
        cout << "ingresa la altura: ";
        cin >> this->altura;
    }
    else if (this->tipo == 4){
        cout << "ingresa la diagonal mayor ";
        cin >> this->diagonal_1;
        cout >> "ingresa la diagonal menor: ";
        cin >> this->diagonal_2;
    }
}

int area::calculo_area(){
    if (tipo == 0){
        cout << "El area del Triangulo es: " << (this->base*this->altura)/2 << endl;
    }
    else if (tipo == 1){
        cout << "El area del Cuadrado es: " << this->base*this->base << endl;
    }
    else if (tipo == 2){
        cout << "El area del Rectangulo es: " << this->base*this->altura << endl;
    }
    else if (tipo == 3){
        cout << "El area del trapecio es: " << ((this->base+this->techo)*this->altura)/2
    }
    else if (tipo == 4){
        cout << "El area del rombo es: " << (this->diagonal_1*this->diagonal_2)/2
    }
}
