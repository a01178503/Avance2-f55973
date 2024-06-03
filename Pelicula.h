//
// Created by Victor Rene Martinez Pacheco on 02/06/24.
// Esto sirvio para ver un poco sobre el tema de herencia, y ayuda para repasar antes del examen.


#ifndef AVANCE2_F55973_PELICULA_H
#define AVANCE2_F55973_PELICULA_H


#include <string>
#include "Video.h"
#include <iostream>

using namespace std;
class Pelicula : public Video{

private:
    int oscares;

public:
    // constructores
    Pelicula();
    Pelicula(string _id, string _titulo, int _duracion, string _genero, int _calificacion, int _oscares);

    // getters
    int getOscares();


    // setters
    void setOscares(int _oscares);

    // metodos
    string str();

};



#endif //AVANCE2_F55973_PELICULA_H
