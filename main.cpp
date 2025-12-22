#include <iostream>
#include "ParkingLot.h"
#include "VehicleFactory.h"

int main() {
    ParkingLot lot(2);

    auto car = VehicleFactory::createVehicle(
        VehicleType::CAR, "ABC-123", 10);

    auto moto = VehicleFactory::createVehicle(
        VehicleType::MOTORCYCLE, "XYZ-999", 11);

    lot.parkVehicle(car);
    lot.parkVehicle(moto);

    lot.removeVehicle("ABC-123", 14);

    return 0;
}
