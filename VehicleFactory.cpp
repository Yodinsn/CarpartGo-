#include "VehicleFactory.h"
#include "Car.h"
#include "Motorcycle.h"

std::shared_ptr<Vehicle>
VehicleFactory::createVehicle(VehicleType type,
                              const std::string& plate,
                              int entryHour) {
    switch (type) {
        case VehicleType::CAR:
            return std::make_shared<Car>(plate, entryHour);
        case VehicleType::MOTORCYCLE:
            return std::make_shared<Motorcycle>(plate, entryHour);
        default:
            return nullptr;
    }
}
