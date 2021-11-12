#define _USE_MATH_DEFINES
#include <cmath>
#include "Prism.h"

Prism::Prism()
{
    base = 0.0;
    height = 0.0;
    perimeter = 0.0;
}

Prism::Prism(double b, double h, double p)
{
    if (SetBase(b) == false || SetHeight(h) == false || SetPerimeter(p) == false)
    {
        base = 0.0;
        height = 0.0;
        perimeter = 0.0;
    }
}

double Prism::CalculateVolume()
{
    return base * height;
}

double Prism::CalculateSurfaceArea()
{
    return perimeter * height + 2.0 * base;
}

bool Prism::SetBase(double x)
{
    bool result = false;
    if (x >= 0.0)
    {
        base = x;
        result = true;
    }
    return result;
}

bool Prism::SetHeight(double x)
{
    bool result = false;
    if (x >= 0.0)
    {
        height = x;
        result = true;
    }
    return result;
}

bool Prism::SetPerimeter(double x)
{
    bool result = false;
    if (x >= 0.0)
    {
        perimeter = 0.0;
        result = true;
    }
    return result;
}

double Prism::GetBase()
{
    return base;
}

double Prism::GetHeight()
{
    return height;
}

double Prism::GetPerimeter()
{
    return perimeter;
}
