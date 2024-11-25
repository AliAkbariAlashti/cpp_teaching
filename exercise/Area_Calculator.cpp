#include <iostream>
#include <cmath>
using namespace std;

// Project: Area Calculator

// Calculate the area of a circle
double areaOfCircle(double radius) {
    return M_PI * radius * radius; // M_PI is the constant value of Pi from the cmath library
}

// Calculate the area of a rectangle
double areaOfRectangle(double length, double width) {
    return length * width;
}

// Calculate the area of a triangle
double areaOfTriangle(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double radius, length, width, base, height;

    // Circle
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of circle: " << areaOfCircle(radius) << endl;

    // Rectangle
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << areaOfRectangle(length, width) << endl;

    // Triangle
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << areaOfTriangle(base, height) << endl;

    return 0;
}
