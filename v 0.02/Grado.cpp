//
//  Grado.cpp
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
//

#include "Grado.h"

Grado::Grado(string nombre) {
	
	this->nombre = nombre;

}

Grado::~Grado() {

}

string Grado::getNombre() {
	return nombre;
}
void Grado::setNombre(string nombre) {
	this->nombre = nombre;
}
