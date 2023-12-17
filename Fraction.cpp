#include "Fraction.h"
#include <iostream>

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

void Fraction::inputFraction() {
    std::cout << "Enter the numerator: ";
    std::cin >> numerator;

    do {
        std::cout << "Enter the denominator (non-zero): ";
        std::cin >> denominator;
    } while (denominator == 0);
}

void Fraction::displayFraction() const {
    std::cout << numerator << '/' << denominator;
}

Fraction Fraction::add(const Fraction& other) const {
    return Fraction(numerator * other.denominator + other.numerator * denominator,
        denominator * other.denominator);
}

Fraction Fraction::subtract(const Fraction& other) const {
    return Fraction(numerator * other.denominator - other.numerator * denominator,
        denominator * other.denominator);
}

Fraction Fraction::multiply(const Fraction& other) const {
    return Fraction(numerator * other.numerator, denominator * other.denominator);
}

Fraction Fraction::divide(const Fraction& other) const {
    if (other.numerator != 0) {
        return Fraction(numerator * other.denominator, denominator * other.numerator);
    }
    else {
        std::cerr << "Error: Division by zero. Returning a default fraction." << std::endl;
        return Fraction();
    }
}
