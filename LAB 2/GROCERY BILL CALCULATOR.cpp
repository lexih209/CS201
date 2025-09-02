#include <iostream>
#include <string>
using namespace std;

//This program will compute a shopper's total with a fixed rate
int main() {

    const double TAX_RATE = 8.25 / 100;
    double subtotal, tax, total;
    int qty1, qty2, qty3;
    double price1, price2, price3;

    std::cout << "Enter the price followed by the quantity for three items." << std::endl;
    std::cin >> price1 >> qty1 >> price2 >> qty2 >> price3 >> qty3;

    subtotal = (price1 * qty1) + (price2 * qty2) + (price3 * qty3);
    tax = (subtotal * TAX_RATE);
    total = subtotal + tax;

    std::cout << "Subtotal: $" << subtotal << std::endl;

    std::cout << "Tax: $" << tax << std::endl;

    std::cout << "Total: $" << total << std::endl;



    return 0;
}