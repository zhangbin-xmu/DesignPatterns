#include <iostream>
#include "VehicleFactoryNorth.h"
#include "../product/aircraft/AircraftHelicopter.h"
#include "../product/bicycle/BicycleMountain.h"
#include "../product/car/CarBus.h"

using namespace std;

VehicleFactoryNorth::VehicleFactoryNorth()
{
    cout << "Vehicle Factory North ..." << endl;
}

VehicleFactoryNorth::~VehicleFactoryNorth()
{
    cout << "~ Vehicle Factory North ..." << endl;
}

Aircraft* VehicleFactoryNorth::CreateAircraft()
{
    return new AircraftHelicopter();
}

Bicycle* VehicleFactoryNorth::CreateBicycle()
{
    return new BicycleMountain();
}

Car* VehicleFactoryNorth::CreateCar()
{
    return new CarBus();
}