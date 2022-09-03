//----------------------------------------------------------------------
// FA2022_PA3_constructors.cpp : app code with entry point
//----------------------------------------------------------------------
#include <iomanip>
#include <iostream>

#include "Population.h"

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::showpoint;

//----------------------------------------------------------------------
// local function prototypes
//----------------------------------------------------------------------
void getInput(int& count, int& births, int& deaths);

//----------------------------------------------------------------------
// entry point
//----------------------------------------------------------------------
int main() {
    int count, births, deaths;

    getInput(count, births, deaths);

    Population pop(count, births, deaths);

    cout << "\n Population count: " << pop.getCount();
    cout << "\n Births: " << pop.getBirths();
    cout << "\n Deaths: " << pop.getDeaths();

    // calculate birth and death rate per year
    cout << setprecision(1) << showpoint;
    cout << "\n\n Birth rate per year: " << pop.getBirthRate();
    cout << "\n Death rate per year: " << pop.getDeathRate();
    cout << endl << endl;
}

//----------------------------------------------------------------------
// get user input
//----------------------------------------------------------------------
void getInput(int& count, int& births, int& deaths) {
    cout << "\n Population Birth and Death Rates\n";
    cout << "\n Enter population count: ";
    cin >> count;
    cout << "\n Enter births per year: ";
    cin >> births;
    cout << "\n Enter deaths per year: ";
    cin >> deaths;
}