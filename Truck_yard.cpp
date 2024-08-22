#include <iostream>
#include "Truck.h"
#include "Truck_yard.h"
#include <unordered_map>

Truck_yard::Truck_yard(): capacity(0) {
    num_of_trucks = 0;
    trucks = nullptr;
}  // default constructor for yard with zero capacity

Truck_yard::Truck_yard(int capacity): capacity(capacity) {
    num_of_trucks = 0;
    trucks = new Truck[capacity];
} // constructor for yard that can hold "capacity" trucks

int Truck_yard::get_total_stock_count(){
    return num_of_trucks;
} // returns count of the current number of trucks in yard

int Truck_yard::get_stock_count(int code) {
    return codes[code];
}  // returns count of the number of trucks with brand code equal to "code"

Truck* Truck_yard::get_current_stock_list() {
    return trucks;
}  // returns an array containing all the trucks in the yard

bool Truck_yard::addStock(Truck c) {
    if (num_of_trucks == capacity) return false;
    trucks[num_of_trucks++] = c;
    codes[c.get_brand_code()]++;
    return true;
}  // tries to add a truck to yard. If there is enough space, return true
                         // and adds truck to the yard. Otherwise, do not save truck, and return false. 

Truck_yard::~Truck_yard() {
    if (trucks) delete[] trucks;
}  // destructor