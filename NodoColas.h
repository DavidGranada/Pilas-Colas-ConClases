#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class NodoColas
{
private:
	string nombreColas;
	NodoColas *siguiente;
public:
	NodoColas();
	void setNombreColas(string nombreColas);
	void setSiguiente(NodoColas *siguiente);
	string getNombreColas();
	NodoColas *getSiguiente();
	void pushColas(NodoColas **cabezaColas, string nombreColas, int &contarNodosColas);
	void MostrarColas(NodoColas *cabezaColas, int contarNodosColas);
	int buscarCola(NodoColas *cabezaColas, string nombreColas);
};

