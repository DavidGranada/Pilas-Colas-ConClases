#pragma warning(disable:4996)

#include "NodoPilas.h"




NodoPilas::NodoPilas()
{
	nombrePilas = " ";
	siguiente = NULL;
}

void NodoPilas::setNombrePilas(string nombrePilas)
{
	this->nombrePilas = nombrePilas;
}

void NodoPilas::setSiguiente(NodoPilas *siguiente)
{
	this->siguiente = siguiente;
}

string NodoPilas::getNombrePilas()
{
	return nombrePilas;
}

NodoPilas *NodoPilas::getSiguiente()
{
	return siguiente;
}

void NodoPilas::MostrarPila(NodoPilas *cabezaPilas, int contarNodosPilas)
{
	NodoPilas *aux;
	aux = cabezaPilas;
	int posicion = 1;

	if ((aux->getNombrePilas().compare(" ") == 0))
	{
		cout << "\nPila vacia." << endl;
	}
	else
	{
		while (aux != NULL)
		{
			printf("->  %d\t%s\n",posicion,aux->getNombrePilas().c_str());
			//printf("-> %d\t%s", posicion, aux->getNombrePilas());
			//cout << "-> " << posicion << "\t" << aux->getNombrePilas() << endl;
			aux = aux->getSiguiente();
			posicion++;
		}
	}

	cout << "\nNumero de nodos: " << contarNodosPilas << endl;
}

//PUSH
void NodoPilas::pushPilas(NodoPilas **cabezaPilas, string nombrePilas, int &contarNodosPilas)
{
	NodoPilas *aux, *aux2, *nuevo;

	aux = *cabezaPilas;
	aux2 = aux->getSiguiente();
	

	if ( (aux->getNombrePilas().compare(" ") == 0)  )
	{
		//nuevo = new Nodo();
		aux->setNombrePilas(nombrePilas);
		aux->setSiguiente(NULL);
		*cabezaPilas = aux;
		contarNodosPilas++;
	}
	else
	{
			nuevo = new NodoPilas();
			nuevo->setNombrePilas(nombrePilas);
			nuevo->setSiguiente(*cabezaPilas);
			//aux->setSiguiente(nuevo);
			*cabezaPilas = nuevo;
			contarNodosPilas++;
	}
}


//buscarPila()
int NodoPilas::buscarPila(NodoPilas *cabezaPilas,string nombrePilas)
{
	NodoPilas *aux;
	aux = cabezaPilas;
	int bandera = 0;

	while (aux != NULL)
	{
		if (aux->getNombrePilas() == " ")
		{
			bandera = 0;
			aux = aux->getSiguiente();
		}
		else
		{

			if ((aux->getNombrePilas().compare(nombrePilas)) == 0)
			{
				
				bandera++;
				break;
			}
			//cout << "No se puede ingresar el nombre, nombre Repetido, No se apilo el nombre." << endl;
			aux = aux->getSiguiente();
		}
	}
	return bandera;

}//Fin buscarPila()
