#include <iostream>
#include "Truck.h"
#include "Truck_yard.h"
#include <string>

int main(void) {
    Truck init = Truck();
    Truck truck_1 = Truck(1, "V");
    Truck truck_2 = Truck(1, "B");
    Truck truck_3 = Truck(2, "V");
    Truck truck_4 = Truck(2, "B");

    Truck_yard empty_yard = Truck_yard();
    std::cout << ("Default: number of trucks = ") << empty_yard.get_total_stock_count() << std::endl;
    
    Truck_yard my_yard = Truck_yard(4);
    if (my_yard.addStock(init)) {
        std::cout << "init added" << std::endl;
    } else {
        std::cout << "init add error" << std::endl;
    }
    if (my_yard.addStock(truck_1)) {
        std::cout << "truck 1 added" << std::endl;
    } else {
        std::cout << "truck 1 add error" << std::endl;
    }
    if (my_yard.addStock(truck_2)) {
        std::cout << "truck 2 added" << std::endl;
    } else {
        std::cout << "truck 2 add error" << std::endl;
    }
    if (my_yard.addStock(truck_3)) {
        std::cout << "truck 3 added" << std::endl;
    } else {
        std::cout << "truck 3 add error" << std::endl;
    }
    if (my_yard.addStock(truck_4)) {
        std::cout << "truck 4 added" << std::endl;
    } else {
        std::cout << "truck 4 add error" << std::endl;
    }
    std::cout << my_yard.get_total_stock_count() << " trucks in my yard" << std::endl;
    std::cout << "my second added truck is " << my_yard.get_current_stock_list()[1].get_brand_name() << std::endl;
    std::cout << "I have " << my_yard.get_stock_count(1) << " trucks with code 1" << std::endl;


    return 0;
}