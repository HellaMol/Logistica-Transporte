#include <iostream>
#include <string>
#include<sstream>
#include "transporte.h"
#include "carga.h"
#include "base.h"

int main(){

    std::string opcion;
    Base base;

    base.crear_transportes();
    std::cout << "Bienvenidx al programa de Logistica de Transportes"<< std::endl;
    std::cout << "En este programa podras manejar la losgistica de "<<\
    "los transportes de la empresa "<< std::endl;
    std::cout << "Selecciona una opción:"<< std::endl;
    std::cout << "1. Buscar transporte por capacidad."<< std::endl;
    std::cout << "2. Buscar  transporte por velocidad."<< std::endl;
    std::cout << "3. Mostrar disponibilidad del transporte."<< std::endl;
    std::cout << "4. Mostrar transportes de la empresa."<< std::endl;
    std::cout << "5. Salir del programa,"<< std::endl;

    std::cin >> opcion;

    while (opcion != "1" && opcion != "2" && opcion != "3" && opcion != "4"\
            && opcion != "5"){

        std::cout << "Selecciona una respuesta valida: 1,2,3,4 o 5"<< std::endl;

        std::cin >> opcion;
    }

        if (opcion == "1"){
            std::cout << "Buscar transporte por capacidad"<< std::endl;
        }
        else if (opcion == "2"){
            std::cout << "Buscar transporte por velocidad"<< std::endl;
        }
        else if (opcion == "3"){
            std::cout << "Disponibilidad: "<< std::endl;
        }
        else if (opcion == "4"){
            std::cout << "Transportes: "<<std::endl;
            base.mostrar_transportes();
        }
        else if (opcion == "5"){
            std::cout << "Gracias por usar el programa."<< std::endl;
        }
};
