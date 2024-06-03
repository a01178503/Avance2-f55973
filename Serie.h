//
// Created by Victor Rene Martinez Pacheco on 02/06/24.
//

/*
- Nombre:Victor Rene Martinez
- Matricula: A01178503
- Carrera: IDM
- Fecha: 22 de mayo 2024
- ¿Qué aprendí en el desarrollo de esta clase? En esta clase, si aprendi un poco mas sobre herencia, y repase sobre la composicion que
tienen estas clases.
*/


#ifndef AVANCE2_F55973_SERIE_H
#define AVANCE2_F55973_SERIE_H


#include "Video.h"
#include "Episodio.h"

#include <iostream>
#include <string>
using namespace std;


class Serie : public Video{
private:
    Episodio episodios[5];
    int cantidad;

public:
    Serie();
    Serie(string _id, string _titulo, int _duracion, string _genero, int _calificacion);


    Episodio getEpisodio(int posicion);
    int getCantidad();

    void setEpisodio(int posicion, Episodio episodio);
    void setCantidad(int _cantidad);


    double calculaPromedio();
    void agregaEpisodio(Episodio episodio);
    void calculaDuracion();

    string str();

};


#endif //AVANCE2_F55973_SERIE_H
