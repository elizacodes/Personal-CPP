#define _USE_MATH_DEFINES
#include <cmath>
#include "PlanetClass.h"

PlanetClass::PlanetClass()
{
    radius = 0.0;
    diameter = 0.0;
    mass = 0.0;
    name = "";
}

PlanetClass::PlanetClass(double r, double m, double d, string n)
{
    name = n;
    if (SetRadius(r) == false || SetMass(m) == false || SetDiameter(d) == false)
    {
        radius = 0.0;
        mass = 0.0;
        diameter = 0.0;
    }
}

void PlanetClass::SetName(string x)
{
    name = x;
}

string PlanetClass::GetName()
{
    return name;
}

bool PlanetClass::SetRadius(double x)
{
    bool rv = false;
    if (x >= 0.0) {
        radius = x;
        rv = true;
    }
    return rv;
}

bool PlanetClass::SetMass(double x)
{
    bool rv = false;
    if (x >= 0.0) {
        mass = x;
        rv = true;
    }
    return rv;
}

bool PlanetClass::SetDiameter(double x)
{
    bool rv = false;
    if (x >= 0.0) {
        diameter = x;
        rv = true;
    }
    return rv;
}

double PlanetClass::GetRadius()
{
    return radius;
}

double PlanetClass::GetMass()
{
    return mass;
}

double PlanetClass::GetDiameter()
{
    return diameter;
}

double PlanetClass::CalculateVolume()
{
    return 4.0 / 3.0 * M_PI * pow(radius, 3.0);
}

double PlanetClass::CalculateSurface()
{
    return 4.0 * M_PI * pow(radius, 2.0);
}

double PlanetClass::CalculateDensity()
{
    return mass / CalculateVolume();
}

double PlanetClass::CalculateAcceleration()
{
    double gravity = 6.67 * pow(10, -11);
    return (gravity * mass) / (pow(radius, 2.0));
}
