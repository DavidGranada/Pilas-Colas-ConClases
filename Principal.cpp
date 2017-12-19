/*
=======================================================
UNIVERSIDAD DE LAS FUERZAS ARMADAS - "ESPE"
=======================================================
Departamento Ciencias De La Computación
=======================================================
Tema:			PILAS - COLAS - CON CLASE
Carrera:		Ingeniería en Sistemas
Docente:		Ing. Fernando Solis
Integrantes:	Granada David
Conejo Ivan
Francisco Sampedro
=======================================================
Fecha Creación:		12/12/2017
Fecha Modificación:	12/12/2017
=======================================================
MENU PILAS - COLAS - CON CLASES
=======================================================
*/
//Librerias
#include "funciones.h"
#include "NodoPilas.h"
#include "NodoColas.h"

#pragma warning(disable:4996);

//Funcion principal main()
void main()
{
	//Variables locales de la funcion main()

	//Variables listas Simplemente enlazadas

	//PILAS
	string nombrePilas;
	string nombrePilas2;
	int contarNodosPilas = 0;
	char opcPilas = ' ';
	NodoPilas *cabezaPilas = new NodoPilas();
	//cabezaPilas->setNombrePilas(" ");
	//cabezaPilas->setSiguiente(NULL);

	//COLAS
	string nombreColas;
	string nombreColas2;
	int contarNodosColas = 0;
	char opcColas = ' ';

	NodoColas *cabezaColas = new NodoColas();
	//cabezaColas->setNombreColas(" ");
	//cabezaColas->setSiguiente(NULL);
	

MenuPrincipal: { //Abro un bloque llamado MenuPrincipal:{}  que me va a servir para poder regresar al menu principal
				 //MENU PRINCIPAL *************************************************************************
	system("cls");
	cout << "\tMENU PRINCIPAL\n" << endl;
	cout << "[1]  Pilas" << endl;
	cout << "[2]  Colas" << endl<< endl;
	cout << "[-]  Salir\n" << endl;
	cout << "Haga click en una opcion deseada..." << endl;

	//Funciones para poder utilizar el Mouse dentro del programa.
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	HANDLE hin = GetStdHandle(STD_INPUT_HANDLE);
	INPUT_RECORD InputRecord;
	DWORD Events;
	COORD coord;
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 25;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hout, &cci);
	SetConsoleMode(hin, ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT);

	while (1)
	{
		ReadConsoleInput(hin, &InputRecord, 1, &Events);
		if (InputRecord.EventType == MOUSE_EVENT)
		{
			if (InputRecord.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
			{

				coord.X = InputRecord.Event.MouseEvent.dwMousePosition.X;
				coord.Y = InputRecord.Event.MouseEvent.dwMousePosition.Y;

				//Pilas **********************************************************
				for (int i = 0; i < (10); i++)
				{
				MenuPilas: {
					if (coord.X == i && (coord.Y == 2))
					{
						system("color 07");
						system("cls");
						cout << "\tPILAS\n" << endl;
						cout << "[1] Apilar" << endl;
						cout << "[2] Imprimir Pila" << endl;
						cout << "[-] Regresar Menu Principal\n" << endl;
						cout << "Seleccione una opcion valida: " << endl;

						// Para entrar al siguiente menu de listas Simplemente enlazadas****
						HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
						HANDLE hin = GetStdHandle(STD_INPUT_HANDLE);
						INPUT_RECORD InputRecord;
						DWORD Events;
						COORD coord;
						CONSOLE_CURSOR_INFO cci;
						cci.dwSize = 25;
						cci.bVisible = FALSE;
						SetConsoleCursorInfo(hout, &cci);
						SetConsoleMode(hin, ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT);

						while (1)
						{
							ReadConsoleInput(hin, &InputRecord, 1, &Events);
							if (InputRecord.EventType == MOUSE_EVENT)
							{
								if (InputRecord.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
								{


									//Posicion en la que me aparece "Hola mundo "cuando hago clic
									coord.X = InputRecord.Event.MouseEvent.dwMousePosition.X;
									coord.Y = InputRecord.Event.MouseEvent.dwMousePosition.Y;

									//PUSH **********************
									for (int i = 0; i < (8); i++)
									{
										if (coord.X == i && (coord.Y == 2))
										{
											system("color 07");
											do
											{
												system("cls");
												cout << "\t APILAR\n\n";
												
												
												cout << "Ingrese un nombre/dato: ";
												cin >> nombrePilas;

												while ((cabezaPilas->buscarPila(cabezaPilas, nombrePilas)) == 0)
												{
													(cabezaPilas->pushPilas(&cabezaPilas, nombrePilas, contarNodosPilas));

													cout << "Elemento apilado!!!" << endl;
													//system("PAUSE");
													
												}

												cout << "Desea ingresar otro nombre/dato (S/N): ";
												opcPilas = getch();

											} while (opcPilas == 's' || opcPilas == 'S');
											goto MenuPilas;
										}
									}//Fin for

									 //Mostrar Pila **********************
									for (int i = 0; i < (16); i++)
									{
										if (coord.X == i && (coord.Y == 3))
										{
											system("color 07");
											system("cls");
											cout << "\tIMPRIMIR PILA\n\n";
											cabezaPilas->MostrarPila(cabezaPilas, contarNodosPilas);
											system("PAUSE");
											goto MenuPilas;
										}
									}//Fin for

									 //Regresar al menu principal ******************
									for (int i = 0; i < (27); i++)
									{
										if (coord.X == i && (coord.Y == 4))
										{

											goto MenuPrincipal; //Utilizo la funcion goto y llamo al bloque MenuPrincipal para poder regresar al menu principal.

										}

									}//Fin for



								}

							}

						}//Fin while(1)


					}//Fin if

					}//FIN Bloque MenuPilas

				}//Fin for Pilas



				 //Colas   **************************************************************
				for (int i = 0; i < (10); i++)
				{

				MenuColas: {

					if (coord.X == i && (coord.Y == 3))
					{


						system("color 07");
						system("cls");
						cout << "\tCOLAS\n" << endl;
						cout << "[1] Encolar" << endl;
						cout << "[2] Imprimir Cola" << endl;
						cout << "[-] Regresar Menu Principal\n" << endl;
						cout << "Haga click en una opcion deseada..." << endl;

						// Para entrar al siguiente menu de listas Doblemente enlazadas****
						HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
						HANDLE hin = GetStdHandle(STD_INPUT_HANDLE);
						INPUT_RECORD InputRecord;
						DWORD Events;
						COORD coord;
						CONSOLE_CURSOR_INFO cci;
						cci.dwSize = 25;
						cci.bVisible = FALSE;
						SetConsoleCursorInfo(hout, &cci);
						SetConsoleMode(hin, ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT);

						while (1)
						{
							ReadConsoleInput(hin, &InputRecord, 1, &Events);
							if (InputRecord.EventType == MOUSE_EVENT)
							{
								if (InputRecord.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
								{


									//Posicion en la que me aparece "Hola mundo "cuando hago clic
									coord.X = InputRecord.Event.MouseEvent.dwMousePosition.X;
									coord.Y = InputRecord.Event.MouseEvent.dwMousePosition.Y;

									//Encolar **********************
									for (int i = 0; i < (11); i++)
									{
										if (coord.X == i && (coord.Y == 2))
										{
											system("color 07");
											string nombreColas2;
											do
											{
												system("cls");
												cout << "\tENCOLAR\n\n";

												cout << "Ingrese un dato: ";
												cin >> nombreColas;

												nombreColas2 = validarIngreso(nombreColas);

												while ((cabezaColas->buscarCola(cabezaColas, nombreColas2)) == 0)
												{
													(cabezaColas->pushColas(&cabezaColas, nombreColas2, contarNodosColas));

													cout << "Elemento encolado!!!" << endl;
													//system("PAUSE");

												}

												cout << "Desea ingresar otro dato (S/N): ";
												opcColas = getch();

											} while (opcColas == 's' || opcColas == 'S');
											goto MenuColas;
										}
									}//Fin for

									 //Mostrar Cola **********************
									for (int i = 0; i < (16); i++)
									{
										if (coord.X == i && (coord.Y == 3))
										{
												system("color 07");
												system("cls");
												cout << "\tIMPRIMIR COLA\n\n";
												cabezaColas->MostrarColas(cabezaColas, contarNodosColas);
												system("PAUSE");
											goto MenuColas;
										}
									}//Fin for

								

									 //Regresar al menu principal ******************
									for (int i = 0; i < (27); i++)
									{
										if (coord.X == i && (coord.Y == 4))
										{

											goto MenuPrincipal; //Utilizo la funcion goto y llamo al bloque MenuPrincipal para poder regresar al menu principal.

										}

									}//Fin for



								}

							}

						}//Fin while(1)


					}//Fin if
					}//Fin bloque MenuDobles
				}//Fin for Listas doblemente enlazadas


				 

				for (int i = 0; i < (10); i++)
				{

					if (coord.X == i && (coord.Y == 5))
					{
						system("cls");
						cout << "Finalizando Aplicativo..." << endl;
						Sleep(1000);
						exit(0);
					}
				}//Fin for

			}//Fin if

		}//Fin if
		FlushConsoleInputBuffer(hin);

	}//Fin while()

	}//FIN MenuPrincipal:{}
}//Fin funcion principal main()