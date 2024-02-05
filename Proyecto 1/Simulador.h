#ifndef SIMULADOR_H
#define SIMULADOR_H
#include<graphics.h>
#include<iostream>
#include"Sistema_Planetario.h"
using namespace std;

class Simulador
{
	private:
		int cantSisPlanetarios;
		Sistema_Planetario *sistemas;//vector dinamico de sistemas planetarios
	public:
		Simulador();
		Simulador(int , Sistema_Planetario *);
		
		void setCantSisPlanetarios(int);
		int getCantSisPlanetarios();
		
		void menu();//menu para administrar sistemas  planetarios
		
		~Simulador();
};

#endif
