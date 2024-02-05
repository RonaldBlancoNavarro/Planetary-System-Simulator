#include "Cuerpo_Celeste.h"

Cuerpo_Celeste::Cuerpo_Celeste()
{
	x=0;
	y=0;
	nombre="";
	diametro_ecuatorial=0;
	radio_orbital=0;
	periodo_orbital=0;
	periodo_rotacion=0;
	temperatura=0;
	color=0;
	masa=0;
}

Cuerpo_Celeste::Cuerpo_Celeste(int px,int py,string nom ,int de, int ro, int po, int pr,int t, int c,int m){
	x=px;
	y=py;
	nombre=nom;
	diametro_ecuatorial=de;
	radio_orbital=ro;
	periodo_orbital=po;
	periodo_rotacion=pr;
	temperatura=t;
	color=c;
	masa=m;
}
//sets
void Cuerpo_Celeste::setX(int xx){
	x=xx;
}
void Cuerpo_Celeste::setY(int yy){
	y=yy;
}
void Cuerpo_Celeste::setNombre(string nom){
	nombre=nom;
}
void Cuerpo_Celeste::setDiametro_Ecuatorial(int de){
	diametro_ecuatorial=de;
}
void Cuerpo_Celeste::setRadio_Orbital(int ro){
	radio_orbital=ro;
}
void Cuerpo_Celeste::setPeriodo_Orbital(int po){
	periodo_orbital=po;
} 
void Cuerpo_Celeste::setPeriodo_Rotacion(int pr){
	periodo_rotacion=pr;
}

void Cuerpo_Celeste::setTemperatura(int t){
	temperatura=t;
}

void Cuerpo_Celeste::setColor(int c){
	color=c;
}
void Cuerpo_Celeste::setMasa(int m){
	masa=m;
} 
//gets
int Cuerpo_Celeste::getX(){
	return x;
}
int Cuerpo_Celeste::getY(){
	return y;
}
string Cuerpo_Celeste::getNombre(){
	return nombre;
}
int Cuerpo_Celeste::getDiametro_Ecuatorial(){
	return diametro_ecuatorial;
}
int Cuerpo_Celeste::getRadio_Orbital(){
	return radio_orbital;
}
int Cuerpo_Celeste::getPeriodo_Orbital(){
	return periodo_orbital;
}
int Cuerpo_Celeste::getPeriodo_Rotacion(){
	return periodo_rotacion;
}
int Cuerpo_Celeste::getTemperatura(){
	return temperatura;
}
int Cuerpo_Celeste::getColor(){
	return color;
}
int Cuerpo_Celeste::getMasa(){
	return masa;
}

void Cuerpo_Celeste::DibujarCuerpo_Celeste(int x ,int y){//dibuja cualquier cuerpo celeste en  una poscion x,y
	//inspirado en el trabajo de Meshizero Lagoluna, modificado por Ronald Blanco N
	int radio;
	radio=(int)floor(getDiametro_Ecuatorial()/2);
	
	setfillstyle(SOLID_FILL, getColor());//aqui va  que hacer cambios para mandar color como int con un get
	fillellipse(x,y,radio,radio);
	setX(x);
	setY(y);
	setcolor(0);

}

void Cuerpo_Celeste::DibujarOrbita(int xc, int yc,int col){
	//inspirado en el trabajo de Meshizero Lagoluna, modificado por Ronald Blanco N
	int yradio;
	yradio=(int)floor(getRadio_Orbital()/2);/// manipular por aquello de dar diferente forma elipse
	
	
	  setcolor(col);
      ellipse(xc,yc,0,360,getRadio_Orbital(),yradio); //orbita 
      setcolor(0);
}

void Cuerpo_Celeste::movDibCuerpo_Celeste(int xcen, int ycen,int angulo,int velocidad){//mueve y dibuja el cuerpo celeste calculando su poscion 
  //inspirado en el trabajo de Meshizero Lagoluna, modificado por Ronald Blanco N
  DibujarOrbita( xcen,  ycen,8);
	
	int yradio;
	yradio=(int)floor(getRadio_Orbital()/2);
	
	int px,py;
     px=(int)floor(getRadio_Orbital() *cos((angulo*velocidad)*Pi/180.0)); //x=a cos t  donde t en radianes 
     py=(int)floor(yradio*sin((angulo*velocidad)*Pi/180.0)); //y=b sen t  donde t en radianes
     

     
     DibujarCuerpo_Celeste(xcen+px,ycen-py);//dibuja un cuerpo celste
     

	 
	
}
void Cuerpo_Celeste::movBorCuerpo_Celeste(int xcen, int ycen,int angulo, int velocidad){//mueve y borra el cuerpo celeste calculando su poscion 
  //inspirado en el trabajo de Meshizero Lagoluna, modificado por Ronald Blanco N
  DibujarOrbita( xcen,  ycen,8);
	
	DibujarOrbita( xcen,  ycen, BLACK);//borra orbita
		
	int yradio;
	yradio=(int)floor(getRadio_Orbital()/2);
	
	int px,py;
     px=(int)floor(getRadio_Orbital() *cos((angulo*velocidad)*Pi/180.0)); //x=a cos t  donde t en radianes  ///modificar velocidad
     py=(int)floor(yradio*sin((angulo*velocidad)*Pi/180.0)); //y=b sen t  donde t en radianes
     

     
     int color;//sirve como auxiliar para guardar color antes de imprimir en negro
     color=getColor();
     
     setColor(BLACK);
     
     DibujarCuerpo_Celeste(xcen+px,ycen-py);//dibuja un cuerpo celest de color negro como sombra
     
     setColor(color);//se retoma color original
     
 
	
	
}

Cuerpo_Celeste::~Cuerpo_Celeste()
{
}
