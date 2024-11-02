#ifndef VOITURE_H
#define VOITURE_H

class Voiture{
    public:
        Voiture();
        void initialise(char *, char *, float);
        void affiche(void);
    private:
        char immatriculation[10];
        char couleur[20];
        float poids;
        void message(char *);
};

#endif