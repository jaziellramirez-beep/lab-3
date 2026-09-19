////////////////////////////////////////////////////////////////
//
// Name: Write your name
// Date: September 19,2026
// Class: CSCI 1470.04
// Semester: Fall 2026
// Instructor: Dr. Jonatan Reyes
//
// Program Description: tells you the time and distance for the earth and sun
////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

//calculates the approximate distance from the Earth to the Sun
// amount of time sunlight takes to reach Earth. 

double convertToSeconds(double minutes, double seconds);
double calculateDistance(double speed, double timeInSeconds);
double convertKmToMiles(double kilometers);

//function is time
double convertToSeconds(double minutes, double seconds) {
    return (minutes * 60) + seconds;
}

// Function is distance
double calculateDistance(double speed, double timeInSeconds) {
    return speed * timeInSeconds;
}

// Function to convert kilometers to miles 
double convertKmToMiles(double kilometers) {
    const double KM_TO_MILES_CONVERSION = 0.621371;
    return kilometers * KM_TO_MILES_CONVERSION;
}



//main
int main() {
    // 1. Store the speed of light 
    const double SPEED_OF_LIGHT = 299792.0;
    
    // Sunlight travel time: 8 minutes and 19 seconds
    int minutes = 8;
    int seconds = 19;
    
    // Call function to convert the travel time to seconds
    double totalSeconds = convertToSeconds( minutes, seconds);
    
    // Call function to calculate the distance in kilometers
    int distanceKm = calculateDistance(SPEED_OF_LIGHT, totalSeconds);
    
    //  Call function to convert the distance to miles
    int distanceMiles = convertKmToMiles(distanceKm);
    
    //  Display results neatly
    cout << "--- Time for sunlight to hit earth ---" << endl;
    cout << "Time taken for sunlight to reach Earth: " << minutes << " minutes and " << seconds << " seconds" <<endl;
    cout << "Total travel time in seconds: " << totalSeconds << " seconds" << endl;
    cout << "----------------------------------------" << endl;
   //2dist
   cout<<"Distance from earth to the sun"<<endl;
   cout << "Approximate Distance in Kilometers: " << distanceKm << " km" <<endl;
    cout << "Approximate Distance in Miles:      " << distanceMiles << " miles" << endl;
    
    return 0;
}
