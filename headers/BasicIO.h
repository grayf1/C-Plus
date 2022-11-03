// include pre processor directive
#include <iostream>
#include <string>

#define FIRST_NAME "Faith"
#define LAST_NAME "Gray"
#define AGE 22
#define WEIGHT 125

// using C++ standard library namespace
using namespace std;

/**
 * this function will use cout and insertion
 *  operator to write data to stdout
 */
void output(void)
{
    // cout is object of the output stream of a C++ application (terminal, file)
    // << is the inseration operator and its used to show output to
    // the output stream
    // a newline character is not appended to tthe end of the output
    // so we must use rhe end1 command
    cout << "Your first name is " << FIRST_NAME << endl;

    cout << "Your last name is " << LAST_NAME << endl;

    cout << "Your weight name is " << WEIGHT << " and your age name is " << AGE << endl;

    cout << FIRST_NAME << " ";
    cout << LAST_NAME << endl;
}

/**
 * this function will use cin and the extraction operator to input data from stdin
 */

void input()
{
    // declare variables tos store input data
    int age;
    float weight;
    // C++ has the string type
    string name;

    // input an into from stdin
    cout << "Enter your age: ";
    // cin is an object of the input stream of a C++ application
    // >> is the extraction operator and its used to read input from
    // the input stream and place it in a avariable
    cin >> age;
    cout << "Enetred age is: " << age << endl;

    // input a float from stdin
    cout << "Enter your weight: ";
    cin >> weight;
    cout << "Enetred weight is: " << weight << endl;

    // input a float and an int
    cout << "Enter your weight and age separated by a space: ";
    cin >> weight >> age;
    cout << "Enetred weight is: " << weight << " entered age is: " << age << endl;

    // input a string
    cout << "enter your full name: ";
    // cin stops reading when it encounters an empty space
    // cin >> name;

    // getline reads a full line from the input stream, including the newline 
    // character generated when the Enter key is pushed. This can prevent it from 
    // reading the actual input string, so we must call the ignore function 
    // beofre valling getline to ignore the newline character
    cin.ignore();
    getline(cin, name);
    cout << "Entered full name is: " << name << endl;
}