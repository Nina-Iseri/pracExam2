#include <iostream>
#include <string>
#include "Truck.h"

int main(void) {
    Truck init = Truck();
    Truck my_truck = Truck(1, "Charles");
    std::cout << "(Default) name: " << init.get_brand_name() << " code: " << init.get_brand_code() << std::endl;
    std::cout << "(my truck) name: " << my_truck.get_brand_name() << " code: " << my_truck.get_brand_code() << std::endl;
    return 0;
}