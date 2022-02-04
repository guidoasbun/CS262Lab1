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
    return (inches * 0.025);
}

double convertSpeed(double metersPerSec)
{
    return (metersPerSec * 2.2374);
}

double getSpeed(double distance, double seconds)
{
    return (distance / seconds);
}