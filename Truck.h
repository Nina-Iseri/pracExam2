#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <string>

class Truck {
private:
    int code;
    std::string name;

public:
    Truck();
    Truck(int b_code, std::string b_name);
    std::string get_brand_name();
    int get_brand_code();
    ~Truck();
};

#endif
