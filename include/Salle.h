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
<<<<<<< HEAD
=======
        void setEnvironnement(int environnement);
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
//�������������� getter ��������������
        int getNum();
        int getEnvironnement();

    protected:
    private:
        int num;
<<<<<<< HEAD
=======
        int environnement;
>>>>>>> 66bdc9335605420ca4ae9816da616aeec3817aaf
};

#endif // SALLE_H
