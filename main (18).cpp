/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

//1
double conversiontime(double minutes,double seconds){
    return (minutes * 60) + seconds;
}
//2
double distance(double speed,double tseconds){
    return speed * tseconds;
}
//3
double kmtom(double kilometer){
    double Km_to_mile = 0.621371;
    return kilometer*Km_to_mile;

//create 2 paramet func
double light = 299,792.0;
//get the time
int minutes 8;
int seconds 19;
//get total time
totaltime = conversiontime(double minutes,double seconds);
//distance
distance(speed,tseconds);
//mile
kmtom(double kilometer);

//what they see

   cout << "--- Sun to Earth Distance Calculator ---" << endl;
    cout << "Time taken for sunlight to reach Earth: " << minutes << " minutes and " << seconds << " seconds" <<endl;
    cout << "Total travel time in seconds: " << totalSeconds << " seconds" <<endl;
    cout << "----------------------------------------" <<endl;
    cout << "Approximate Distance in Kilometers: " << distanceKm << " km" <<endl;
    cout << "Approximate Distance in Miles:      " << distanceMiles << " miles" <<endl;



int main()
{
    std::cout<<"Hello World";

    return 0;
}