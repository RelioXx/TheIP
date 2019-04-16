//
//  TFG.hpp
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
//

#pragma once
#include <stdio.h>
#include "Usuario.h"
#include "Presentacion.h"
#include "Profesor.h"


class TFG {
    
    string titulo;
    Presentacion presentacion;
    Profesor *tutor;
	//int nTutores;
    
public:
    
    TFG(string titulo,Profesor *tutor);
	TFG();
    ~TFG();
    void crearPresentacion(int dia, int aula, int slot, int convocatoria);
    void eliminarPresentacion();
    Presentacion getPresentacion();
    void asignarTutor(Profesor*);
    void eliminarTutor();
    void modificarTutor(Profesor*);
    Profesor *getTutor();
    
    //getes y setes
    string getTitulo();
    void setTitulo(string titulo);
	/*
	int getNtutores();
	void setNtutores(int);
	*/
};
