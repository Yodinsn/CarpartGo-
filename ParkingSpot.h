#ifndef PARKINGSPOT_H
#define PARKINGSPOT_H

#include <memory>
#include "Vehicle.h"

class ParkingSpot {
    int id;
    std::shared_ptr<Vehicle> vehicle;

public:
    ParkingSpot(int id);
    bool isAvailable() const;
    void park(std::shared_ptr<Vehicle> v);
    std::shared_ptr<Vehicle> leave();
    int getId() const;
};

#endif
