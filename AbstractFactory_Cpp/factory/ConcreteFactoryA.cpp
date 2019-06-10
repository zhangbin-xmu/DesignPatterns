#include <iostream>
#include "ConcreteFactoryA.h"
#include "../product/AircraftJets.h"
#include "../product/BicycleRoad.h"

using namespace std;

ConcreteFactoryA::ConcreteFactoryA()
{
    cout << "Concrete Factory A ..." << endl;
}

ConcreteFactoryA::~ConcreteFactoryA()
{
    cout << "~ Concrete Factory A ..." << endl;
}

Aircraft* ConcreteFactoryA::CreateAircraft()
{
    return new AircraftJets();
}

Bicycle* ConcreteFactoryA::CreateBicycle()
{
    return new BicycleRoad();
}