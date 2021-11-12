#pragma once
#include "BaseShape.h"

class Cube : public BaseShape
{
private:
    double sides;

public:
    double CalculateVolume();
    double CalculateSurfaceArea();
    bool SetSides(double x);
    double GetSides(double x);
    Cube();
    Cube(double s);
};
