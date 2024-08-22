#include <iostream>
#include "Truck.h"
#include <string>

Truck::Truck(): code(0), name("") {}

Truck::Truck(int b_code, std::string b_name): code(b_code), name(b_name) {}

int Truck::get_brand_code() {
    return code;
}

std::string Truck::get_brand_name() {
    return name;
}

Truck::~Truck() {}