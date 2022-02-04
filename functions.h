//
// Created by Guido Asbun on 1/31/22.
//

#ifndef CS262LAB1_FUNCTIONS_H
#define CS262LAB1_FUNCTIONS_H

#include <string>

// Asks user for input using prompt
// until user enters positive number
double getInput(const std::string &prompt);

// Convert inches to meters
double convertDistance(double inches);

// Convert meters/second to miles/hour
double convertSpeed(double metersPerSec);

// determines velocity (meters/second) using the distance (in meters)
// and time (in seconds)
// velocity assumed to be constant
double getSpeed(double distance, double seconds);


#endif //CS262LAB1_FUNCTIONS_H
