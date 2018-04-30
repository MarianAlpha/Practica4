#include <iostream>
#include "enrutadores.h".h"
#include<iostream>
#include<windows.h>
#include<iostream>
#include<windows.h>

using namespace std;
int main(){
    grafo g;
    g.inicializa();
    int opc;
    g.insertavertice("A");
    g.insertavertice("B");
    g.insertavertice("C");
    g.insertavertice("D");
    g.insertavertice("E");
    g.insertavertice("f");
     g.insertaarista(g.getvertice("A"),g.getvertice("C"),500);
     g.insertaarista(g.getvertice("A"),g.getvertice("D"),100);
     g.insertaarista(g.getvertice("A"),g.getvertice("f"),500);
     g.insertaarista(g.getvertice("B"),g.getvertice("E"),300);
     g.insertaarista(g.getvertice("B"),g.getvertice("C"),600);
     g.insertaarista(g.getvertice("C"),g.getvertice("f"),800);
     g.insertaarista(g.getvertice("D"),g.getvertice("B"),800);
     g.insertaarista(g.getvertice("D"),g.getvertice("f"),100);
     g.insertaarista(g.getvertice("E"),g.getvertice("A"),100);
     g.insertaarista(g.getvertice("E"),g.getvertice("C"),200);
     do{
         system("cls");
                 cout<<"1. ingresar vertice"<<endl;
                 cout<<"2. ingresar arista"<<endl;
                 cout<<"3. lista de adyacencia"<<endl;
                 cout<<"4. tamano"<<endl;


                 cout<<"escoja"<<endl;
                 cin>>opc;
                 switch (opc) {
                 case 1:
                 {string nombre;
                     system("cls");
                     cout<<"ingrese elnombre del vertice"<<endl;
                     cin.ignore();
                     getline(cin,nombre,'\n');
                     g.insertavertice(nombre);
                     cin.get();
                     cin.get();
                     break;
                 }
                case 2:{
                 string origen,destino;
                 int peso;
                 if(g.vacio()){
                     cout<<"el grafo esta vacio"<<endl;
                     }
                 else{
                     cout<<"ingrese el nombre del vertice de origen"<<endl;
                     cin.ignore();
                     getline(cin,origen,'\n');
                     cout<<"ingrese peso"<<endl;
                     cin>>peso;
                     if(g.getvertice(origen)==NULL ||g.getvertice(destino)==NULL){
                         cout<<"uno de los vertices no es valido"<<endl;
                     }
                     else{
                         g.insertaarista(g.getvertice(origen),g.getvertice(destino),peso);
                     }
                 }
                 cin.get();
                 cin.get();
                 break;}

                 case 3:{
                     system("cls");
                     if(g.vacio()){
                         cout<<"el grafo esta vacio"<<endl;
                     }
                     else {
                         g.listaadyayacencia();
                     }
                     cin.get();
                     cin.get();
                     break;
                 }
                 case 4:{
                     system("cls");
                     if(g.vacio()){
                         cout<<"el grafo esta vacio"<<endl;
                     }
                     else {
                         cout<<"tamano;"<<g.tamano()<<endl;
                     }
                     cin.get();
                     cin.get();
                     break;
                 }
                 }
     }
}
