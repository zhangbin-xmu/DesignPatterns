#ifndef _VEHICLE_FACTORY_SOUTH_H_
#define _VEHICLE_FACTORY_SOUTH_H_

#include "VehicleFactory.h"

class VehicleFactorySouth : public VehicleFactory
{
public:
    VehicleFactorySouth();
    ~VehicleFactorySouth();
    virtual Aircraft* CreateAircraft();
    virtual Bicycle* CreateBicycle();
    virtual Car* CreateCar();
};

#endif