// include pre processor directives
#include <iostream>

// a struct is a collection of related data(members)
// the memebrts may be only firlds (variables)
// the members may be of different types
// declare a strcut for a Person
struct Person
{
    // delcare 2 memebers in the person struct
    float heightInMeters;
    int weightInKilos;
};
// using C++ standard library namespace
using namespace std;
/**
 * this function uses the Person struct for purposes 
 * of displaying the valye of its members
*/
void accessStructMembers(void){
    // declare a Person struct
    struct Person person;

    // assign values to the memebrs of the Person struct
    person.heightInMeters = 1.8;
    person.weightInKilos = 96;

    //display values in members
    cout << "Persons weight is " << person.weightInKilos << " kilograms. " << endl;
    cout << "Persons weight is " << person.heightInMeters << " meters. " << endl;
}