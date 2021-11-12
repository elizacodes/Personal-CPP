#pragma once
#include "BaseShape.h"

class Cone : public BaseShape
{
private:
    double radius, height, slant;

public:
    double CalculateVolume();
    double CalculateSurfaceArea();
    bool SetRadius(double x);
    bool SetHeight(double x);
    bool SetSlant(double x);
    double GetRadius();
    double GetHeight();
    double GetSlant();
    Cone();
    Cone(double r, double h, double s);
};
