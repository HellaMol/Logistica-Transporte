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
        void buscar_por(float cap_kg );
        void buscar_por(int vel_max );
        void buscar_porcp(int cap_pallets );
        void buscar_porcc(int cap_cajas );
};

void Base::mostrar_transportes(){
    for (int i = 0; i < contador; i = i + 1){
        std::cout<< trans[i]->imprime_transportes();
    }
}

void Base::buscar_por(float cap_kg ){
    for (int i = 0; i < contador; i = i + 1){
        if(trans[i]->get_cap_kg() > cap_kg)
        std::cout<< trans[i]->imprime_transportes();
    }
}

void Base::buscar_porcp(int cap_pallets ){
    for (int i = 0; i < contador; i = i + 1){
        if(trans[i]->get_cap_pallets() > cap_pallets)
        std::cout<< trans[i]->imprime_transportes();
    }
}

void Base::buscar_porcc(int cap_cajas ){
    for (int i = 0; i < contador; i = i+1){
        if(trans[i]->get_cap_cajas() > cap_cajas)
        std::cout<< trans[i]->imprime_transportes();
    }
}

void Base::buscar_por(int vel_max ){
    for (int i = 0; i < contador; i = i+1){
        if(trans[i]->get_vel_max() > vel_max)
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
