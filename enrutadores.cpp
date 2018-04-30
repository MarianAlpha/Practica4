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

void grafo::listaadyayacencia(){
    vertice *vertiaux;
    arista *arisaux;
    vertiaux =h;
    while(vertiaux !=NULL)
    {
        cout<<vertiaux->nombre<<"->";
        arisaux =vertiaux->ady;
        while (arisaux!=NULL) {
            cout<<arisaux->ady->nombre<<"->";
            arisaux = arisaux->sig;
        }
        vertiaux =vertiaux->sig;
        cout<<endl;
    }
}
void grafo::anular(){
    vertice*aux;
    while (h!=NULL) {
        aux=h;
        h=h->sig;
        delete(aux);
        }
}
void grafo::eliminararista(vertice *origen, vertice *destino){
    int band =0;
    arista *actual,*anterior;
    actual =origen->ady;
    if(actual ==NULL){
        cout<<"el vertice origen no tiene aristas"<<endl;
    }
    else if(actual->ady==destino){
        origen->ady=actual->sig;
        delete(actual);
         }
    else {
        while (actual->ady != destino) {
            if(actual->ady ==destino){
                band =1;
                anterior->sig =actual->sig;
                delete(actual);
                break;
                }
            anterior =actual;
            actual =actual->sig;
        }
        if(band==0){
            cout<<"esos dos verticesno estan conectados"<<endl;
        }

    }
}
void grafo::eliminarvertice(vertice *vert){
    vertice *actual, *anterior;
    arista *aux;
    actual =h;
    while (actual!=NULL) {
        aux = actual->ady;
        while (aux !=NULL) {
            if(aux->ady ==vert){
                eliminararista(actual,aux->ady);
                break;
            }
            aux =aux->sig;
        }
        actual =actual->sig;
    }
    actual=h;
    if(h==vert){
        h=h->sig;
        delete(actual);
    }
    else{
        while (actual !=vert) {
            anterior=actual;
            actual =actual->sig;
            }
        anterior->sig=actual->sig;
        delete(actual);
    }
}
