#include "Satelite.h"

Satelite::Satelite()
{coorbital=0;
}

Satelite::Satelite(int px,int py,string nom ,int de, int ro, int po, int pr,int t, int c,int m, bool coo):Cuerpo_Celeste(px,py,nom,de,ro,po,pr,t,c,m){
	coorbital=coo;
}
//set
void Satelite::setCoorbital(bool c){
	coorbital=c;
}
//get
bool Satelite::getCoorbital(){
	return coorbital;
}

Satelite::~Satelite()
{
}
