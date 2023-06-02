
#include<iostream>
#include <string>

class Base{
    private:
        float lat;
        float lon;
        Transporte * trans[20]

    public:
        Base();
        Base(float la, float lo):lat(la), lon(lo){};

        void mostrar_transportes();

        float get_lat();
        float get_lon();

        void set_lat(float la);
        void set_lon(float lo);
};

void Base::mostrar_transportes() {
  for (int i = 0; i < unidad; i = i + 1)
    std::cout << trans[i] -> imprime_transportes();
}

float Base::get_lat(){
    return lat;
}

float Base::get_lon(){
    return lon;
}

void Base::set_lat(float la){
    lat = la;
}

void Base::set_lon(float lo){
    lon = lo;
}
