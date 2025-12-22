#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <memory>
#include "FeeStrategy.h"

class Vehicle {
protected:
    std::string plateNumber;
    int entryHour;
    std::shared_ptr<FeeStrategy> feeStrategy;

public:
    Vehicle(std::string plate, int hour,
            std::shared_ptr<FeeStrategy> strategy);

    virtual std::string getType() const = 0;
    double calculateFee(int exitHour) const;
    std::string getPlate() const;

    virtual ~Vehicle() {}
};

#endif
