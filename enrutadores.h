#ifndef ENRUTADORES_H
#define ENRUTADORES_H

#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <string.h>

using namespace std;
class arista;

class vertice
{
    vertice *sig;
    arista *ady;
    string nombre;
    friend class grafo;
};

class arista{
    arista *sig;
    vertice *ady;
    int peso;
    friend class grafo;
};
class grafo{
    vertice *h;
public:
    void inicializa();
    bool vacio();
    int tamano();
    vertice *getvertice(string nombre);
    void insertaarista(vertice *origen, vertice *destino, int peso);
    void insertavertice(string nombre);
    void listaadyayacencia();
    void eliminararista(vertice *origen, vertice *destino);
    void anular();
    void eliminarvertice(vertice *vert);

};


#endif // ENRUTADORES_H
