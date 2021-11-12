#pragma once
#include "BaseShape.h"

class Cylinder : public BaseShape
{
private:
	double radius, height;

public:
	double CalculateVolume();
	double CalculateSurfaceArea();
	bool SetRadius(double x);
	bool SetHeight(double x);
	double GetRadius();
	double GetHeight();
	Cylinder();
	Cylinder(double r, double h);
};
