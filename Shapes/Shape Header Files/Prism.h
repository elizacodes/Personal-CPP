#pragma once
#include "BaseShape.h"

class Prism : public BaseShape
{
private:
    double base, height, perimeter;

public:
    double CalculateVolume();
    double CalculateSurfaceArea();
    bool SetBase(double x);
    bool SetHeight(double x);
    bool SetPerimeter(double x);
    double GetBase();
    double GetHeight();
    double GetPerimeter();
    Prism();
    Prism(double b, double h, double p);
};
