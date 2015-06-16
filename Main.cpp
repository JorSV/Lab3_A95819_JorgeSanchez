#include "stdafx.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"
#include "ArbolBinario.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	srand((unsigned int) time(NULL));

	ArbolBinario arbolDouble;
	arbolDouble.insertarElemento(new ElementoDouble(25.36));
	arbolDouble.insertarElemento(new ElementoDouble(45.58));
	arbolDouble.insertarElemento(new ElementoDouble(14.89));
	arbolDouble.insertarElemento(new ElementoDouble(20.35));
	arbolDouble.insertarElemento(new ElementoDouble(1.56));
	arbolDouble.insertarElemento(new ElementoDouble(2.0));
	cout << arbolDouble << endl;

	ArbolBinario arbolPersonas;
	arbolPersonas.insertarElemento(new ElementoPersona(123, "Juan"));
	arbolPersonas.insertarElemento(new ElementoPersona(456, "Pedro"));
	arbolPersonas.insertarElemento(new ElementoPersona(789, "Luis"));
	arbolPersonas.insertarElemento(new ElementoPersona(124, "Mario"));
	cout << arbolPersonas << endl;
		
	system("pause");
	return 0;
}