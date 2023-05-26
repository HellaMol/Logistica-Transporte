
#include<iostream>
#include <string>

class Carga{

    private:
        bool hazmat;
        float peso_kg;
        int pallets;
        int cajas;

    public:
        Carga();
        Carga(bool haz, float pk, int pal, int ca):\
        hazmat(haz), peso_kg(pk), pallets(pal), cajas(ca){};

        bool get_hazmat();
        float get_peso_kg();
        int get_pallets();
        int get_cajas();

        void set_hazmat(bool );
        void set_peso_kg(float );
        void set_pallets(int );
        void set_cajas(int );
};

bool Carga::get_hazmat(){
    return hazmat;
}

float Carga::get_peso_kg(){
    return peso_kg;
}

int Carga::get_pallets(){
    return pallets;
}

int Carga::get_cajas(){
    return cajas;
}

void Carga::set_hazmat(bool haz){
    hazmat = haz;
}

void Carga::set_peso_kg(float pk){
    peso_kg = pk;
}

void Carga::set_pallets(int pal){
    pallets = pal;
}

void Carga::set_cajas(int ca){
    cajas = ca;
}
