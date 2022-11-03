// include pre processor directive
#include <iostream>

#define NUM 34568.80
// using C++ standard library namespace
using namespace std;

void decisions1(void)
{
    // declare the variables of type float
    // initialize it using constant defined in header file
    float num = NUM;

    // use if statement
    if (num < 40000.0)
    {
        cout << num <<  "Num (%.2f) is less than 40000.0 " << endl;
    }

    num += num;
    // use if else statement
    if (num < 40000.0)
    {
        cout << num << "Num (%.2f) is less than 40000.0 " << endl;
    }
    else
    {

        cout << num <<  "Num (%.2f) is not less than 40000.0 " << endl;
    }

    num = 0.0;

    // use if-else-if statement
    if (num == 0.0)
    {
        cout << num << "Num (%.2f) is equal to 0.0. " << endl;
    }
    else if (num < 40000.0)
    {
        cout << num << "Num (%.2f) less than to 40000.0. " << endl;
    }
    else
    {
        cout << num << "Num (%.2f) is not less than to 40000.0. and not equal to " << endl;
    }
}
