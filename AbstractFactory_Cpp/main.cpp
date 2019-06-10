#include <iostream>
#include "factory/ConcreteFactoryA.h"
#include "factory/ConcreteFactoryB.h"

int main() 
{
    AbstractFactory* factory = new ConcreteFactoryA();
    Aircraft* aircraft = factory->CreateAircraft();
    Bicycle* bicycle = factory->CreateBicycle();

    factory = new ConcreteFactoryB();
    aircraft = factory->CreateAircraft();
    bicycle = factory->CreateBicycle();

    delete factory;
    delete aircraft;
    delete bicycle;
    return 0;
}