#include <iostream>
#include "factory/AircraftFactory.h"
#include "factory/BicycleFactory.h"
#include "factory/CarFactory.h"

int main() 
{
    VehicleFactory* VehicleFactory = new AircraftFactory();
    Vehicle* vehicle = VehicleFactory->CreateVehicle();

    VehicleFactory = new BicycleFactory();
    vehicle = VehicleFactory->CreateVehicle();

    VehicleFactory = new CarFactory();
    vehicle = VehicleFactory->CreateVehicle();

    delete vehicle;
    delete VehicleFactory;
    return 0;
}