//
//  Grado.h
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
//

#pragma once

#include <stdio.h>
#include "Usuario.h"


class Grado {
    
    string nombre;
    
public:
    Grado(string);
    ~Grado();
    
    /*
     deberiamos tener una lista de alumnos y profesores por cada grado?? como se organizarian los headers en ese caso??
     
     Alumno *GetAlumnos();
     Profesor *GetProfesores();
     
     */


	string getNombre();
	void setNombre(string);
};
