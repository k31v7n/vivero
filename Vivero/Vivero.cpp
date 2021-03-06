#include "pch.h"
#include "Menu.h"
#include <iostream>
#include <string>
using namespace std;
Helper *vh;
Menu *m;

int mprincipal;
int mplanta;
int minsumo;

int main()
{
	m = new Menu();

	mprincipal = 0;
	do 
	{
		mprincipal = m->MenuPrincipal();

		switch (mprincipal) {
			case 1:
				mplanta = 0;

				do {
					mplanta = m->MenuPlanta();

					if (mplanta != 4) {
						m->MenuPlantaOperacion(mplanta);
					}

				} while (mplanta != 4);
				
			break;
			case 2:
				m->MenuInsumosOperacion();
			break;
			case 3:
				m->MenuClienteOperacion();
				break;
			case 4:
				m->MenuInventario();
				break;
			default:
				if (mprincipal != 6) 
				{
				
					vh->SaltoLinea(1);
					cout << "Ups! Ha seleccionado una opcion incorrecta. Intentelo de nuevo.";
					vh->SaltoLinea(1);
					vh->Pausa();
				}
			break;
		}

	} while (mprincipal != 6);

	return 0;
}
