// include pre processor directive
#include <iostream>
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Structs.h"
//#include "./headers/Circle.h"
#include "./headers/Cylinder.h"
// In C++ a namespace is a collection of related identifiers
// (functions, class, objects, variables)

// The C++ standard library identifiers are defined in a namespace
// called std.

// A way to bring a specifc identifier of the std namespace into a
// C++ application is with the help of the using declaration.
// using std::cout;

// A way to bring all the identifiers of the std namespace into a C++
// application as if they were declared globablly is with the help of the
// using namespace statement
using namespace std;

int main()
{
    // IN order to use a C++ standard library identiifer, like cout
    // we need to specifiy that it belomgs to the std namespace. One
    // way to do this is by using the scope resolution operator ::
    // std::cout << "Hello World!";
    // cout << "Hello World!";
    // output();
    // input();
    // decisions1();
    // loops1();
    // congratulate1("Faith", "C++","Bjarne Stoustrup");
    //  accessStructMembers();
    // declare a Person struct
    // struct Person person;
    // assugn values to its memebers
    // person.heightInMeters=1.9;
    // person.weightInKilos=60;
    // call the bodybodyMassIndex function passing the struct as an argument
    // bodyMassIndex(person);
    // output the return from the bodyMassIndex function
    // cout << "Persons BMI is " << bodyMassIndex(person) << " %. " << endl;

    // declare and intialize a Circle object using the no-arg conctructor
    Circle circle1;

    // declare local variables that we will use when calling circle1's getters
    int radius;
    double area;

    cout << "Circle 1 : ";
    circle1.printCircle();

    circle1.setRadius(5);
    cout << "Circle 1 : ";
    circle1.printCircle();

    circle1.compute();
    cout << "Circle 1 : ";
    circle1.printCircle();

    // when calling getter method, must provide local variable
    // as argument. the value in the field will be placed by the
    // getter method into the addres of the local variable
    circle1.getRadius(radius);
    // this allows us to putput the value to stdout
    cout << "Radius 1 : " << radius << endl;

    circle1.getArea(area);
    // this allows us to putput the value to stdout
    cout << "Area 1 : " << area << endl;

    // declare and intialize a Circle object using the one-arg conctructor
    Circle circle2(3);

    cout << "Circle 2 : ";
    circle2.printCircle();

    circle2.compute();
    cout << "Circle 2 : ";
    circle2.printCircle();

    cout << "Circle 1 equals Circle 2 ? " << circle1.equalCircle(circle2) << endl;

    cout << "Circle 1 equals Circle 2 ? " << (circle1.equalCircle(circle2) ? "true" : "false") << endl;
    // declare and initialize a Cylinder using no-arg constructor
    Cylinder cylinder1;

    // declare local variables that will be used when calling the cylinders getter methods
    int height;
    double volume;

    cout << "Cylinder 1 :";
    cylinder1.printCylinder();

    cylinder1.Circle::setRadius(5);
    cylinder1.Circle::compute();
    cout << "Cylinder 1 :";
    cylinder1.printCylinder();

    cylinder1.setHeight(7);
    cylinder1.compute();

    cout << "Cylinder 1 :";
    cylinder1.printCylinder();

    cylinder1.getHeight(height);
    cout << "Height 1 : " << height << endl;
    cylinder1.getVolume(volume);
    cout << "Volume 1 : " << volume << endl;

    // declare and initalize Cylinder using a 2 arg constructor 
    // providing 4 for the radius and 8 for the height 
    Cylinder cylinder2(4,8);
    // print the Cylinder to stdout 
    cout << "Cylinder 2 :";
    cylinder2.printCylinder();
    // compute the area and print the Cylinder to stdout 
    cylinder2.compute();
    cout << "Cylinder 2 :";
    cylinder2.printCylinder();
    // compute the volume and print the Cylinder to stdout 
    cylinder2.getVolume(volume);
    cout << "Volume 1 : " << volume << endl;
    // display if the first and secind cylinders are equal 
     cout << "cylinder 1 equals cylinder 2 ? " << (cylinder1.equalCircle(cylinder2) ? "true" : "false") << endl;
}