#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include "PlanetClass.h"
#include "ReadUserInput.h"

using namespace std;

int main()
{
	string name;

	cout << "Enter the name of the planet: ";
	getline(cin, name);

	double radius = readUserInput<double>("Enter the radius of the planet: ", 0);
	double mass = readUserInput<double>("Enter the mass of the planet: ", 0);
	double diameter = readUserInput<double>("Enter the diameter of the planet: ", 0);

	PlanetClass planet(radius, mass, diameter, name);

	cout << "Planet: " << planet.GetName() << endl << endl;

	cout << "------" << endl << endl;

	cout << "Radius \t = " << planet.GetRadius() << endl;
	cout << "Mass \t = " << planet.GetMass() << endl;
	cout << "Diameter = " << planet.GetDiameter() << endl << endl;

	cout << "------" << endl << endl;

	cout << "Volume \t = " << planet.CalculateVolume() << endl;
	cout << "Surface Area \t = " << planet.CalculateSurface() << endl;
	cout << "Density = " << planet.CalculateDensity() << endl << endl;

	cout << "------" << endl << endl;

	cout << "Acceleration due to gravity = " << planet.CalculateAcceleration() << endl;
}
