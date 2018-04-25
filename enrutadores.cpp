#include "enrutadores.h"
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <map>
#include<time.h>
#include <vector>

using namespace std;

int enrutador::rutas(tabla, router)
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
    return tabla;
}

void eliminar_rut(){
    char x;//eli
    string y;//eli

    cout<<"ingresela contraseña del elemento que quiere eliminar"<<endl;
    cin>>x;
    map<char, int>::iterator p = tabla.find(x);
    if(p != tabla.end()){
        cout << "se elimino el elemento " << x << " = " << p->second << endl;
        tabla.erase(x);}
    else {cout << x << " no existe en el map"<<endl;}
}
