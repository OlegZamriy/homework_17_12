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
    // Конструктори
    Point();
    Point(double xVal, double yVal, double zVal);

    // Функції-члени
    void inputPoint();
    void displayPoint() const;

    // Аксесори
    double getX() const;
    double getY() const;
    double getZ() const;

    // Збереження та завантаження в/з файлу
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};

#endif // POINT_H
