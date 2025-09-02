#include <iostream>
#include <string>
using namespace std;

//This program will return user's change in the fewest coins.
int main() {

    int cents, dollars, quarters, dimes, nickels, pennies;
    int remainder;

    std::cout<< "Enter an amount in cents: " << std::endl;
    std::cin >> cents;

    dollars = cents / 100; 
    remainder = cents % 100;

    quarters = remainder / 25;
    remainder = remainder % 25;

    dimes = remainder / 10;
    remainder = remainder % 10;

    nickels = remainder /5;
    
    pennies = remainder;



    std::cout << "Dollars: " << dollars << std::endl;
    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickels: " << nickels << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;


    return 0;
}