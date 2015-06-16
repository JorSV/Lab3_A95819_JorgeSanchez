#include "stdafx.h"
#include "Persona.h"

Persona::Persona() {
	id = 0;
	nombre = " ";
}

Persona::Persona(int id, string nombre) {
	this->id = id;
	this->nombre = nombre;
}

Persona::~Persona() {
}

int Persona::getId() {
	return id;
}

string Persona::getNombre() {
	return nombre;
}

void Persona::setId(int id) {
	this->id = id;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}