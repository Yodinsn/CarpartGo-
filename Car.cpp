#include "Car.h"

Car::Car(std::string plate, int hour)
    : Vehicle(plate, hour,
              std::make_shared<HourlyFeeStrategy>()) {}

std::string Car::getType() const {
    return "Car";
}
