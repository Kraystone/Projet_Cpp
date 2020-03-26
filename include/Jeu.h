#ifndef JEU_H
#define JEU_H
#include <vector>
#include "Donjon.h"
#include "Item.h"
#include "Entite.h"

class Jeu
{
    public:
        Jeu();
        virtual ~Jeu();

//================setter==================
    void setLesEntites(vector<Entite*> entite);
    void setLesDonjons(vector<Donjon*> donjon);
    void setLesItems(vector<Item*> item);
    void setDifficulty(int difficulty);

//================getter==================
    vector<Entite*> getEntites();
    vector<Donjon*> getDonjons();
    vector<Item*> getItems();
    int getDifficulty();



    protected:

    private:
        vector<Entite*> lesEntites;
        vector<Donjon*> lesDonjons;
        vector<Item*> lesItems;
        int difficulty;
};

#endif // JEU_H
