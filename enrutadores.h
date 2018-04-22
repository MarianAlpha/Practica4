#ifndef ENRUTADORES_H
#define ENRUTADORES_H

#include <iostream>
#include <cstring>
#include <vector>
#include <string.h>

class enrutador{
private:
    char *router;
    int *mm;
    void nom_enru(char *);
    int *rutas(int *mm);

public:
    void eliminar_rut();
    void agregar_rut();
    void editar_cost();
};

class red{

};
#endif // ENRUTADORES_H
