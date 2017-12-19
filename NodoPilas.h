#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class NodoPilas
{
private:
	string nombrePilas;
	NodoPilas *siguiente;
public:
	NodoPilas();
	void setNombrePilas(string nombrePilas);
	void setSiguiente(NodoPilas *siguiente);
	string getNombrePilas();
	NodoPilas *getSiguiente();
	void pushPilas(NodoPilas **cabezaPilas, string nombrePilas, int &contarNodosPilas);
	void MostrarPila(NodoPilas *cabezaPilas, int contarNodosPilas);
	int buscarPila(NodoPilas *cabezaPilas, string nombrePilas);

};

