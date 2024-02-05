#ifndef SATELITE_H
#define SATELITE_H
#include<graphics.h>
#include "Cuerpo_Celeste.h"
using namespace std;

class Satelite : public Cuerpo_Celeste
{
	private:
		bool coorbital;// que si gira en la misma orbita que la luna anterior.....no se va a poder utilisar 
	public:
		Satelite();
		Satelite(int, int, string, int, int, int, int, int, int,int, bool);
		//fijarse que sis es mayor de tamaño al planeta no puede existir
		//set
		void setCoorbital(bool );//no se va a usar
		//get
		bool getCoorbital();
		~Satelite();
};

#endif
