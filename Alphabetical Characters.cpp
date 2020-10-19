#include <iostream>
#include <string>
#include <climits>
#include <cctype>

using namespace std;
void ProcessString(string input);

int main()
{
    string a;
    cout << "Enter a string: ";
    getline(cin, a);
    ProcessString(a);

}

void ProcessString(string input)
{
    int x = input.length();
    for (int i = 0; i < x; i++)
    {

        if (isalpha(input[i]))
        {
            putchar (toupper(input[i]));
        }

        else if (isdigit(input[i]))
        {
            cout << "#";
        }

        else
        {
            cout << input[i];
        }
    }
}