#ifndef ENRUTADORES_H
#define ENRUTADORES_H

#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <string.h>

using namespace std;
class enrutador{
private:
    typedef map<char, int> &tabla;
    typedef vector<char>&router;
    int *mm;
    void nom_enru(char *);
    int rutas(tabla, router );

public:
    void eliminar_rut();
    void agregar_rut();
    void editar_cost();
};

class redes{
private:
    void red();

};
#endif // ENRUTADORES_H
