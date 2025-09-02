#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    //This program will convert seconds to hours, minutes, and seconds
    int totalSeconds, hours, minutes, seconds;


    cout << "Enter total seconds: " << endl;
    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;
    totalSeconds = totalSeconds % 60;

    seconds = totalSeconds;


    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    cout << hours << ":" << minutes << ":" << seconds;












    return 0;
}