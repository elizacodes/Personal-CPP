#define _USE_MATH_DEFINES
#include <cmath>
#include "Cone.h"

Cone::Cone()
{
    radius = 0.0;
    height = 0.0;
    slant = 0.0;
}

Cone::Cone(double r, double h, double s)
{
    if (SetRadius(r) == false || SetHeight(h) == false || SetSlant(s) == false)
    {
        radius = 0.0;
        height = 0.0;
        slant = 0.0;
    }
}

double Cone::CalculateVolume()
{
    return 1.0 / 3.0 * M_PI * pow(radius, 2.0) * height;
}

double Cone::CalculateSurfaceArea()
{
    return (M_PI * radius * slant) + (M_PI * pow(radius, 2.0));
}

bool Cone::SetRadius(double x)
{
    bool result = false;
    if (x >= 0.0)
    {
        radius = x;
        result = true;
    }
    return result;
}

bool Cone::SetHeight(double x)
{
    bool result = false;
    if (x >= 0.0)
    {
        height = x;
        result = true;
    }
    return result;
}

bool Cone::SetSlant(double x)
{
    bool result = false;
    if (x >= 0.0)
    {
        slant = x;
        result = true;
    }
    return result;
}

double Cone::GetHeight()
{
    return height;
}

double Cone::GetRadius()
{
    return radius;
}

double Cone::GetSlant()
{
    return slant;
}
