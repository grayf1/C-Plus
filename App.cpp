// include pre processor directive 
#include <iostream>
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"

// In C++ a namespace is a collection of related identifiers
// (functions, class, objects, variables)

// The C++ standard library identifiers are defined in a namespace 
// called std. 

// A way to bring a specifc identifier of the std namespace into a
// C++ application is with the help of the using declaration. 
//using std::cout;

// A way to bring all the identifiers of the std namespace into a C++ 
// application as if they were declared globablly is with the help of the 
// using namespace statement 
using namespace std;


int main() {
    // IN order to use a C++ standard library identiifer, like cout
    // we need to specifiy that it belomgs to the std namespace. One 
    // way to do this is by using the scope resolution operator ::
   // std::cout << "Hello World!";
   cout << "Hello World!";
   output();
   input();
   decisions1();
}