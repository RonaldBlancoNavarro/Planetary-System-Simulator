#include "Cinturon_Asteriodes.h"

Cinturon_Asteriodes::Cinturon_Asteriodes()
{nombre="";
 distSol=0;
ancho=0;
color=0;
}

Cinturon_Asteriodes::Cinturon_Asteriodes(string nom,int ds,int a,int c){
	nombre=nom;
	distSol=ds;
	ancho=a;
	color=c;
}
//sets
void Cinturon_Asteriodes::setNombre(string nom){
	nombre=nom;
}
void Cinturon_Asteriodes::setDistSol(int  ds){
	distSol=ds;
}
void Cinturon_Asteriodes::setAncho(int a){
	ancho=a;
}
void Cinturon_Asteriodes::setColor(int c){
	color=c;
}
//gets
string Cinturon_Asteriodes::getNombre(){
	return nombre;
}
int Cinturon_Asteriodes::getDistSol(){
	return distSol;
}
int Cinturon_Asteriodes::getAncho(){
	 return ancho; 
}
int Cinturon_Asteriodes::getColor(){
	return color;
}

void  Cinturon_Asteriodes::dibujarCinturon(int xcent,int ycent){//dibuja muchos puntos en pocisiones random  en una determinada region

//	srand(time(NULL));
	
	int ds=getDistSol();//distancia sol o planeta
	int fin=getAncho();//deberia ser ancho
	

	int yradio;
	yradio=(int)floor(ds/2);
			
	
	for(int i=0;i<360;i++){// trata de graficar multiples asteriodes como puntos en si pegandolos crean el cinturon
	
	int dsrand=ds+rand()%((ds+fin+1)-ds);// se les asignan posiciones random en un cierto ancho
	int yradiorand=yradio+rand()%((yradio+fin+1)-yradio);
	
	int px,py;
     px=(int)floor(dsrand *cos((i)*Pi/180.0)); //x=a cos t  donde t en radianes  
     py=(int)floor(yradiorand*sin((i)*Pi/180.0)); //y=b sen t  donde t en radianes			
     

	putpixel(xcent+px,ycent-py,getColor());//pone punto en un lugar 
	
	}
}

void Cinturon_Asteriodes::borrarCinturon(int xcent,int ycent){// crea muchos circulos negros que borran el cinturon

	int ds=getDistSol();//distancia sol o planeta
	int fin=getAncho();// ancho
	

	int yradio;
	yradio=(int)floor(ds/2);
	
	int mitad;
	mitad=(int)floor(fin/2);
	
		for(int i=0;i<360;i++){// trata de graficar un circulo negro que borra el cinturon	por cada poscion en i
		
		 int px,py;
	     px=(int)floor((ds+mitad)*cos((i)*Pi/180.0)); //x=a cos t  donde t en radianes
	     py=(int)floor((yradio+mitad)*sin((i)*Pi/180.0)); //y=b sen t  donde t en radianes
	     setfillstyle(SOLID_FILL,BLACK);
	     fillellipse(xcent+px,ycent-py,mitad +1,mitad+1 ); //dibuja un circulo en color negro 
	
		setcolor(0);
		}
	
}

Cinturon_Asteriodes::~Cinturon_Asteriodes()
{
}
