#pragma once
#include <string>

using namespace std;

class PlanetClass
{
private:
	double radius, mass, diameter;
	string name;

public:

	PlanetClass();
	PlanetClass(double r, double m, double d, string n);
	double GetRadius();
	double GetMass();
	double GetDiameter();
	bool SetRadius(double x);
	bool SetMass(double x);
	bool SetDiameter(double x);
	void SetName(string x);
	string GetName();
	double CalculateVolume();
	double CalculateSurface();
	double CalculateDensity();
	double CalculateAcceleration();
};
