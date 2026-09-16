/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//calculates the approximate distance from the Earth to the Sun
// amount of time sunlight takes to reach Earth. 

#include <iostream>
using namespace std;

double convertToSeconds(int minutes, int seconds);
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
int main() {
    // 1. Store the speed of light in a variable (km/s)
    const double SPEED_OF_LIGHT = 299792.0;
    
    // Sunlight travel time: 8 minutes and 19 seconds
    int minutes = 8;
    int seconds = 19;
    
    // 2. Call function to convert the travel time to seconds
    double totalSeconds = convertToSeconds( minutes, seconds);
    
    // 3. Call function to calculate the distance in kilometers
    int distanceKm = calculateDistance(SPEED_OF_LIGHT, totalSeconds);
    
    // 4. Call function to convert the distance to miles
    int distanceMiles = convertKmToMiles(distanceKm);
    
    // 5. Display the results clearly
    cout << "--- Time for sunlight to hit earth ---" << endl;
    cout << "Time taken for sunlight to reach Earth: " << minutes << " minutes and " << seconds << " seconds" <<endl;
    cout << "Total travel time in seconds: " << totalSeconds << " seconds" << endl;
    cout << "----------------------------------------" << endl;
   
   cout<<"Distance from earth to the sun"<<endl;
   cout << "Approximate Distance in Kilometers: " << distanceKm << " km" <<endl;
    cout << "Approximate Distance in Miles:      " << distanceMiles << " miles" << endl;
    
    return 0;
}
