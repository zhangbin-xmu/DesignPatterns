#include <iostream>
#include "AbstractFactory.h"
#include "../product/Aircraft.h"
#include "../product/Bicycle.h"

using namespace std;

AbstractFactory::AbstractFactory()
{
    cout << "Abstract Factory ..." << endl;
}

AbstractFactory::~AbstractFactory()
{
    cout << "~ Abstract Factory ..." << endl;
}