#ifndef _VEHICLE_FACTORY_NORTH_H_
#define _VEHICLE_FACTORY_NORTH_H_

#include "VehicleFactory.h"

class VehicleFactoryNorth : public VehicleFactory
{
public:
    VehicleFactoryNorth();
    ~VehicleFactoryNorth();
    virtual Aircraft* CreateAircraft();
    virtual Bicycle* CreateBicycle();
    virtual Car* CreateCar();
};

#endif