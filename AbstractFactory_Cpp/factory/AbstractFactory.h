#ifndef _ABSTRACT_FACTORY_H_
#define _ABSTRACT_FACTORY_H_

#include "../product/Aircraft.h"
#include "../product/Bicycle.h"

class AbstractFactory
{
public:
    virtual ~AbstractFactory() = 0;
    virtual Aircraft* CreateAircraft() = 0;
    virtual Bicycle* CreateBicycle() = 0;
    
protected:
    AbstractFactory();
};

#endif