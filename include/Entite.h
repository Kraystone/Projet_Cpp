#ifndef ENTITE_H
#define ENTITE_H
#include <string>

using namespace std;
class Entite
{
    public:
        Entite();
        virtual ~Entite();
/* *********************************** Methodes ******************************************* */
        virtual void affichageEntite();
/* *********************************** Getter ********************************************* */
        string getNom();
        int getVie();
        int getVieMax();
        int getAttaque();
        int getResistance();
        int getInitiative();
        int getCoupCritique();
        int getEchecCritique();
        int getEsquive();
/* *********************************** Setter ********************************************* */
        void setNom(string nom);
        void setVie(int vie);
        void setVieMax(int vieMax);
        void setAttaque(int attaque);
        void setResistance(int resistance);
        void setInitiative(int initiative);
        void setCoupCritique(int coupCritique);
        void setEchecCritique(int echecCritique);
        void setEsquive(int esquive);
    protected:
        string nom;
        int vie;
        int vieMax;
        int attaque;
        int resistance;
        int initiative;
        int coupCritique;
        int echecCritique;
        int esquive;
    private:
};

#endif // ENTITE_H
