#include "NodoColas.h"

NodoColas::NodoColas()
{
	nombreColas = " ";
	siguiente = NULL;
}

void NodoColas::setNombreColas(string nombreColas)
{
	this->nombreColas = nombreColas;
}

void NodoColas::setSiguiente(NodoColas *siguiente)
{
	this->siguiente = siguiente;
}

string NodoColas::getNombreColas()
{
	return nombreColas;
}

NodoColas *NodoColas::getSiguiente()
{
	return siguiente;
}

void NodoColas::MostrarColas(NodoColas *cabezaColas, int contarNodosColas)
{
	NodoColas *aux;
	aux = cabezaColas;
	int posicion = 1;

	if ( (aux->getNombreColas().compare(" ") == 0) )
	{
		cout << "\Cola vacia." << endl;
	}
	else
	{
		while (aux != NULL)
		{
			//printf("->  %d\t%s\n", posicion, aux->getNombreColas());
			printf("-> %d\t%s \n", posicion, aux->getNombreColas().c_str());
			aux = aux->getSiguiente();
			posicion++;
		}
	}

	cout << "\nNumero de nodos: " << contarNodosColas << endl;
}

//PUSH
void NodoColas::pushColas(NodoColas **cabezaColas, string nombreColas, int &contarNodosColas)
{
	NodoColas *aux, *aux2, *nuevo;

	aux = *cabezaColas;
	aux2 = aux->getSiguiente();

	if ((aux->getNombreColas().compare(" ") == 0))
	{
		//nuevo = new Nodo();
		aux->setNombreColas(nombreColas);
		aux->setSiguiente(NULL);
		*cabezaColas = aux;
		contarNodosColas++;
	}
	else
	{
		nuevo = new NodoColas();
		nuevo->setNombreColas(nombreColas);
		nuevo->setSiguiente(*cabezaColas);
		//aux->setSiguiente(nuevo);
		*cabezaColas = nuevo;
		contarNodosColas++;
	}
}


//buscarCola()
int NodoColas::buscarCola(NodoColas *cabezaColas, string nombreColas)
{
	NodoColas *aux;
	aux = cabezaColas;
	int bandera = 0;

	while (aux != NULL)
	{
		if (aux->getNombreColas() == " ")
		{
			bandera = 0;
			aux = aux->getSiguiente();
		}
		else
		{

			if ((aux->getNombreColas().compare(nombreColas)) == 0)
			{

				bandera++;
				break;
			}
			//cout << "No se puede ingresar el nombre, nombre Repetido, No se encolo el nombre." << endl;
			aux = aux->getSiguiente();
		}
	}
	return bandera;

}//Fin buscarCola()
