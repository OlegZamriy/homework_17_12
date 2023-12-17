#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // ������������
    Fraction();
    Fraction(int num, int denom);

    // �������-�����
    void inputFraction(); // �������� ������� ��� ���������� �� ����������
    void displayFraction() const; // ��������� �����
    Fraction add(const Fraction& other) const; // ���������
    Fraction subtract(const Fraction& other) const; // ³�������
    Fraction multiply(const Fraction& other) const; // ��������
    Fraction divide(const Fraction& other) const; // ĳ�����
};

#endif // FRACTION_H
