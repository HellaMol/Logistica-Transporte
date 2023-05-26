
#include<iostream>
#include <string>

class Base{
    private:
        float lat;
        float lon;

    public:
        Base();
        Base(float la, float lo):lat(la), lon(lo){};

        float get_lat();
        float get_lon();

        void set_lat(float );
        void set_lon(float );
};

float Base::get_lat(){
    return lat;
}

float Base::get_lon(){
    return lon;
}

void Base::set_lat(float lat){
    lat = la;
}

void Base::set_lon(float lo){
    lon = lo;
}
