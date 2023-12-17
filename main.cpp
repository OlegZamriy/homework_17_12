#include "Fraction.h"
#include<iostream>

int main() {
    Fraction fraction1, fraction2, result;

    std::cout << "Enter the first fraction:\n";
    fraction1.inputFraction();

    std::cout << "\nEnter the second fraction:\n";
    fraction2.inputFraction();

    result = fraction1.add(fraction2);
    std::cout << "Sum: ";
    result.displayFraction();
    std::cout << std::endl;

    result = fraction1.subtract(fraction2);
    std::cout << "Difference: ";
    result.displayFraction();
    std::cout << std::endl;

    result = fraction1.multiply(fraction2);
    std::cout << "Product: ";
    result.displayFraction();
    std::cout << std::endl;

    result = fraction1.divide(fraction2);
    std::cout << "Quotient: ";
    result.displayFraction();
    std::cout << std::endl;

    return 0;
}
