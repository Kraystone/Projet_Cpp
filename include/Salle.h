#ifndef SALLE_H
#define SALLE_H
#include <string>
#include <iostream>
#include "Donjon.h"
using namespace std;

class Salle
{
    public:
        Salle();
        virtual ~Salle();
//������������� methodes �������������
        void affichageSalle();
//�������������� setter ��������������
        void setNum(int num);

        void setEnvironnement(int environnement);

//�������������� getter ��������������
        int getNum();
        int getEnvironnement();

    protected:
    private:
        int num;
        int environnement;

};

#endif // SALLE_H
