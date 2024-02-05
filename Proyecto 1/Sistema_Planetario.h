#ifndef SISTEMA_PLANETARIO_H
#define SISTEMA_PLANETARIO_H
#include"Cuerpo_Celeste.h"
#include"Estrella.h"
#include"Planeta.h"
#include"Satelite.h"
#include"Cinturon_Asteriodes.h"
#include"Cometa.h"
#include"Cuerpo_Celeste.h"
#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;


//const int xcentro=683;
//const int ycentro=384;

class Sistema_Planetario //objeto astronomico
{
	private:
		string nombreSistema;
		Estrella estrella;//el sol
		int cantPlanetas;
		Planeta *planetas;//vector dinamico de  planetas
		int cantCinturonesAst;
		Cinturon_Asteriodes *cinturones;//vector dinamico de cinturon de asteriodes
		int cantCometas;
		Cometa *cometas;//vector dinamico de  2 cometas
		
	public:
		Sistema_Planetario();
		Sistema_Planetario(string, Estrella, int, Planeta *, int, Cinturon_Asteriodes *, int , Cometa *);
		
		void setNombreSistema(string);
		void setEstrella(Estrella );
		void setCantPlanetas(int);
		void setPlanetas( Planeta *);
		void setCantCinturonesAst(int);
		void setCinturones(Cinturon_Asteriodes *);
		void setCantCometas(int);
		void setCometas(Cometa *);
		
		string getNombreSistema();
		Estrella getEstrella();
		int getCantPlanetas();
		Planeta getPlanetas();
		int getCantCinturonesAst();
		Cinturon_Asteriodes getCinturones();
		int getCantCometas();
		Cometa getCometas();
		
		void ejemploSistema();
		void agregarEstrella();
		void agregarPlanetas();
		void agregarCinturones();
		void agregarCometas();
		
		void agregarDatos();
		void mostrarDatos();
		void editarDatos();
		void eliminarDatos();
		
		void fondo();//dibuja estrellas del fondo
		void animacion();//se de la animacion del sistema solar
		//lastimosamente las lunas presentan errores de guardado y graficacion
		//pues la primer luna del primer planeta sera la luna de todos los planetas
		
		~Sistema_Planetario();
	
};

#endif
