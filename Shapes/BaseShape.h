#pragma once

class BaseShape {
public:
	virtual ~BaseShape() {};
	virtual double CalculateVolume() = 0;
	virtual double CalculateSurfaceArea() = 0;
};
