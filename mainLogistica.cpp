#include <iostream>
#include <string>
#include "transporte.h"
#include "carga.h"
#include "base.h"

int main(){

    std::string opcion;
    Base base;
    Transporte * trans[20];

    Transporte trans[0] = new Terrestre("Box Truck", 001, 0, 100, 20.613, -100.405, 4600.00, 12, 40, 1);
    Transporte trans[1] = new Terrestre("Hazmat Truck", 002, 1, 110, 20.613, -100.405, 4600.00, 12, 40, 1);
    Transporte trans[2] = new Maritimo("Container Ship", 003, 1, 50, 20.613, -100.405, 50000.00, 30, 150, "Despejado", "Alta");
    Transporte trans[3] = new Aereo("Boeing 777-200", 004, 0, 50, 20.613, -100.405, 18000.00, 6, 30, "Despejado", "Aire");
    Transporte trans[4] = new Aereo("Airbus 320", 005, 1, 50, 20.613, -100.405, 1500.00, 4, 20, "Despejado", "Tierra");

    std::cout << "Bienvenidx al programa de Logistica de Transportes"<< std::endl;
    std::cout << "En este programa podras manejar la losgistica de "<<\
    "los transportes de la empresa "<< std::endl;
    std::cout << "Selecciona una opción:"<< std::endl;
    std::cout << "1. Crear carga a transportar."<< std::endl;
    std::cout << "2. Buscar transporte."<< std::endl;
    std::cout << "3. Mostrar ubicacion del transporte."<< std::endl;
    std::cout << "4. Mostrar distancia entre el transporte y la base."<< std::endl;
    std::cout << "5. Mostrar disponibilidad del transporte."<< std::endl;
    std::cout << "6. Mostrar transportes de la empresa."<< std::endl;
    std::cout << "7. Salir del programa,"<< std::endl;

    std::cin >> opcion;

    while (opcion != "1" && opcion != "2" && opcion != "3" && opcion != "4"\
            && opcion != "5" && opcion != "6" && opcion != "7"){

        std::cout << "Selecciona una respuesta valida: 1,2,3,4,5,6 o 7"<< std::endl;
        std::cin >> opcion;
    }

    if (opcion == "1"){
        std::cout << "Crea carga"<< std::endl;
    }
    else if (opcion == "2"){
        std::cout << "Buscar transporte"<< std::endl;
    }
    else if (opcion == "3"){
        std::cout << "Ubicacion: "<< std::endl;
    }
    else if (opcion == "4"){
        std::cout << "Distancia: "<< std::endl;
    }
    else if (opcion == "5"){
        std::cout << "Disponibilidad: "<< std::endl;
    }
    else if (opcion == "6"){
        std::cout << "Transportes: "<<\
        base.mostrar_transportes()<< std::endl;
    }
    else if (opcion == "7"){
        std::cout << "Gracias por usar el programa."<< std::endl;
    }

};
