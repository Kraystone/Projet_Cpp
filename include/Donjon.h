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
<<<<<<< HEAD
        vector<Salle*> getSalles();
=======
        Salle* getSalles(int num);

>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
    protected:
        string nom;
        vector<Salle*> lesSalles;
    private:
};

#endif // DONJON_H
