#include "Estrella.h"

Estrella::Estrella()
{clasificacion=0;
}


Estrella::Estrella(int px, int py, string nom, int de,int ro,int po, int pr, int t, int c,int m,char cl):Cuerpo_Celeste(px,py,nom,de,ro,po,pr,t,c,m)
{clasificacion=cl;
}
//set
void Estrella::setClasificacion(char cl){
	clasificacion=cl;
}
//get
char Estrella::getClasificacion(){
	return clasificacion;
}

Estrella::~Estrella(){
	
}
