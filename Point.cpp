#include "Point.h"

Point::Point() : x(0.0), y(0.0), z(0.0) {}

Point::Point(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) {}

void Point::inputPoint() {
    std::cout << "Enter x coordinate: ";
    std::cin >> x;

    std::cout << "Enter y coordinate: ";
    std::cin >> y;

    std::cout << "Enter z coordinate: ";
    std::cin >> z;
}

void Point::displayPoint() const {
    std::cout << "(" << x << ", " << y << ", " << z << ")";
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}

void Point::saveToFile(const std::string& filename) const {
    std::ofstream outFile(filename);

    if (outFile.is_open()) {
        outFile << x << " " << y << " " << z;
        outFile.close();
    }
    else {
        std::cerr << "Error: Unable to open file for writing." << std::endl;
    }
}

void Point::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);

    if (inFile.is_open()) {
        inFile >> x >> y >> z;
        inFile.close();
    }
    else {
        std::cerr << "Error: Unable to open file for reading." << std::endl;
    }
}
