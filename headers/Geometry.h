// include pre processor directives
#include <iostream>
// using C++ standard library namespace
using namespace std;

// declare the class
class Geometry
{
    // class members (fields, constructors, methods)
    // may have the following access modifers: private,
    // public, protected
    // this class is goign to be an abstract class 
    // (like java interface) b/c its only method is 
    // going to be virtual; it will have a decaration only not a body
    // must use keyword virtual when declaring virtual 
    // methods and must intiliaize virtual methods to zero
public:
    virtual void compute() = 0;
};