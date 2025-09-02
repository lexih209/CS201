#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main() {
    /*This program will output the area and perimeter of a rectangle, and the area
    * and circumfrence of a circle.
    */

    const double PI= 3.141592653589793;

    double width, height, radius, rectArea, rectPerimeter, circleArea, circleCircumfrence;

    cout << "Enter width, height, and radius in order" << std::endl;
    cin >> width >> height >> radius;

    rectArea = width * height;
    rectPerimeter = (2 * width) + (2 * height);
    circleArea = PI * pow(radius, 2);
    circleCircumfrence = 2 * PI * radius;

    cout << "RectArea: " << rectArea << std::endl;
    cout << "RectPerimeter: " << rectPerimeter << std::endl;
    cout << "CircleArea: " << circleArea << std::endl;
    cout << "CircleCircumfrence: " << circleCircumfrence << std::endl;


    return 0;
}