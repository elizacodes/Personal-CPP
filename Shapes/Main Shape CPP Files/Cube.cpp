#define _USE_MATH_DEFINES
#include <cmath>
#include "Cube.h"

Cube::Cube()
{
    sides = 0.0;
}

Cube::Cube(double s)
{
    if (SetSides(s) == false)
    {
        sides = 0.0;
    }
}
 
double Cube::CalculateVolume()
{
    return pow(sides, 3.0);
}

double Cube::CalculateSurfaceArea()
{
    return 6.0 * pow(sides, 3.0);
}

bool Cube::SetSides(double x)
{
    bool result = false;
    if (x >= 0.0)
    {
        sides = x;
        result = true;
    }
    return result;
}

double Cube::GetSides(double x)
{
    return sides;
}
