#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include "ParkingSpot.h"

class ParkingLot {
    std::vector<ParkingSpot> spots;

public:
    ParkingLot(int size);
    bool parkVehicle(std::shared_ptr<Vehicle> v);
    void removeVehicle(const std::string& plate, int exitHour);
};

#endif
