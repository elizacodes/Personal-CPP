#pragma once

#include "BaseShape.h"

class Sphere : public BaseShape
{
private:
	double radius;
	
public:
	double CalculateVolume();
	double CalculateSurfaceArea();
	bool SetRadius(double x);
	double GetRadius();
	Sphere();
	Sphere(double r);
};
