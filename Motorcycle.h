#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include <memory>

#include "Vehicle.h"

class Motorcycle : public Vehicle {
public:
    Motorcycle(std::string plate, int hour);
    std::string getType() const override;
};

#endif
