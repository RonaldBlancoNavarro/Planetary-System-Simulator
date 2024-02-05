#ifndef ESTRELLA_H
#define ESTRELLA_H
#include "Cuerpo_Celeste.h"
//#include<Planeta.h>
//#include<Asteriode.h>
//#include<Cometa.h>
using namespace std;


class Estrella : public Cuerpo_Celeste
{
	private:
	char clasificacion;
	public:
	Estrella();
	Estrella(int, int, string,int,int,int,int, int, int,int,char);
	
	void setClasificacion(char);
	char getClasificacion();

	~Estrella();
};

#endif
