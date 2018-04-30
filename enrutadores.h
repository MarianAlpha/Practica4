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
    typedef vector<char> &router;
    void nom_enru(char *);
    void rutas(map<char, int> &tabla, vector<char> &router);

public:
    void eliminar_rut(map<char, int> &tabla);
    void agregar_rut(map<char, int> &tabla);
    void editar_cost(map<char, int> &tabla);
};

class redes{
private:
    void red();


};
#endif // ENRUTADORES_H
