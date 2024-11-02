#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

class Point {
    public:
        Point();                       
        Point(double x, double y);     
        Point(const Point& p);        
        void deplacer(double dx, double dy); 
        void afficher() const;               
        void saisir(double x, double y);     
        double distance(const Point& autre) const; 

    private:
        double x, y;
};

#endif
