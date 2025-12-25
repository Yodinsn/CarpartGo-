#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int size) {
    for (int i = 1; i <= size; ++i) {
        spots.emplace_back(i);
    }
}

bool ParkingLot::parkVehicle(std::shared_ptr<Vehicle> v) {
    for (auto& spot : spots) {
        if (spot.isAvailable()) {
            spot.park(v);
            std::cout << "Vehicle parked.\n";
            return true;
        }
    }
    return false;
}

void ParkingLot::removeVehicle(const std::string& plate, int exitHour) {
    for (auto& spot : spots) {
        if (!spot.isAvailable()) {
            auto v = spot.leave();
            if (v->getPlate() == plate) {
                std::cout << "Fee: "
                          << v->calculateFee(exitHour)
                          << std::endl;
                return;
            }
        }
    }
}

