#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Конструктори
    Fraction();
    Fraction(int num, int denom);

    // Функції-члени
    void inputFraction(); // Введення значень для чисельника та знаменника
    void displayFraction() const; // Виведення дробу
    Fraction add(const Fraction& other) const; // Додавання
    Fraction subtract(const Fraction& other) const; // Віднімання
    Fraction multiply(const Fraction& other) const; // Множення
    Fraction divide(const Fraction& other) const; // Ділення
};

#endif // FRACTION_H
