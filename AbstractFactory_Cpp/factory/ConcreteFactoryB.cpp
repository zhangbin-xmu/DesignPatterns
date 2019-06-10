#include <iostream>
#include "ConcreteFactoryB.h"
#include "../product/AircraftHelicopter.h"
#include "../product/BicycleMountain.h"

using namespace std;

ConcreteFactoryB::ConcreteFactoryB()
{
    cout << "Concrete Factory B ..." << endl;
}

ConcreteFactoryB::~ConcreteFactoryB()
{
    cout << "~ Concrete Factory B ..." << endl;
}

Aircraft* ConcreteFactoryB::CreateAircraft()
{
    return new AircraftHelicopter();
}

Bicycle* ConcreteFactoryB::CreateBicycle()
{
    return new BicycleMountain();
}