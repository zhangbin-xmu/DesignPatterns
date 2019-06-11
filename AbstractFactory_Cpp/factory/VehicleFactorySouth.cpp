#include <iostream>
#include "VehicleFactorySouth.h"
#include "../product/aircraft/AircraftJet.h"
#include "../product/bicycle/BicycleRoad.h"
#include "../product/car/CarTruck.h"

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
    return new AircraftJet();
}

Bicycle* VehicleFactorySouth::CreateBicycle()
{
    return new BicycleRoad();
}

Car* VehicleFactorySouth::CreateCar()
{
    return new CarTruck();
}