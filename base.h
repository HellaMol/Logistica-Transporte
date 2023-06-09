#ifndef BASE_H
#define BASE_H
#include"transporte.h"
#include<iostream>
#include<string>
#include<sstream>

class Base{
    private:
        Transporte * trans[20];
        int contador;

    public:
        Base(){}
        void mostrar_transportes();
        void crear_transportes();
};

void Base::mostrar_transportes() {
    for (int i = 0; i < contador; i ++){
        std::cout<< trans[i]->imprime_transportes();
    }
}

void Base::crear_transportes(){
    trans[contador] = new Terrestre("Box Truck", 001, 0, 100, 4600.00, 12, 40, 1);
    contador++;
    trans[contador] = new Terrestre("Hazmat Truck", 002, 1, 110, 4600.00, 12, 40, 1);
    contador++;
    trans[contador] = new Maritimo("Container Ship", 003, 1, 50, 50000.00, 30, 150, "Despejado", "Alta");
    contador++;
    trans[contador] = new Aereo("Boeing 777-200", 004, 0, 50, 18000.00, 6, 30, "Despejado", "Aire");
    contador++;
    trans[contador]= new Aereo("Airbus 320", 005, 1, 50, 1500.00, 4, 20, "Despejado", "Tierra");
    contador++;
}

#endif
