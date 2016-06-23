/*
 * Menu.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include <iostream>

using namespace std;

void Menu::show()
{
	ifstream leer_archivo("Agenda.txt");
		Contacto contacto;

		leer_archivo.read((char *)&contacto, sizeof(contacto));
		if(leer_archivo.fail())
		{
			cout <<" Ocurrio un ploblema, intentando abrir la agenda :(" <<endl;
			exit(1);
		}
		cout <<"id   Nombre     Telefono"<<endl;
		while(!leer_archivo.eof())
		{
			
			cout <<endl <<contacto.id <<" -> "<<  contacto.nombre << "   " <<contacto.telefono << endl;
			leer_archivo.read((char *)&contacto, sizeof(contacto));
					
		}
		cout << endl;
		leer_archivo.close();
}

Menu::Menu()
{

}

