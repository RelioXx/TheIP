//
//  TFG.cpp
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
// Actualizado por Álvaro Puente Lineas actualizadas: 6
//
#include "TFG.h"

TFG::TFG(string titulo, Profesor * tutor)
{
	this->titulo = titulo;

	this->tutor = tutor;
}

TFG::TFG()
{
}

TFG::~TFG()
{
}




void TFG::crearPresentacion(int dia, int aula, int slot, int convocatoria){

	presentacion.setDia(dia);
	presentacion.setAula(aula);
	presentacion.setSlot(slot);
	presentacion.setConvocatoria(convocatoria);
}
void TFG::eliminarPresentacion(){

	presentacion.setDia(-1);
	presentacion.setAula(-1);
	presentacion.setSlot(-1);
	presentacion.setConvocatoria(-1);
}
Presentacion TFG::getPresentacion(){

	return presentacion;
}
void TFG::asignarTutor(Profesor *tutor){
	
	this->tutor = tutor;
}
/*
int TFG::getNtutores() {


}

void TFG::setNtutores(int) {


}
*/
void TFG::eliminarTutor(){
	tutor = NULL;
}
void TFG::modificarTutor(Profesor *tutor) {

	this->tutor = tutor;
}
Profesor *TFG::getTutor() {

	return tutor;
}

//getes y setes
string TFG::getTitulo() {
	
	return titulo;
}

void TFG::setTitulo(string titulo) {

	this->titulo = titulo;
}
