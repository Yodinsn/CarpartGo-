#include "Motorcycle.h"

Motorcycle::Motorcycle(std::string plate, int hour)
    : Vehicle(plate, hour,
              std::make_shared<MotorcycleFeeStrategy>()) {}

std::string Motorcycle::getType() const {
    return "Motorcycle";
}
