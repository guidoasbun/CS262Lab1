// Guido Asbun
// CS262 
// Lab 1: Speed Sensors
// 07 February 2022

#include <iostream>
#include <iomanip>

#include "functions.h"

using namespace std;

int main()
{

    // Implement your main program here using the functions declared in funtions.h
    // getInput

    const int NUMBER_OF_VEHICLES = 4;
    const double DISTANCE_BETWEEN_WIRES = getInput("Enter the distance between the wires (inches): ");
    const double CONVERTED_DISTANCE = convertDistance(DISTANCE_BETWEEN_WIRES);

    double vehicleTime[NUMBER_OF_VEHICLES];

    for (double & vehicle : vehicleTime)
    {
        vehicle = getInput("Enter time recorded (seconds): ");
    }

    cout << "\nVehicle" << setw(20)
        << "Time (seconds)" << setw(20)
        << "Speed (m/s)" << setw(20)
        << "Speed (mph)" << endl;

    for (int i = 0; i < NUMBER_OF_VEHICLES; ++i)
    {
        const double METERS_PER_SECOND = getSpeed(CONVERTED_DISTANCE, vehicleTime[i]);
        const double MILES_PER_HOUR = convertSpeed(METERS_PER_SECOND);

        cout << fixed << showpoint << setprecision(2);
        cout << (i + 1)
            << setw(26) << vehicleTime[i]
            << setw(20) << METERS_PER_SECOND
            << setw(20) << MILES_PER_HOUR
            << endl;
    }

    return 0;
}
