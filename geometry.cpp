/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;

    int choice;
    double radius;
    double length;
    double width;
    double base;
    double height;
    double area;

    cout << "Geometry Calculator Menu" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << fixed << setprecision(5);

    switch (choice)
    {
        case 1:
            cout << "Enter the radius: ";
            cin >> radius;

            if (radius < 0)
            {
                cout << "Error: Radius cannot be negative." << endl;
            }
            else
            {
                area = PI * radius * radius;
                cout << "Circle area: " << area << endl;
            }
            break;

        case 2:
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the width: ";
            cin >> width;

            if (length < 0 || width < 0)
            {
                cout << "Error: Dimensions cannot be negative." << endl;
            }
            else
            {
                area = length * width;
                cout << "Rectangle area: " << area << endl;
            }
            break;

        case 3:
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;

            if (base < 0 || height < 0)
            {
                cout << "Error: Dimensions cannot be negative." << endl;
            }
            else
            {
                area = base * height * 0.5;
                cout << "Triangle area: " << area << endl;
            }
            break;

        case 4:
            cout << "Exiting Geometry Calculator." << endl;
            break;

        default:
            cout << "Error: Invalid menu choice. Please enter 1-4." << endl;
            break;
    }

    return 0;
}