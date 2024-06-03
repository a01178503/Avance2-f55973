//
// Created by Victor Rene Martinez Pacheco on 02/06/24.
//

#include "Pelicula.h"
Pelicula::Pelicula(){
    oscares=0;
}
Pelicula::Pelicula(string _id, string _titulo, int _duracion, string _genero, int _calificacion, int _oscares)
        : Video(_id, _titulo, _duracion, _genero, _calificacion){
    oscares = _oscares;
}

int Pelicula::getOscares(){
    return oscares;
}

void Pelicula::setOscares(int _oscares){
    oscares = _oscares;
}

string Pelicula::str(){
    return id + ' ' + titulo + ' ' + to_string(duracion) + ' ' + genero + ' ' + to_string(calificacion) + ' ' + to_string(oscares);
}
