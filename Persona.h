#pragma once

#include <iostream>
using namespace std;

class Persona {

private:
	int id;
	string nombre;

public:
	Persona();
	Persona(int, string);
	~Persona();

	void setId(int);
	void setNombre(string);
	int getId();
	string getNombre();
};