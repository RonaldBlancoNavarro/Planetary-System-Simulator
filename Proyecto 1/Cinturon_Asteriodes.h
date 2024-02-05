#ifndef CINTURON_ASTERIODES_H
#define CINTURON_ASTERIODES_H
#include"Cuerpo_Celeste.h"
#include<time.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<graphics.h>
using namespace std;

class Cinturon_Asteriodes //no hereda pues es un objeto astronomico algo diferente de cuerpo celeste....y crear las clases objeto astronomico y asteroide no es muy funcional
{
	private:
		string nombre;
		int distSol;// distancia del sol o al planeta sobre el que se gira eje x
		int ancho;//ancho de cinturon
		int color;
		
	public:
		Cinturon_Asteriodes();
		Cinturon_Asteriodes(string,int,int,int);
		
		void setNombre(string);
		void setDistSol(int);
		void setAncho(int);
		void setColor(int);
		
		string getNombre();
		int getDistSol();
		int getAncho();
		int getColor();
		
		void dibujarCinturon(int xcent, int ycent);
		void borrarCinturon(int xcent, int ycent);
		
		//metodo graficador
		
		~Cinturon_Asteriodes();
};

#endif
