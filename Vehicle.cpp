#include "Vehicle.h"

Vehicle::Vehicle(std::string plate, int hour,
                 std::shared_ptr<FeeStrategy> strategy)
    : plateNumber(plate), entryHour(hour), feeStrategy(strategy) {}

double Vehicle::calculateFee(int exitHour) const {
    return feeStrategy->calculateFee(exitHour - entryHour);
}

std::string Vehicle::getPlate() const {
    return plateNumber;
}
