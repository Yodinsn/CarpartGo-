#ifndef VEHICLE_FACTORY_H
#define VEHICLE_FACTORY_H

#include <memory>
#include <string>
#include "Vehicle.h"

enum class VehicleType {
    CAR,
    MOTORCYCLE
};

class VehicleFactory {
public:
    static std::shared_ptr<Vehicle>
    createVehicle(VehicleType type,
                  const std::string& plate,
                  int entryHour);
};

#endif
