#include <iostream>
#include <algorithm>

using namespace std;

const string CHOICE_NO = "no";
const string CHOICE_YES = "yes";
const char DEGREES = '\370';
string toLowerCase(string value);
double FarenheitToCelsius(double farenheit);

int main()
{

	string choice;

	do
	{
		cout << "Do you want to convert Farenheit to Celsius?" << endl;
		cin >> choice;

		if (toLowerCase(choice) == CHOICE_YES)
		{
			double farenheit;

			cout << "Enter a value in Farenheit (> 0 and <= 100): " << endl;
			cin >> farenheit;

			FarenheitToCelsius(farenheit);
		}

		else if (toLowerCase(choice) != CHOICE_NO && toLowerCase(choice) != CHOICE_YES)
		{
			cerr << "Error! Invalid choice. Select only 'yes' or 'no'." << endl;
		}
	}

	while (toLowerCase(choice) != CHOICE_NO);

	cout << "Goodbye! Have a good day!" << endl;
}

double FarenheitToCelsius(double farenheit)
{
	try
	{
		if (farenheit < 0)
		{
			throw 1;
		}

		else if (farenheit > 100)
		{
			throw 2;
		}

		double celsius = (farenheit - 32) * 5 / 9;

		cout
			<< endl
			<< farenheit << DEGREES << "F = " << celsius << DEGREES << "C" << endl;
	}

	catch(int x)
	{
		if (x == 1)
		{
			cerr << "Error! The entered value is less than zero!" << endl;
		}

		else
		{
			cerr << "Error! The entered value is greater than a hundred!" << endl;
		}
	}
}

string toLowerCase(string value)
{
	transform(value.begin(), value.end(), value.begin(), ::tolower);

	return value;
}
