#ifndef _CONCRETE_FACTORY_B_H_
#define _CONCRETE_FACTORY_B_H_

#include "AbstractFactory.h"

class ConcreteFactoryB : public AbstractFactory
{
public:
    ConcreteFactoryB();
    ~ConcreteFactoryB();
    virtual Aircraft* CreateAircraft();
    virtual Bicycle* CreateBicycle();
};

#endif