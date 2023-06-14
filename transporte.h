/*
 *
 * Proyecto Logistica de Transportes
 * Laura Helena Molina Jimenez
 * A01706282
 * 14/06/2023
 * Esta clase define al objeto tipo Transporte,
 * contiene las clases heredadas Terrestre, Maritimo y Aereo.
 */

#ifndef TRANSPORTE_H
#define TRANSPORTE_H

//Se incluyen bibliotecas para imprimir
#include<iostream>
#include <string>
#include <sstream>

//Se declara clase Transporte que es abstracta
class Transporte{

    //Se declaran atributos
    protected:
        std::string nombre;
        int num_trans;
        bool permiso;
        int vel_max;
        float cap_kg;
        int cap_pallets;
        int cap_cajas;

    //Se declaran metodos que tendra el objeto
    public:
        Transporte(){}
        Transporte(std::string nom, int num, bool per, int vel,\
        float ck, int cp, int cc): nombre(nom), num_trans(num),\
        permiso(per), vel_max(vel), cap_kg(ck), cap_pallets(cp),\
        cap_cajas(cc){};

        //Metodos abstractos que seran sobreescritos
        virtual std::string imprime_transportes()=0;
        virtual std::string imprime_disponibilidad()=0;

        //Metodos de acceso
        int get_vel_max();
        float get_cap_kg();
        int get_cap_pallets();
        int get_cap_cajas();
};

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

//Se declara clase Terrestre que hereda de Transporte
class Terrestre: public Transporte{

    //Se declara atributo de Terrestre
    private:
        bool edo_llantas;

    //Se declaran metodos de la clase
    public:
        Terrestre(){}
        Terrestre(std::string nom, int num, bool per, int vel,\
        float ck, int cp, int cc, bool edo):\
        Transporte(nom, num, per, vel, ck, cp, cc),\
        edo_llantas(edo){};

        //Metodos sobreescritos
        std::string imprime_transportes();
        std::string imprime_disponibilidad();
};

/**
 * imprime_disponibilidad imprime nombre de objeto Terrestre y
 *
 * si esta disponible en relacion al valor del atributo edo_llanta
 *
 * concatena el nombre y el texto en un string para imprimirse
 *
 * @param
 * @return string con los valores y texto unido
 */
std::string Terrestre::imprime_disponibilidad(){
    std::stringstream aux;
    if (edo_llantas == 0){
        aux << nombre << "\n"
        << "Esta disponible" << "\n";
        return aux.str();
    }
    else{
        aux << nombre << "\n"
        << "No esta disponible" << "\n";
        return aux.str();
    }
}

/**
 * imprime_transportes imprime a atributos de Terrestre.
 *
 * concatena los valores de los atributos
 * en un string para imprimirse
 *
 * @param
 * @return string con los valores y texto unido
 */
std::string Terrestre::imprime_transportes(){
    std::stringstream aux;
	aux << "Nombre: "<< nombre << "\n"
	<< "Numero: "<< num_trans << "\n"
	<< "Permiso: "<< permiso << "\n"
	<< "Velocidad maxima: "<< vel_max << "\n"
	<< "Capacidad de kg: "<< cap_kg << "\n"
	<< "Capacidad de pallets: "<< cap_pallets << "\n"
	<< "Capacidad de cajas: "<< cap_cajas << "\n"
	<< "Estado de las llantas: "<< edo_llantas << "\n";
	return aux.str();
}

//Se declara clase Maritimo que hereda de Transporte
class Maritimo: public Transporte{

    //Se declaran atributos de Maritimo
    private:
        std::string clima_mar;
        std::string marea;

    //Se declaran metodos de la clase
    public:
        Maritimo(){}
        Maritimo(std::string nom, int num, bool per, int vel,\
        float ck, int cp, int cc,\
        std::string clmar, std::string mar):Transporte(nom,\
        num, per, vel, ck, cp, cc){
            clima_mar = clmar;
            marea = mar;
        }

