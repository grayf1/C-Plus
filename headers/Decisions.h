// include pre processor directive
#include <iostream>
#include <iomanip>

#define NUM 34568.80
// using C++ standard library namespace
using namespace std;

void decisions1(void)
{
    // declare the variables of type float
    // initialize it using constant defined in header file
    float num = NUM;

    // Show decimal point and trailing zeros on the output stream object
    cout << fixed << showpoint;
    // show three digits to the right of the decimal on the out stream object
    cout << setprecision(3);

    // use if statement
    if (num < 40000.0)
    {
        cout << "Num " << num << " is less than 40000.0." << endl;
    }

    num += num;

    // use if-else statement
    if (num < 40000.0)
    {
        cout << "Num " << num << " is less than 40000.0." << endl;
    }
    else
    {
        cout << "Num " << num << " is not less than 40000.0." << endl;
    }

    num = 0.0;

    // use if-else-if-else statement
    if (num == 0.0)
    {
        cout << "Num " << num << " is equal to 0.0." << endl;
    }
    else if (num < 40000.0)
    {
        cout << "Num " << num << " is less than 40000.0." << endl;
    }
    else
    {
        cout << "Num " << num << " is not less than 40000.0 and is not equal to 0.0." << endl;
    }
}
