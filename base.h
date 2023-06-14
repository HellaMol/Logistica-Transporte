/*
 *
 * Proyecto Logistica de Transportes
 * Laura Helena Molina Jimenez
 * A01706282
 * 14/06/2023
 * Esta clase define al objeto tipo Base, la cual contiene
 * los metodos respectivos para mostrar los transportes
 * con sus respectivos atributos y su disponibilidad.
 * Asimismo contiene metodos para filtrar por atributo.
 */

#ifndef BASE_H
#define BASE_H

//Se incluyen bibliotecas para imprimir
#include<iostream>
#include<string>
#include<sstream>

//Se incluye archivo de clase Transporte
#include "transporte.h"

//Se declara clase Base
class Base{

    //Se declaran atributos privados de Base
    private:
        //Se define como apuntador para usar polimorfismo
        Transporte * trans[20];
        int contador;

    //Se declaran metodos de la clase
    public:
        Base(): contador(0){} //Se define constructor por default
        void crear_transportes();
        void mostrar_transportes();
        void mostrar_transdis();
        void buscar_por(float cap_kg );
        void buscar_por(int vel_max );
        void buscar_porcp(int cap_pallets );
        void buscar_porcc(int cap_cajas );
};

/**
 * mostrar_transportes imprime transportes
 *
 * utiliza el arreglo trans[] y el contador, para recorrer el
 * arreglo imprimiendo cada objeto con sus atributos usando el
 * metodo imprime_transportes().
 *
 * @param
 * @return
 */
void Base::mostrar_transportes(){
    for (int i = 0; i < contador; i = i + 1){
        std::cout<< trans[i]->imprime_transportes();
    }
}

/**
 * mostrar_transdis imprime disponibilidad de transportes
 *
 * utiliza el arreglo trans[] y el contador, para recorrer el
 * arreglo imprimiendo el nombre de cada objeto y su
 * disponibilidad usando el metodo imprime_disponibilidad().
 *
 * @param
 * @return
 */
void Base::mostrar_transdis(){
    for (int i = 0; i < contador; i = i + 1){
        std::cout<< trans[i]->imprime_disponibilidad();
    }
}

/**
 * buscar_por imprime los transportes que entren en el rango
 * deseado de cap_kg.
 *
 * utiliza el arreglo trans[] y el contador, para recorrer el
 * arreglo imprimiendo cada objeto que tenga una cantidad
 * superior al float cap_kg.
 *
 *
 * @param float cap_kg
 * @return
 */
void Base::buscar_por(float cap_kg ){
    for (int i = 0; i < contador; i = i + 1){
        if(trans[i]->get_cap_kg() > cap_kg)
        std::cout<< trans[i]->imprime_transportes();
    }
}

/**
 * buscar_porcp imprime los transportes que entren en el rango
 * deseado de cap_pallets.
 *
 * utiliza el arreglo trans[] y el contador, para recorrer el
 * arreglo imprimiendo cada objeto que tenga una cantidad
 * superior al int cap_pallets
 *
 * @param int cap_pallets
 * @return
 */
void Base::buscar_porcp(int cap_pallets ){
    for (int i = 0; i < contador; i = i + 1){
        if(trans[i]->get_cap_pallets() > cap_pallets)
        std::cout<< trans[i]->imprime_transportes();
    }
}

/**
 * buscar_porcc imprime los transportes que entren en el rango
 * deseado de cap_cajas.
 *
 * utiliza el arreglo trans[] y el contador, para recorrer el
 * arreglo imprimiendo cada objeto que tenga una cantidad
 * superior al int cap_cajas
 *
 *
 * @param int cap_cajas
 * @return
 */
void Base::buscar_porcc(int cap_cajas ){
    for (int i = 0; i < contador; i = i+1){
        if(trans[i]->get_cap_cajas() > cap_cajas)
        std::cout<< trans[i]->imprime_transportes();
    }
}

/**
 * buscar_por imprime los transportes que entren en el rango
 * deseado de vel_max
 *
 * utiliza el arreglo trans[] y el contador, para recorrer el
 * arreglo imprimiendo cada objeto que tenga una cantidad
 * superior al int vel_max
 *
 * @param int vel_max
 * @return
 */
void Base::buscar_por(int vel_max ){
    for (int i = 0; i < contador; i = i+1){
        if(trans[i]->get_vel_max() > vel_max)
        std::cout<< trans[i]->imprime_transportes();
    }
}

/**
 * crea_transportes genera objetos en Transporte[]
 *
 * crea objetos tipo Terrestre, Maritimo y Aereo y los
 * guarda en atributo trans[] (lista de transportes)
 * para registrar los transportes de la empresa.
 *
 * @param
 * @return
 */
void Base::crear_transportes(){
    trans[contador] = new Terrestre("Box Truck", 001, 0, 100,\
    4600.00, 12, 40, 0);
    contador++;
    trans[contador] = new Terrestre("Hazmat Truck", 002, 1,\
    110, 4600.00, 12, 40, 0);
    contador++;
    trans[contador] = new Maritimo("Container Ship", 003, 1,\
    50, 50000.00, 30, 150, "Despejado", "Alta");
    contador++;
    trans[contador] = new Aereo("Boeing 777-200", 004, 0,\
    50, 18000.00, 6, 30, "Despejado", "Aire");
    contador++;
    trans[contador]= new Aereo("Airbus 320", 005, 1, 50,\
    1500.00, 4, 20, "Despejado", "Tierra");
    contador++;
}

#endif //BASE_H
