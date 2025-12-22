#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(std::string plate, int hour);
    std::string getType() const override;
};

#endif
