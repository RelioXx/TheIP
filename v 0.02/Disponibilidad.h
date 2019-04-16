//
//  Disponibilidad.hpp
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
//

#pragma once

#include <stdio.h>
#include "Usuario.h"
#define DIAS 7
#define SLOTS 5


class Disponibilidad {
    
    //tabla sera una matriz (posicion [0][0] = dia 1 slot 1, [0][1] = dia 1 slot 2, etc..)
    // 1 si tiene disponibilidad en y 0 si no la tiene
    char **tabla;

    
public:
    
    Disponibilidad();
    ~Disponibilidad();
    
    //getes y setes
    
	bool getDisponibilidad(int dia, int slot);
	
	void setDisponibilidad(int dia, int slot);


    
    char **getTabla();
    //por si quiere importar disponibilidad desde un csv -> feature solo si lo vemos viable hacer
    // void setTabla(string **tabla);
};
