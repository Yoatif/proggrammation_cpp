#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>

class Personnage{

    private:

        // lvl HP MP expérience
        // FORCE Intélligence Agilité Chance
        // dégat, dégat magique, esquive, drop
        // statistique visible en combat
        public :
        int _lvl;
        int _lvlMax = 100;
        int _HP;
        int _HPMax = 9999;
        int _Mp;
        int _MPMax = 999;
        int _damage;
        int _magicDamage;

        private:
        int _xp;
        int _escape;

        public:
        int _strengh;
        int _intelligence;
        int _agility;
        int _luck;

    public:
        char getLvl(int _lvl,);
                //renvoie le niveau du joueur

        void setLvl(int _lvl, int nouveauLvl, int _xp); 
        // ajoute les points d'xp
        // si xp 
        

        void resetContent();
        // remet la grille à 0

        void affiche();
        // affiche la grille conformément au système de coordonnées
        

        
        // initialise la grille avec les cases toutes à 0
        };

#endif