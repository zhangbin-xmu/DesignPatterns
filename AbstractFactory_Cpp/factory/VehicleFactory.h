#ifndef _FACTORY_VEHICLE_H_
#define _FACTORY_VEHICLE_H_

#include "../product/aircraft/Aircraft.h"
#include "../product/bicycle/Bicycle.h"
#include "../product/car/Car.h"

class VehicleFactory
{
public:
    virtual ~VehicleFactory() = 0;
    virtual Aircraft* CreateAircraft() = 0;
    virtual Bicycle* CreateBicycle() = 0;
    virtual Car* CreateCar() = 0;
    
protected:
    VehicleFactory();
};

#endif