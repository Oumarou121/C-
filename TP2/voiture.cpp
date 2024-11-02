#include "voiture.h"
#include <iostream>
#include <cstring>

using namespace std;

void Voiture::initialise(char *imat, char *color, float poids){
    strcpy(immatriculation, imat);
    strcpy(couleur, color);
    this->poids = poids;
}

void Voiture::affiche(void){
    message("Carateristiques de la voiture");
    cout<< endl << "Immatriculation: " << immatriculation << endl;
    cout<< endl << "Couleur: " << couleur << endl;
    cout<< endl << "Poids: " << poids << endl;
}

void Voiture::message(char * msg){
    cout<< msg << endl;
}

Voiture::Voiture(){
    memset(immatriculation, 0, 10);
    memset(couleur, 0, 20);
    poids = 0;
}