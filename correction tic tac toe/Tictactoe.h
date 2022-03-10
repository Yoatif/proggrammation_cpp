#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "Grille.h"
#include <string>

class Tictactoe : public jeuGrille {

    

    public:
        Tictactoe();
        void afficheGrille();
        void ajouteSymbole(int x, int y);
        bool testeVictoireVerticale();
        bool testeVictoireHorizontale();
        bool testeVictoireDiagonale();
        bool testeJeuNul();

        void finTour();

};

#endif