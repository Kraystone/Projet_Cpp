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
//�������������� getter ��������������
        int getNum();

    protected:
    private:
        int num;
};

#endif // SALLE_H
