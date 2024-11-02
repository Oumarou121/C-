#include <iostream>
#include "voiture.h"
#include "point.h"

using namespace std;

class Truc{
    public: Truc(){
        cout<< " ++ normal " <<endl;
    }
    ~Truc() {cout << " -- normal " << endl;}

};

int main(){

    // //Exercice 1
    // Voiture v1;
    // v1.initialise("AB 5032","Rouge", 250);
    // v1.affiche();

    // //Exercice2
    // //Value ++ normal
    // //Value -- normal
    // Truc * x;

    // Truc * x = new Truc();
    // //Value ++ normal

    // Truc * x = new Truc();
    // delete x;
    // //Value ++ normal
    // //Value -- normal

    //Exercice3
    Point p1; 
    Point p2(3, 4); 
    
    std::cout << "Point 1 : ";
    p1.afficher();
    std::cout << "Point 2 : ";
    p2.afficher();
    
    int dx, dy;
    cout<< "Donner dx : ";
    cin >>dx;
    cout<< "Donner dy : ";
    cin >>dy;
    p1.deplacer(dx, dy);
    std::cout << "Point 1 après déplacement : ";
    p1.afficher();

    int x, y;
    cout<< "Donner x : ";
    cin >>x;
    cout<< "Donner y : ";
    cin >>y;
    p1.saisir(x, y);
    std::cout << "Point 1 après saisie : ";
    p1.afficher();

    double dist = p1.distance(p2);
    std::cout << "Distance entre Point 1 et Point 2 : " << dist << std::endl;
    return 0;
}