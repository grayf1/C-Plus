// include pre processor directive
#include <iostream>

#define STOP 0
#define START 10
// defined macro expressions
#define condition(i) (i > STOP)
#define break(i) (i == 5)
#define continue(i) (i % 2)

// using C++ standard library namespace
using namespace std;

void loops1(void)
{
    // declare loop counter variable and initialize it
    int i = START;

    // set up while loop
    // use macro expression as conditon of while loop
    while (condition(i))
    {
        cout << i << " ";
        i--;
    }
   cout << "blastoff" << endl;
}