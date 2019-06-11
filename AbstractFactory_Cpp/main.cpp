#include <iostream>
#include "factory/VehicleFactoryNorth.h"
#include "factory/VehicleFactorySouth.h"

int main() 
{
    VehicleFactory* vehicleFactory = new VehicleFactoryNorth();
    Aircraft* aircraft = vehicleFactory->CreateAircraft();
    Bicycle* bicycle = vehicleFactory->CreateBicycle();
    Car* car = vehicleFactory->CreateCar();

    vehicleFactory = new VehicleFactorySouth();
    aircraft = vehicleFactory->CreateAircraft();
    bicycle = vehicleFactory->CreateBicycle();
    car = vehicleFactory->CreateCar();

    delete aircraft;
    delete bicycle;
    delete car;
    delete vehicleFactory;
    return 0;
}