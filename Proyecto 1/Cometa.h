#ifndef COMETA_H
#define COMETA_H

#include "Cuerpo_Celeste.h"
using namespace std;

class Cometa : public Cuerpo_Celeste
{
	private:
		int largoCola;//la idea era mostrar largo maximo de cola pero no se uso
	public:
		Cometa();
		Cometa(int, int, string, int, int, int, int, int, int,int,int);
		
		void setLargoCola(int);
		int getLargoCola();
		
		void dibujarCola(int, int, int , int ,int, int );
		
		//talves metodo para graficar
		
		~Cometa();
};

#endif
