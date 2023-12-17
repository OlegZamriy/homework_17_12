#include "Point.h"

int main() {
    Point point;

    std::cout << "Enter point coordinates:\n";
    point.inputPoint();

    std::cout << "\nPoint coordinates:\n";
    point.displayPoint();

    point.saveToFile("point_data.txt");
    std::cout << "\nPoint data saved to file.\n";

    Point loadedPoint;
    loadedPoint.loadFromFile("point_data.txt");

    std::cout << "\nLoaded point coordinates:\n";
    loadedPoint.displayPoint();

    return 0;
}
