/*
 *
 * Proyecto Logistica de Transportes
 * Laura Helena Molina Jimenez
 * A01706282
 * 14/06/2023
 *
 * Este proyecto para la clase de Progrmación Orientado a Objetos
 * tiene por objetivo facilitar la visualizacion de los transportes
 * de una empresa ficticia. Permite filtrar los transportes por
 * ciertos atributos, ver la disponibilidad y mostrar todos los
 * transportes registrados con sus respectivos atributos.
 */

//Se incluyen bibliotecas para imprimir
#include <iostream>
#include <string>
#include<sstream>

//Se incluyen archivos header
#include "transporte.h"
#include "base.h"

int main(){

    std::string opcion;
    float filtro_kg;
    int filtro;
    int disp;
    Base base;

    base.crear_transportes();
    std::cout << "Bienvenidx al programa de Logistica de Transportes"<< std::endl;
    std::cout << "En este programa podras manejar la losgistica de "<<\
    "los transportes de la empresa "<< std::endl;

        while (opcion != "7"){
            std::cout << "Selecciona una opcion:"<< std::endl;
            std::cout << "1. Buscar transporte por capacidad de kg."<< std::endl;
            std::cout << "2. Buscar transporte por capacidad de pallets."<< std::endl;
            std::cout << "3. Buscar transporte por capacidad de cajas."<< std::endl;
            std::cout << "4. Buscar  transporte por velocidad."<< std::endl;
            std::cout << "5. Mostrar disponibilidad del transporte."<< std::endl;
            std::cout << "6. Mostrar transportes de la empresa."<< std::endl;
            std::cout << "7. Salir del programa."<< std::endl;

            std::cin >> opcion;
            while (opcion != "1" && opcion != "2" && opcion != "3" && opcion != "4"\
            && opcion != "5" && opcion != "6" && opcion != "7"){

                std::cout << "Selecciona una respuesta valida: 1,2,3,4,5,6 o 7"<< std::endl;

                std::cin >> opcion;
            }
            if (opcion == "1"){
                std::cout << "Buscar transporte por capacidad de kg:"<< std::endl;
                std::cin >> filtro_kg;
                base.buscar_por(filtro_kg);
            }
            else if (opcion == "2"){
                std::cout << "Buscar transporte por capacidad de pallets:"<< std::endl;
                std::cin >> filtro;
                base.buscar_porcp(filtro);
            }
            else if (opcion == "3"){
                std::cout << "Buscar transporte por capacidad de cajas:"<< std::endl;
                std::cin >> filtro;
                base.buscar_porcc(filtro);
            }
            else if (opcion == "4"){
                std::cout << "Buscar transporte por velocidad:"<< std::endl;
                std::cin >> filtro;
                base.buscar_por(filtro);
            }
            else if (opcion == "5"){
                std::cout << "Disponibilidad: "<< std::endl;
                base.mostrar_transdis();
            }
            else if (opcion == "6"){
                std::cout << "Transportes: "<<std::endl;
                base.mostrar_transportes();
            }
            else if (opcion == "7"){
                std::cout << "Gracias por usar el programa."<< std::endl;
                return 0;
            }
        }
};
