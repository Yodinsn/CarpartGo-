#include "ParkingSpot.h"

ParkingSpot::ParkingSpot(int id)
    : id(id), vehicle(nullptr) {}

bool ParkingSpot::isAvailable() const {
    return vehicle == nullptr;
}

void ParkingSpot::park(std::shared_ptr<Vehicle> v) {
    vehicle = v;
}

std::shared_ptr<Vehicle> ParkingSpot::leave() {
    auto temp = vehicle;
    vehicle = nullptr;
    return temp;
}

int ParkingSpot::getId() const {
    return id;
}

