#ifndef TRANSPORTE_H
#define TRANSPORTE_H

#include<iostream>
#include <string>
#include <sstream>

class Transporte{

    protected:
        std::string nombre;
        int num_trans;
        bool permiso;
        int vel_max;
        float cap_kg;
        int cap_pallets;
        int cap_cajas;

    public:
        Transporte(){}
        Transporte(std::string nom, int num, bool per, int vel,\
        float ck, int cp, int cc): nombre(nom), num_trans(num),\
        permiso(per), vel_max(vel), cap_kg(ck), cap_pallets(cp),\
        cap_cajas(cc){};

        virtual std::string imprime_transportes()=0;

        std::string get_nombre();
        int get_num_trans();
        bool get_permiso();
        int get_vel_max();
        float get_cap_kg();
        int get_cap_pallets();
        int get_cap_cajas();

        void set_nombre(std::string );
        void set_num_trans(int );
        void set_permiso(bool );
        void set_vel_max(int );
        void set_cap_kg(float );
        void set_cap_pallets(int );
        void set_cap_cajas(int );
};

std::string Transporte::get_nombre(){
    return nombre;
}

int Transporte::get_num_trans(){
    return num_trans;
}

bool Transporte::get_permiso(){
    return permiso;
}

int Transporte::get_vel_max(){
    return vel_max;
}

float Transporte::get_cap_kg(){
    return cap_kg;
}

int Transporte::get_cap_pallets(){
    return cap_pallets;
}

int Transporte::get_cap_cajas(){
    return cap_cajas;
}

void Transporte::set_nombre(std::string nom){
    nombre = nom;
}

void Transporte::set_num_trans(int num){
    num_trans = num;
}

void Transporte::set_permiso(bool per){
    permiso = per;
}

void Transporte::set_vel_max(int vel){
    vel_max = vel;
}

void Transporte::set_cap_kg(float ck){
    cap_kg = ck;
}

void Transporte::set_cap_pallets(int cp){
    cap_pallets = cp;
}

void Transporte::set_cap_cajas(int cc){
    cap_cajas = cc;
}

class Terrestre: public Transporte{
    private:
        bool edo_llantas;

    public:
        Terrestre(){}
        Terrestre(std::string nom, int num, bool per, int vel,\
        float ck, int cp, int cc, bool edo):\
        Transporte(nom, num, per, vel, ck, cp, cc),\
        edo_llantas(edo){};

        std::string imprime_transportes();
        std::string dar_edollanta(bool );

        bool get_edo_llantas();
        void set_edo_llantas(bool );

};

std::string Terrestre::imprime_transportes(){
    std::stringstream aux;
	aux << "nombre: "<< nombre << "\n"
	<< "numero: "<< num_trans << "\n"
	<< "permiso: "<< permiso << "\n"
	<< "velocidad maxima: "<< vel_max << "\n"
	<< "capacidad de kg: "<< cap_kg << "\n"
	<< "capacidad de pallets: "<< cap_pallets << "\n"
	<< "capacidad de cajas: "<< cap_cajas << "\n"
	<< "estado de las llantas: "<< edo_llantas << "\n";
	return aux.str();
}

bool Terrestre::get_edo_llantas(){
    return edo_llantas;
}

void Terrestre::set_edo_llantas(bool edo){
    edo_llantas = edo;
}

class Maritimo: public Transporte{
    private:
        std::string clima_mar;
        std::string marea;

    public:
        Maritimo(){}
        Maritimo(std::string nom, int num, bool per, int vel,\
        float ck, int cp, int cc,\
        std::string clmar, std::string mar):Transporte(nom,\
        num, per, vel, ck, cp, cc){
            clima_mar = clmar;
            marea = mar;
        }

        std::string imprime_transportes();

        std::string get_clima_mar();
        std::string get_marea();

        void set_clima_mar(std::string );
        void set_marea(std::string );
};

std::string Maritimo::imprime_transportes(){
    std::stringstream aux;
	aux << "nombre: "<< nombre << std::endl
	<< "numero: "<< num_trans << std::endl
	<< "permiso: "<< permiso << std::endl
	<< "velocidad maxima: "<< vel_max << std::endl
	<< "capacidad de kg: "<< cap_kg << std::endl
    << "capacidad de pallets: "<< cap_pallets << std::endl
	<< "capacidad de cajas: "<< cap_cajas << std::endl
    << "clima en el mar: "<< clima_mar << std::endl
	<< "marea: "<< marea << std::endl;
	return aux.str();
}

std::string Maritimo::get_clima_mar(){
    return clima_mar;
}

std::string Maritimo::get_marea(){
    return marea;
}

void Maritimo::set_clima_mar(std::string clmar){
    clima_mar = clmar;
}

void Maritimo::set_marea(std::string mar){
    marea = mar;
}

class Aereo: public Transporte{
    private:
        std::string clima_cielo;
        std::string fase_vuelo;

    public:
        Aereo(){}
        Aereo(std::string nom, int num, bool per, int vel,\
        float ck, int cp, int cc,\
        std::string clcie, std::string fv): Transporte(nom,\
        num, per, vel, ck, cp, cc){
            clima_cielo = clcie;
            fase_vuelo = fv;
        }

        std::string imprime_transportes();

        std::string get_clima_cielo();
        std::string get_fase_vuelo();

        void set_clima_cielo(std::string );
        void set_fase_vuelo(std::string );
};

std::string Aereo::imprime_transportes(){
    std::stringstream aux;
	aux << "nombre: "<< nombre << std::endl
	<< "numero: "<< num_trans << std::endl
	<< "permiso: "<< permiso << std::endl
	<< "velocidad maxima: "<< vel_max << std::endl
	<< "capacidad de kg: "<< cap_kg << std::endl
	<< "capacidad de pallets: "<< cap_pallets << std::endl
	<< "capacidad de cajas: "<< cap_cajas << std::endl
    << "clima en el cielo: "<< clima_cielo << std::endl
	<< "fase del vuelo: "<< fase_vuelo << std::endl;

	return aux.str();
}

std::string Aereo::get_clima_cielo(){
    return clima_cielo;
}

std::string Aereo::get_fase_vuelo(){
    return fase_vuelo;
}

void Aereo::set_clima_cielo(std::string clcie){
    clima_cielo = clcie;
}

void Aereo::set_fase_vuelo(std::string fv){
    fase_vuelo = fv;
}

#endif
