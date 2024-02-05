#ifndef PLANETA_H
#define PLANETA_H

#include "Cuerpo_Celeste.h"
#include"Satelite.h"
#include"Cinturon_Asteriodes.h"
#include<graphics.h>
using namespace std;

class Planeta : public Cuerpo_Celeste
{
	private:
	 	int cantidadLunas;
	 	Satelite *lunas;//vector dinamico lunas
	 	Cinturon_Asteriodes cinturon;//cinturon para ese respectivo plameta
	 	
	public:
		Planeta();
		Planeta(int, int, string, int, int, int, int, int, int,int, int, Satelite *,Cinturon_Asteriodes);
		~Planeta();
		//sets
		void setCantidadLunas(int);
		void setLunas(Satelite *);
		void setCinturon(Cinturon_Asteriodes);
		//gets
		int getCantidadLunas();
		Satelite* getLunas();
		Cinturon_Asteriodes getCinturon();
		
		void agregarLunas();
		void agregarCinturon();
		void mostrarDatos();
		
};

#endif
