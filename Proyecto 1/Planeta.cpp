#include "Planeta.h"

Planeta::Planeta()
{
cantidadLunas=5;
Satelite obj;
lunas= new Satelite[getCantidadLunas()];// se crea en si lo que es el vector de lunas
for(int i=0;i<getCantidadLunas();i++){
	lunas[i]=obj;
}
//obj.~Satelite();

Cinturon_Asteriodes obj2;
cinturon=obj2;
//obj2.~Cinturon_Asteriodes();
}

Planeta::Planeta(int px,int py,string nom ,int de, int ro, int po, int pr,int t, int c,int m, int cantl, Satelite *l,Cinturon_Asteriodes cin):Cuerpo_Celeste(px, py, nom , de,  ro,  po,  pr, t,  c, m){
	cantidadLunas=cantl;
	*lunas=*l;
	cinturon=cin;
}
//sets
void Planeta::setCantidadLunas(int cantl){
	cantidadLunas=cantl;
}

void  Planeta::setLunas(Satelite *l){
*lunas=*l;}

void Planeta::setCinturon(Cinturon_Asteriodes c){
	cinturon=c;
}

//gets
int Planeta::getCantidadLunas(){
	return cantidadLunas;
}

Satelite* Planeta::getLunas(){
	return lunas;
}

Cinturon_Asteriodes Planeta::getCinturon(){
	return cinturon;
}


void Planeta::agregarLunas(){//agrega las luna del planeta en el vector dinamico de lunas
	
	int cl=0;
			string nom ;int de; int ro; int c; int m; bool coo;

		cout<<" Digite la cantidad de satelites:		";cin>>cl;
		setCantidadLunas(cl);
		cout<<endl;
		
		if(cl!=0){
		
		cout<<" Ahora digite los datos de cada luna."<<endl;
		
		for(int i=0;i<getCantidadLunas();i++){
			lunas[i].setX(0);
			lunas[i].setY(0);
			lunas[i].setPeriodo_Orbital(0);
			lunas[i].setPeriodo_Rotacion(0);
			lunas[i].setTemperatura(0);
			lunas[i].setCoorbital(0);
			
			cout<<"Luna"<<"["<<i<<"]"<<endl;
			cout<<" Nombre:	 "; cin>>nom;
			lunas[i].setNombre(nom);
			cout<<endl;
			cout<<" Diametro ecuatorial:	"; cin>>de;
			lunas[i].setDiametro_Ecuatorial(de);
			cout<<endl;
			cout<<" Radio orbital (Distancia al cuerpo celeste sobre el que gira): 	"; cin>>ro;
			lunas[i].setRadio_Orbital(ro);
			cout<<endl;
			cout<<" Seleccione un color:	";
			cout<<" 1)BLUE 2)GREEN 3)CYAN  4)RED 5)MAGENTA 6)BROWN 7)LIGHTGRAY 8)DARKGRAY"<<endl;
            cout<<" 9)LIGHTBLUE 10)LIGHTGREEN 11)LIGHTCYAN 12)LIGHTRED 13)LIGHTMAGENTA 14)YELLOW 15)WHITE"<<endl;
			cin>>c; lunas[i].setColor(c);
			cout<<endl;
			cout<<" Masa (Trillones de toneladas):	 "; cin>>m;
			lunas[i].setMasa(m);
			cout<<endl;
			cout<<"listo"<<endl;
			
		}
		}
}

void Planeta::agregarCinturon(){	//agrega el cinturon
cout<<" Ahora digite los datos del cinturon. "<<endl;

		string nom;int ro;int a;int c;
	
	cout<<" Nombre: 	"; cin>>nom;
	cinturon.setNombre(nom);
	cout<<endl;
	cout<<" Radio orbital (Distancia al cuerpo celeste sobre el que gira):	  "; cin>>ro;
	cinturon.setDistSol(ro);
	cout<<endl;
	cout<<" Ancho del cinturon de Asteriodes: 	"; cin>>a;
	cinturon.setAncho(a);
	cout<<endl,
	cout<<" Seleccione un color:";
	cout<<" 1)BLUE 2)GREEN 3)CYAN  4)RED 5)MAGENTA 6)BROWN 7)LIGHTGRAY 8)DARKGRAY"<<endl;
    cout<<" 9)LIGHTBLUE 10)LIGHTGREEN 11)LIGHTCYAN 12)LIGHTRED 13)LIGHTMAGENTA 14)YELLOW 15)WHITE"<<endl;
	cin>>c; cinturon.setColor(c);
	cout<<endl;
	cout<<" Listo."<<endl;
}

void Planeta::mostrarDatos(){//muetsra datos del planeta
	
	cout<<" Nombre: "<<getNombre()<<", Diametro Ecuatorial: "<<getDiametro_Ecuatorial()<<endl;
			cout<<" Radio Orbital: "<<getRadio_Orbital()<<", Periodo Orbital: "<<getPeriodo_Orbital()<<endl;
			cout<<" Periodo Rotacion: "<<getPeriodo_Rotacion()<<", Color: "<<getColor()<<", Masa: "<<getMasa()<<endl;
			if (getCantidadLunas()>0){
				cout<<endl;
				cout<<" Datos de los satelites pertenecientes a este planeta: "<<endl<<endl;
				for(int i=0;i<getCantidadLunas();i++){
					cout<<" Satelite: ["<<i<<"]"<<endl;
					cout<<" Nombre: "<<lunas[i].getNombre()<<", Diametro Ecuatorial: "<<lunas[i].getDiametro_Ecuatorial()<<endl;
					cout<<" Radio Orbital: "<<lunas[i].getRadio_Orbital()<<", Color: "<<lunas[i].getColor()<<endl;
					cout<<" Masa: "<<lunas[i].getMasa()<<", Coorbital: "<<lunas[i].getCoorbital()<<endl;
				}
			}
			if (cinturon.getNombre()!=""){
				cout<<endl;
				cout<<"Datos de  cinturon de planeta."<<endl<<endl;
				cout<<" Nombre: "<<cinturon.getNombre()<<", Distancia a planeta: "<<cinturon.getDistSol()<<endl;
				cout<<" Ancho: "<<cinturon.getAncho()<<" , Color: "<<cinturon.getColor()<<endl;
			
			}
}



Planeta::~Planeta()
{
}
