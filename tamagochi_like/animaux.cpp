#ifndef ANIMAUX_CPP
#define ANIMAUX_CPP

#include "animaux.h"

#include <iostream>
#include <string>

    Animaux::Animaux() : _nom("Jean-Claude"), _espece("noob"), _cri("ragequit"), _faim(0) {}
    Animaux::Animaux(std::string name, std::string specie, std::string cri) : 
        _nom(name), _espece(specie), _cri(cri), _faim(0) {}

    std::string Animaux::getNom(){
        return _nom;
    }
    std::string Animaux::getEspece(){
        return _espece;
    }
    std::string Animaux::getCri(){
        return _cri;
    }

    void Animaux::setName(std::string nouveauNom){
        _nom = nouveauNom;
    }
    
#endif