#define _USE_MATH_DEFINES
#include <cmath>
#include "Cylinder.h"

Cylinder::Cylinder()
{
	radius = 0.0;
	height = 0.0;
}

Cylinder::Cylinder(double r, double h)
{
	if (SetRadius(r) == false || SetHeight(h) == false)
	{
		radius = 0.0;
		height = 0.0;
	}
}

double Cylinder::CalculateVolume()
{
	return M_PI * pow(radius, 2.0) * height;
}

double Cylinder::CalculateSurfaceArea()
{
	return (2.0 * M_PI * radius * height) + (2.0 * M_PI * pow(radius, 2.0));
}

bool Cylinder::SetRadius(double x)
{
	bool result = false;
	if (x >= 0.0)
	{
		radius = x;
		result = true;
	}
	return result;
}

bool Cylinder::SetHeight(double x)
{
	bool result = false;
	if (x >= 0.0)
	{
		height = x;
		result = true;
	}
	return result;
}

double Cylinder::GetRadius()
{
	return radius;
}

double Cylinder::GetHeight()
{
	return height;
}
