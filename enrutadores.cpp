#include "enrutadores.h"
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <map>
#include<time.h>
#include <vector>

using namespace std;

void enrutador::rutas(map<char, int> &tabla, vector<char> &router)
{
    int precio;
    char a;
    srand (time(NULL));
    for(int i=0; i<4; i++){
        a= 65 + rand() % (91-65);
        router.push_back(a);
    }

    for(int i=0; i<4; i++){
        precio=rand()%15;
        a=router[i];
        tabla[a]=precio;
    }
}

void enrutador::eliminar_rut(map<char, int> &tabla){
    char x;//eli
    string y;//eli

    cout<<"ingresela el elemento que quiere eliminar"<<endl;
    cin>>x;
    map<char, int>::iterator p = tabla.find(x);
    if(p != tabla.end()){
        cout << "se elimino el elemento " << x << " = " << p->second << endl;
        tabla.erase(x);}
    else {cout << x << " no existe en el map"<<endl;}
}

void enrutador::editar_cost(map<char, int> &tabla){
    char a;
    int price,k=1;
    while(k){
        cout<<" Ingrese el elemento que desea editar: "<<endl;
        cin>>a;
        cout<<"Ingrese el nuevo precio: "<<endl;
        cin>>price;
        map<char, int>::iterator p = tabla.find(a);
        if(p != tabla.end()){
            tabla[a]=price;
            break;
        }
        else {
            cout<<"Este elemento no existe, por favor ingrese un valor valido: "<<endl;
            k=1;
        }
    }
}
