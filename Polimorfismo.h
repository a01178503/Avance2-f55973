//
// Created by Victor Rene Martinez Pacheco on 02/06/24.
//

#ifndef AVANCE2_F55973_POLIMORFISMO_H
#define AVANCE2_F55973_POLIMORFISMO_H

#include <typeinfo>
#include <iostream>
#include <sstream>
#include <fstream>
#include "Pelicula.h"
#include "Serie.h"
#include "Episodio.h"
#include "Video.h"
#include <stdio.h>
using namespace std;

const int MAX_VIDEOS = 100;

class Polimorfismo{
private:
    Video* arrPtrVideos[MAX_VIDEOS];
    int cantidad;

public:
    Polimorfismo();
    void leerArchivo(string _nombre);

    // setters
    void setPtrVideo(int index, Video *video);
    void setCantidad(int _cantidad);

    Video* getPtrVideo(int _index);
    int getCantidad();

    void reporteInventario();
    void reporteCalificacion(double calificacion);
    void reporteGenero(string _genero);
    void reportePeliculas();
    void reporteSeries();

};


#endif //AVANCE2_F55973_POLIMORFISMO_H
