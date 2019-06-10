#ifndef _CONCRETE_FACTORY_A_H_
#define _CONCRETE_FACTORY_A_H_

#include "AbstractFactory.h"

class ConcreteFactoryA : public AbstractFactory
{
public:
    ConcreteFactoryA();
    ~ConcreteFactoryA();
    virtual Aircraft* CreateAircraft();
    virtual Bicycle* CreateBicycle();
};

#endif