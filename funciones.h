#pragma once
//Archivo de cabecera donde tengo mis funciones.

//Librerias
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include <string>
#include <stdio.h>

using namespace std;

//Prototipos de funciones

int ingresoInt();
bool tipoIntValido(string c);
void gotoxy(int x, int y);

//Funciones
//Funcion gotoxy()
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x; coord.Y = y;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hStdOut, coord);
}
//Fin funcion gotoxy()

//Funcion validarIngreso()
string validarIngreso(string dato)
{
	string cero = { '0' };
	for (int i = 0; i<dato.length(); i++)
	{
		if ((dato[i] != 48 && dato[i] != 49 && dato[i] != 50 && dato[i] != 51 && dato[i] != 52 && dato[i] != 53 && dato[i] != 54 && dato[i] != 55 && dato[i] != 56 && dato[i] != 57 && dato[i] != 61 && dato[i] != 45 && dato[i] != 42 && dato[i] != 47 && dato[i] != 43))
		{
			cout << "Dato invalido." << endl;
			dato = cero;
			break;
		}
	}
	return dato;

}
