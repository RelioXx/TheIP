//
//  Disponibilidad.cpp
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
//

#include "Disponibilidad.h"

Disponibilidad::Disponibilidad(){
    
	 tabla = (char**)malloc(DIAS * sizeof(char*));

	 for (int i = 0; i < SLOTS; i++) {
		 tabla[i] = (char *)malloc(SLOTS * sizeof(char));
	 }
}

Disponibilidad::~Disponibilidad(){
    
	delete[] tabla;
}

//getes y setes



bool Disponibilidad::getDisponibilidad(int dia, int slot){
    
	return tabla[dia][slot];
}

void Disponibilidad::setDisponibilidad(int dia, int slot){

	tabla[dia][slot] = 1;

}

char **Disponibilidad::getTabla(){

	return tabla;
}
