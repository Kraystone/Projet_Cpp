#ifndef SALLE_H
#define SALLE_H
#include <string>
#include <iostream>
#include "Donjon.h"
#include "Monstre.h"
#include "couleur.h"
using namespace std;

class Salle
{
    public:
        Salle();
        virtual ~Salle();
//������������� methodes �������������
        void affichageSalle();
        void mettreEnCouleur(int t, int f);
//�������������� setter ��������������
        void setNum(int num);
        void setEnvironnement(int environnement);
        void setLesMonstresDeLaSalle(Monstre* monstre);

//�������������� getter ��������������
        int getNum();
        int getEnvironnement();
        vector<Monstre*> getLesMonstresDeLaSalle();
        Monstre* getMonstre(int indexMonstre);

    protected:
    private:
        int num;
        int environnement;
        vector<Monstre*> lesMonstresDeLaSalle;
        couleur color;

};

#endif // SALLE_H
