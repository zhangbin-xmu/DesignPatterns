#include <iostream>
#include "VehicleFactoryNorth.h"
#include "../product/aircraft/AircraftJet.h"
#include "../product/bicycle/BicycleRoad.h"
#include "../product/car/CarTruck.h"

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
    return new AircraftJet();
}

Bicycle* VehicleFactoryNorth::CreateBicycle()
{
    return new BicycleRoad();
}

Car* VehicleFactoryNorth::CreateCar()
{
    return new CarTruck();
}