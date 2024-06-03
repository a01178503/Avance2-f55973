//
// Created by Victor Rene Martinez Pacheco on 02/06/24.
// Esta clase sirvio como recordatorio de lo visto anteriormente en los temas de semestres pasados

#ifndef AVANCE2_F55973_EPISODIO_H
#define AVANCE2_F55973_EPISODIO_H

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Episodio{
private:
    string titulo;
    int temporada;
    int calificacion;

public:
    // constructores
    Episodio();
    Episodio(string _titulo, int _temporada, int _calificacion);

    // getters
    string getTitulo();
    int getTemporada();
    int getCalificacion();

    // setters
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(int _calificacion);

    // metodos
    string str();

};




#endif //AVANCE2_F55973_EPISODIO_H
