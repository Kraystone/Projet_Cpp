#include <iostream>
#include "Donjon.h"
#include "Item.h"
#include "Armes.h"
#include "Armures.h"
#include "Consommables.h"
#include "Cristaux.h"
#include "Joueur.h"
#include "Monstre.h"
#include "Boss.h"
#include "Jeu.h"
#include "Salle.h"
#include <vector>

#include "Barde.h"
#include "Guerrier.h"
#include "Mage.h"
#include "Elementaire.h"
#include "Loup.h"
#include "Zombie.h"
#include "Cerbere.h"
#include "Griffon.h"
#include "Minotaure.h"

using namespace std;

int main()
{
    Jeu* monJeu = new Jeu();

    //Pour r�cup�rer tous les items du jeu.
    vector<Item*> lesItems = monJeu->getTableauItems();

    //Fonction d'affichage, c'est juste pour voir que �a fonctionne.
    lesItems[0]->affichageItem();
    lesItems[1]->affichageItem();

    //Pour r�cup�rer toutes les entit�s du Jeu.
    vector<Entite*> lesEntites = monJeu->getTableauEntites();
    //Fonction d'affichage, c'est juste pour voir que �a fonctionne.
    lesEntites[0]->affichageEntite();
    cout << endl;

    //Pour r�cup�rer tous les donjons du Jeu.
    vector<Donjon*> lesDonjons = monJeu->getLesDonjons();
    //Affichage, c'est juste pour voir que �a fonctionne.
    cout << lesDonjons[0]->getNom() << endl;
    cout << lesDonjons[1]->getNom() << endl;

    //Algo pour le jeu
    int numDonjon = 0;
    int numSalle = 0;

    Joueur* joueur;

    for (int x = 0; x<3; x++){

    if ((lesEntites[x]->getNom()) == "Barde"){
        joueur = (Joueur*)lesEntites[x];
        joueur->setInventaire(lesItems[2]);


    } else if ((tableauJoueur[x]->getNom()) == "Guerrier"){


    } else if ((tableauJoueur[x]->getNom()) == "Mage"){

    }

    tableauJoueur[x]->affichageEntite();
    cout << endl;
}







    //===========================================================================================
    //===========================================================================================
    //===========================================================================================
    //===========================================================================================
    /*
    for (int i = 0; i<nbNomsArmes; i++){
        //Destructions des instances d'Armes
        delete tableauEpees[i];
        delete tableauArcs[i];
        delete tableauBaguettes[i];
        delete tableauDagues[i];
        delete tableauBatons[i];
        delete tableauPelles[i];
        delete tableauMarteaux[i];
    }
    for (int i = 0; i<nbNoms; i++){
        //Instantiation des Armures et Consommables
        delete tableauArmures[i];
        delete tableauPotionsSoin[i];
        delete tableauPotionsMana[i];

        delete tableauCristauxVie[i];
        delete tableauCristauxMana[i];
    }
    for (int i=0;i<3;i++){
        delete tableauJoueur[i];
        delete tableauMonstre[i];
        delete tableauBoss[i];
    }
    */
    delete monJeu;
        return 0;

}




