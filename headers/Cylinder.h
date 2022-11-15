// include pre processor directives
#include <iostream>
#include <stdexcept> // needed to throw exceptions
#include <iomanip>   // used to format the output
#include <math.h>    // needed to perfom area computation
//#include "Geometry.h"
#include "Circle.h"

// using C++ standard library namespace
using namespace std;

// declare Cylinder class and specify that it's a subclass or circle
// must specify the access level of the superclass since itd not an abstract class
class Cylinder : public Circle
{
private:
    // declare fields
    int height;
    double volume;

public:
    // define constructors
    Cylinder()
    {
        // when calling a superclass member the call must be
        // prefixed with the name of the superclass and
        // the resolution operator
        this->Circle::setRadius(0);
        height = 0;
    }

    Cylinder(int radius, int height)
    {
        // check if we've been given an invalid argument - radius less than zero
        if (radius < 0)
        {
            // throw an exception
            throw invalid_argument("Radius must be greater than or equal to zero.");
        }

        // check if we've been given an invalid argument - height less than zero
        if (height < 0)
        {
            // throw an exception
            throw invalid_argument("Height must be greater than or equal to zero.");
        }
        this->Circle::setRadius(radius);
        this->height = height;
    }

    // deine the setter and getter methods for the height field
    void setHeight(int height)
    {
        // check if we've been given an invalid argument - height less than zero
        if (height < 0)
        {
            // throw an exception
            throw invalid_argument("Height must be greater than or equal to zero.");
        }
        this->height = height;
    }
    void getHeight(int &height) const
    {
        height = this->height;

        // the const keyword at the emd of the method declares that the
        // method wont change anhy of tje field values.
        // attempting to do so will result in a complier error
    }

    void getVolume(double &volume) const
    {
        volume = this->volume;
    }
    void compute()
    {
        double area;
        this->Circle::getArea(area);
        volume = height * area;
    }

    void printCylinder()
    {
        double area;
        this->Circle::getArea(area);
        int radius;
        this->Circle::getRadius(radius);

        cout << fixed << showpoint;
        cout << setprecision(5);

        cout << "radius=" << radius << ", area=" << area << ", height=" << height << ", volume=" << volume << endl;
    }
    bool equalCylinder(const Cylinder &otherCylinder) const
    {
        return (height == otherCylinder.height && volume == otherCylinder.volume);
    }
};