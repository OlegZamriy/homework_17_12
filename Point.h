#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>

class Point {
private:
    double x;
    double y;
    double z;

public:
    // ������������
    Point();
    Point(double xVal, double yVal, double zVal);

    // �������-�����
    void inputPoint();
    void displayPoint() const;

    // ��������
    double getX() const;
    double getY() const;
    double getZ() const;

    // ���������� �� ������������ �/� �����
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};

#endif // POINT_H
