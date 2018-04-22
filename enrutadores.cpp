#include "enrutadores.h"
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <map>
#include<time.h>
#include <vector>

using namespace std;

void enrutador::nom_enru(char *a){
    router=a;
}

int *enrutador::rutas(int *mm)
{
    vector <char> router;
    map <char, int> tabla;
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
