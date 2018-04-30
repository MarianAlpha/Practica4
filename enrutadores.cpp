#include "enrutadores.h"
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <map>
#include<time.h>
#include <vector>

void grafo::inicializa(){
    h=NULL;
}
bool grafo::vacio(){
    if(h==NULL){
        return true;
    }
    else {
        return false;
    }
}

int grafo::tamano()
{
    int cont =0;
    vertice *aux;
    aux = h;
    while (aux != NULL) {
        cont++;
        aux = aux->sig;
        }
    return cont;
}
vertice *grafo::getvertice(string nombre){
    vertice *aux;
    aux=h;
    while (aux !=NULL) {
        if (aux->nombre==nombre){
            return aux;
        }
        aux =aux->sig;

    }
    return NULL;
}

void grafo::insertavertice(string nombre){
    vertice *nuevo =new vertice;
    nuevo->nombre = nombre;
    nuevo->ady =NULL;
    nuevo->sig =NULL;
    if(vacio())
    {h =nuevo;

    }
    else {
        vertice *aux;
        aux=h;
        while (aux->sig !=NULL) {
            aux = aux->sig;

        }
        aux->sig = nuevo;
    }

}
void grafo::insertaarista(vertice *origen, vertice *destino, int peso){
    arista *nueva =new arista;
    nueva->peso =peso;
    nueva->sig=NULL;
    nueva->ady=NULL;
    arista *aux;
    aux = origen->ady;
    if (aux ==NULL){
        origen->ady = nueva;
        nueva->ady=destino;
    }
    else{
        while(aux->sig !=NULL){
            aux=aux->sig;
        }
        aux->sig =nueva;
        nueva->ady=destino;
    }

}