        //Metodos sobreescritos
        std::string imprime_transportes();
        std::string imprime_disponibilidad();
};

/**
 * imprime_disponibilidad imprime nombre de objeto Maritimo y
 *
 * si esta disponible en relacion a los valores de los atributos
 *
 * clima_mar y marea
 *
 * concatena el nombre y el texto en un string para imprimirse
 *
 * @param
 * @return string con los valores y texto unido
 */
std::string Maritimo::imprime_disponibilidad(){
    std::stringstream aux;
    if (clima_mar == "Despejado" && marea == "Baja"){
        aux << nombre << "\n"
        << "Esta disponible" << "\n";
        return aux.str();
    }
    else{
        aux << nombre << "\n"
        << "No esta disponible" << "\n";
        return aux.str();
    }
}

/**
 * imprime_transportes imprime a atributos de Maritimo.
 *
 * concatena los valores de los atributos en un
 * string para imprimirse
 *
 * @param
 * @return string con los valores y texto unido
 */
std::string Maritimo::imprime_transportes(){
    std::stringstream aux;
	aux << "Nombre: "<< nombre << "\n"
	<< "Numero: "<< num_trans << "\n"
	<< "Permiso: "<< permiso << "\n"
	<< "Velocidad maxima: "<< vel_max << "\n"
	<< "Capacidad de kg: "<< cap_kg << "\n"
	<< "Capacidad de pallets: "<< cap_pallets << "\n"
	<< "Capacidad de cajas: "<< cap_cajas << "\n"
    << "Clima en el mar: "<< clima_mar << "\n"
	<< "Marea: "<< marea << "\n";
	return aux.str();
}

//Se declara clase Aereo que hereda de Transporte
class Aereo: public Transporte{

    //Se declaran atributos de Aereo
    private:
        std::string clima_cielo;
        std::string fase_vuelo;

    //Se declaran metodos de la clase
    public:
        Aereo(){}
        Aereo(std::string nom, int num, bool per, int vel,\
        float ck, int cp, int cc,\
        std::string clcie, std::string fv): Transporte(nom,\
        num, per, vel, ck, cp, cc){
            clima_cielo = clcie;
            fase_vuelo = fv;
        }

        //Metodos sobreescritos
        std::string imprime_transportes();
        std::string imprime_disponibilidad();
};

/**
 * imprime_disponibilidad imprime nombre de objeto Aereo y
 *
 * si esta disponible en relacion a los valores de los atributos
 *
 * clima_cielo y fase_vuelo
 *
 * concatena el nombre y el texto en un string para imprimirse
 *
 * @param
 * @return string con los valores y texto unido
 */
std::string Aereo::imprime_disponibilidad(){
    std::stringstream aux;
    if (clima_cielo == "Despejado" && fase_vuelo == "Tierra"){
        aux << nombre << "\n"
        << "Esta disponible" << "\n";
        return aux.str();
    }
    else{
        aux << nombre << "\n"
        << "No esta disponible" << "\n";
        return aux.str();
    }
}

/**
 * imprime_transportes imprime a atributos de Aereo.
 *
 * concatena los valores de los atributos
 * en un string para imprimirse
 *
 * @param
 * @return string con los valores y texto unido
 */
std::string Aereo::imprime_transportes(){
    std::stringstream aux;
    aux << "Nombre: "<< nombre << "\n"
	<< "Numero: "<< num_trans << "\n"
	<< "Permiso: "<< permiso << "\n"
	<< "Velocidad maxima: "<< vel_max << "\n"
	<< "Capacidad de kg: "<< cap_kg << "\n"
	<< "Capacidad de pallets: "<< cap_pallets << "\n"
	<< "Capacidad de cajas: "<< cap_cajas << "\n"
    << "Clima en el cielo: "<< clima_cielo << "\n"
	<< "Fase del vuelo: "<< fase_vuelo << "\n";

	return aux.str();
}

#endif //TRANSPORTE_H
