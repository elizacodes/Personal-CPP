#include <climits>
#include <string>
#include <iostream>

using namespace std;

double ReadDouble(string prompt)
{
	string input;
	string convert;
	bool isValid = true, decimal = false, comma = false;
	int character = 0;

	do
	{
		isValid = true;
		decimal = false;
		comma = false;
		cout << prompt;
		cin >> input;
		if (input[0] == '+' || input[0] == '-' || input[0] == '.' || isdigit(input[0]) != 0)
		{
			if (input[0] == '.')
			{
				decimal = true;
			}
			convert = input.substr(0, 1);
		}
		else
		{
			cout << "Error! The first character must be a +, -, ., or a number." << endl;
			isValid = false;
		}

		if (input[0] == '+' || input[0] == '-' || input[0] == '.')
		{
			character = 0;
		}

		else
		{
			character = 1;
		}

		long len = input.length();
		for (long index = 1; index < len && isValid == true; index++)
		{
			if (input[index] == ',')
			{
				if (comma == true && character != 4 && decimal == false)
				{
					cout << "Error! Invalid comma placement 1." << endl;
					isValid = false;
				}
				character = 0;
				comma = true;

				if (decimal == true)
				{
					cout << "Error! There is a comma after the decimal point." << endl;
					isValid = false;
				}
			}

			else
			{
				character += 1;

				if (isdigit(input[index]) != 0 || input[index] == '.')
				{
					convert += input.substr(index, 1);

					if (input[index] == '.')
					{
						if (decimal == true)
						{
							cout << "Error! Cannot have two decimal points." << endl;
							isValid = false;
						}
						decimal = true;
					}

					if (character == 4 && decimal == false)
					{
						cout << "Error! Invalid comma placement 2." << endl;
						isValid = false;
					}
				}

				else
				{
					cout << "Error! You need to enter a digit." << endl;
					isValid = false;
				}

			}

		}
	} while (isValid == false);

	double returnValue = atof(convert.c_str());
	return returnValue;
}

int main()
{
	double x = ReadDouble("Please enter a value: " );
	cout << x << endl;
}