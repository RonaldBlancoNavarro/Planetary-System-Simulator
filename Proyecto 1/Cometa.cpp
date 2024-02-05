#include "Cometa.h"

Cometa::Cometa()
{largoCola=0;
}

Cometa::Cometa(int px,int py,string nom ,int de, int ro, int po, int pr,int t, int c,int m,int lc):Cuerpo_Celeste( px, py, nom , de,  ro,  po,  pr, t,  c, m){
	largoCola=lc;
}
	
void Cometa::setLargoCola(int lc){
	largoCola=lc;
}

int Cometa::getLargoCola(){
	return largoCola;
}

void Cometa::dibujarCola(int centrox, int centroy,int angini, int ang, int xradio, int yradio ){// dibuja un arco de una angulo a otro por el que pasa el cometa
	
	  setcolor(LIGHTRED);
      ellipse(centrox,centroy,angini,ang,xradio,yradio); //arco de que se forma con un pedaso de elipse que se encuentra junto a la estrella
      setcolor(0);
}

Cometa::~Cometa()
{
}
