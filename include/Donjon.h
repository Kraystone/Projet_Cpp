#ifndef DONJON_H
#define DONJON_H
#include <string>
#include <iostream>
#include <vector>
#include "Salle.h"

using namespace std;
using std::vector;

class Salle;

class Donjon
{
    public:
        Donjon();
        virtual ~Donjon();
//������������� methodes �������������
        void affichageDonjon();

//�������������� setter ��������������
        void setSalle();
        void setNom(string nom);

//�������������� getter ��������������
        string getNom();
        Salle* getSalles(int num);

    protected:
        string nom;
        vector<Salle*> lesSalles;
    private:
};

#endif // DONJON_H
