#ifndef ANIMAUX_H
#define ANIMAUX_H

#include <string>

class Animaux {

    protected:

    std::string _nom;
    std::string _espece;
    std::string _cri;
    int _faim;

        

    public:
        Animaux();
        Animaux(std::string name, std::string specie, std::string cri);
        std::string getNom();
        std::string getEspece();
        std::string getCri();
    
    void setName (std:: string nouveauNom);
        

        

};

#endif