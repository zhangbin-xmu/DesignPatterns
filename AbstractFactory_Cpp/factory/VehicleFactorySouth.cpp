#include <iostream>
#include "VehicleFactorySouth.h"
#include "../product/aircraft/AircraftHelicopter.h"
#include "../product/bicycle/BicycleMountain.h"
#include "../product/car/CarBus.h"

using namespace std;

VehicleFactorySouth::VehicleFactorySouth()
{
    cout << "Vehicle Factory South ..." << endl;
}

VehicleFactorySouth::~VehicleFactorySouth()
{
    cout << "~ Vehicle Factory South ..." << endl;
}

Aircraft* VehicleFactorySouth::CreateAircraft()
{
    return new AircraftHelicopter();
}

Bicycle* VehicleFactorySouth::CreateBicycle()
{
    return new BicycleMountain();
}

Car* VehicleFactorySouth::CreateCar()
{
    return new CarBus();
}