//
// Created by Victor Rene Martinez Pacheco on 02/06/24.
// En este apartado, lo unico que aplique de lo aprendido fue el virtual con polimorfismo

#ifndef AVANCE2_F55973_VIDEO_H
#define AVANCE2_F55973_VIDEO_H


#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Video{
protected:
    string id;
    string titulo;
    int duracion;
    string genero;
    double calificacion;

public:
    Video();
    Video(string _id, string _titulo, int _duracion, string _genero, double _calificacion);

    string getId();
    string getTitulo();
    int getDuracion();
    string getGenero();
    double getCalificacion();

    void setId(string _id);
    void setTitulo(string _titulo);
    void setDuracion(int _duracion);
    void setGenero(string _genero);
    void setCalificacion(double _calificacion);

    virtual string str();

};


#endif //AVANCE2_F55973_VIDEO_H
