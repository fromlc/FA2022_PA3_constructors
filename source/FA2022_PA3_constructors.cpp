//----------------------------------------------------------------------
// FA2022_PA3_constructors.cpp : app code with entry point
//----------------------------------------------------------------------
#include <iomanip>
#include <iostream>

#include "Population.h"

using std::cout;
using std::endl;
using std::setprecision;
using std::showpoint;

//----------------------------------------------------------------------
// entry point
//----------------------------------------------------------------------
int main() {
 
    Population pop(100000, 8000, 6000);

    cout << "\nPopulation count: " << pop.getCount();
    cout << "\nBirths: " << pop.getBirths();
    cout << "\nDeaths: " << pop.getDeaths();

    // calculate birth and death rate per year
    cout << setprecision(1) << showpoint;
    cout << "\n\nBirth rate per year: " << pop.getBirthRate();
    cout << "\nDeath rate per year: " << pop.getDeathRate();
    cout << endl << endl;
}
