#ifndef CUERPO_CELESTE_H
#define CUERPO_CELESTE_H
//#include<windows.h>
#include<graphics.h>
//#include<time.h>
#include<math.h>
#include<stdlib.h>
//#include<stdio.h>
#include<conio.h>   
#include<iostream>

const double Pi=3.1416;
//resolucion = 1366x768   mitad x 683------mitad y 384

using namespace std;


class Cuerpo_Celeste
{	
	private: 
	int x;	//ubicaciones
	int y;
	string nombre;
	int diametro_ecuatorial;
	int radio_orbital;// distancia a estrella
	int periodo_orbital; //dias que dura el año
	int periodo_rotacion; // timepo que dura cada dia
	int temperatura;  //mide en grados kelvin
	int color;////////color deberia ser int
	int masa;// kilogramos o toneladas
	//puntocetralorbita;
	
	
	public:
		Cuerpo_Celeste();
		Cuerpo_Celeste(int, int, string, int, int, int, int, int, int,int);
		
		void setX(int);
		void setY(int);
		void setNombre(string);
		void setDiametro_Ecuatorial(int);
		void setRadio_Orbital(int);
		void setPeriodo_Orbital(int);
		void setPeriodo_Rotacion(int);
		void setTemperatura(int);
		void setColor(int);
		void setMasa(int);
		
		int getX();
		int getY();
		string getNombre();
		int getDiametro_Ecuatorial();
		int getRadio_Orbital();
		int getPeriodo_Orbital();
		int getPeriodo_Rotacion();
		int getTemperatura();
		int getColor();
		int getMasa();
		
	
		void DibujarCuerpo_Celeste(int x, int y);
		void DibujarOrbita(int ,int, int);
		void movDibCuerpo_Celeste(int, int, int,int);
		void movBorCuerpo_Celeste(int, int, int,int);
		
		
	
		~Cuerpo_Celeste();

};

#endif
