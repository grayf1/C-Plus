

// include pre processor directives
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>

#define NUM 34568.80
// using C++ standard library namespace
using namespace std;


// this function has 3 parameters and it has a local variable
void congratulate2(string student, string course, string programmer)
{
    // declare and initalize a local varable by calling strlen function
   //  strlen cannot be used on string replaced by .length() 
    int days = programmer.length();
// the C++ string type may not be formatted useing the % format specifier 
// the string type must be converted to a const * using the c_str() funtion 
// bfore it may be formated using the %s
// perfered way to outpt the C++ string type is by using the cout
    printf("%s has done has much %s programming as %s. could fit into %d days\n",
           student.c_str(), course.c_str(), programmer.c_str(), days);
}
/* this function has 3 parameters, all having char *.
when you have a * in the type of a parameter it means the parameter is a pointer
pointers refer to memory locations instead of holdnig values
char * means the parameters refer to a memory location that would store
a colectio nof characters. This is how C deals with Strings. There is
no string type in C; there is char *
*/
void congratulate1(string student, string course, string programmer)
{
    // 
    cout << student << " has done as much " << course << " programming as " << programmer << endl;
    // function declarations must appear in a file befoe calls may be made to the function 
    congratulate2(student, course, programmer);
}


