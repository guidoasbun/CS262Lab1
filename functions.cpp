//
// Created by Guido Asbun on 1/31/22.
//

#include "functions.h"

#include <iostream>
#include <iomanip>

using namespace std;

// Implement the functions from functions.h here
double getInput(const string &prompt)
{
    double result{0.0};

    do
    {
        cout << prompt;
        cin >> result;
    } while (result <= 0);

    return result;
}

double convertDistance(double inches)
{
    const double METERS_IN_INCH = 0.025;
    return (inches * METERS_IN_INCH);
}

double convertSpeed(double metersPerSec)
{
    const double MILES_PER_HOUR = 2.2374;
    return (metersPerSec * MILES_PER_HOUR);
}

double getSpeed(double distance, double seconds)
{
    return (distance / seconds);
}