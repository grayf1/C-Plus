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

// declare another struct for a person using
// a type definition. A type definition defines
// an aliais for a struct that allows the alias
// to be used like a primitive data type.
typedef struct
{
    // delcare 2 memebers in the person struct
    float heightInMeters;
    int weightInKilos;
} PersonType; // this is the alias

// using C++ standard library namespace
using namespace std;
/**
 * this function uses the Person struct for purposes
 * of displaying the valye of its members
 */
void accessStructMembers(void)
{
    // declare a Person struct
    struct Person person;

    // assign values to the memebrs of the Person struct
    person.heightInMeters = 1.8;
    person.weightInKilos = 96;

    // display values in members
    cout << "Persons weight is " << person.weightInKilos << " kilograms. " << endl;
    cout << "Persons weight is " << person.heightInMeters << " meters. " << endl;

    // declare a Person struct using the alias (type defintion)
    PersonType p;

    // assign values to the members of the Person struct
    p.heightInMeters = 1.8;
    p.weightInKilos = 96;

    // display values in members
    cout << "Persons weight is " << p.weightInKilos << " kilograms. " << endl;
    cout << "Persons weight is " << p.heightInMeters << " meters. " << endl;
}

/* this function will have a Person struct as a parameter. 
it will compute and return the BMI of the Person struct*/
float bodyMassIndex(struct Person p){
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}