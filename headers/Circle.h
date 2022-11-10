// include pre processor directives
#include <iostream>
#include <stdexcept> // needed to throw exceptions
#include <iomanip>   // used to format the output
#include <math.h>    // needed to perfom area computation
#include "Geometry.h"

#define PI 3.14159265358973238

// using C++ standard library namespace
using namespace std;

// declare the Circle class and specifiy that its a
// subclass of Geometry
class Circle : Geometry
{
private:
    // declsre fields
    int radius;
    double area;

public:
    // declare constructors
    Circle();
    Circle(int);

    // declare getter and setter method for the radius field
    void setRadius(int);
    // the const keyword at the emd of the method declares that the
    // method wont change anhy of tje field values.
    // attempting to do so will result in a complier error
    void getRadius(int &) const;
    // declare a getter for area field
    void getArea(double &) const;
    void compute() override;
    void printCircle() const;
    bool equalCircle(const Circle &) const;
};
// class constructors and methods may be defined inside the class
// when theyre declared. they may also be defiend outside of the
// body of the class, but when they are their names must be prefixed
// with the name of the Class and the resolution operator ::
Circle::Circle()
{
    radius = 0;
}

Circle::Circle(int radius)
{
    // check if we've been given an invalid argument - raduis less than zero
    if (radius < 0)
    {
        // throw an exception
        throw invalid_argument("Radius must be greater than or equal to zero.");
    }
    this->radius = radius;
}

void Circle::setRadius(int radius)
{
    // check if we've been given an invalid argument - raduis less than zero
    if (radius < 0)
    {
        // throw an exception
        throw invalid_argument("Radius must be greater than or equal to zero.");
    }
    this->radius = radius;
}

void Circle::getRadius(int &radius) const
{
    //  place radius field value in specified radius
    radius = this->radius;
}

void Circle::getArea(double &area) const
{
    area = this->area;
}

void Circle::compute()
{
    area = M_PI * pow(radius, 2);
}

void Circle::printCircle() const
{
    cout << fixed << showpoint;
    cout << setprecision(5);
    cout << "radius=" << radius << ", area=" << area << endl;
}

bool Circle::equalCircle(const Circle &otherCircle) const
{
    return (radius == otherCircle.radius &&
            area == otherCircle.area);
}
