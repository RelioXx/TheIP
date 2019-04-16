//
//  Presentacion.hpp
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
// Actualizado por Álvaro Puente Lineas actualizadas: 5
//

#pragma once
#include <stdio.h>
#include "Profesor.h"



class Presentacion {
    
    int dia;
    int aula;
    int slot;
    int convocatoria;
    
public:
	Presentacion();
	~Presentacion();
	int añadirJurado(Profesor profesor);
	int quitarJurado(Profesor profesor);
	string GetJurados();
    //getes y setes
    int getDia();
    void setDia(int dia);
    int getAula();
    void setAula(int aula);
    int getSlot();
    void setSlot(int slot);
    int getConvocatoria();
    void setConvocatoria(int convocatoria);
    
};
