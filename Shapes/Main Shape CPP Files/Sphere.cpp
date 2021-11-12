#define _USE_MATH_DEFINES
#include <cmath>
#include "Sphere.h"

Sphere::Sphere()
{
	radius = 0.0;
}

Sphere::Sphere(double r)
{
	if (SetRadius(r) == false)
	{
		radius = 0.0;
	}
}

double Sphere::CalculateVolume()
{
	return 4.0 / 3.0 * M_PI * pow(radius, 3.0);
}

double Sphere::CalculateSurfaceArea()
{
	return 4.0 * M_PI * pow(radius, 2.0);
}

bool Sphere::SetRadius(double x)
{
	bool result = false;
	if (x >= 0.0) {
		radius = x;
		result = true;
	}
	return result;
}

double Sphere::GetRadius()
{
	return radius;
}
