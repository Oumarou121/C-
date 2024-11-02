#include "point.h"

Point::Point() : x(0), y(0) {}

Point::Point(double x, double y) : x(x), y(y) {}

Point::Point(const Point& p) : x(p.x), y(p.y) {}

void Point::deplacer(double dx, double dy) {
    x += dx;
    y += dy;
}

void Point::afficher() const {
    std::cout << "Les coordonnées du point sont : (" << x << ", " << y << ")" << std::endl;
}

void Point::saisir(double x, double y) {
    this->x = x;
    this->y = y;
}

double Point::distance(const Point& autre) const {
    return std::sqrt(std::pow(autre.x - x, 2) + std::pow(autre.y - y, 2));
}
