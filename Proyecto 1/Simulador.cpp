#include "Simulador.h"

Simulador::Simulador()
{
	cantSisPlanetarios=3; //inisialisa en 1 para iniciar
	
	Sistema_Planetario obj;
	
	sistemas=new Sistema_Planetario[getCantSisPlanetarios()];
	for (int i=0;i<cantSisPlanetarios;i++){
		sistemas[i]=obj;
	}
}

Simulador::Simulador(int csp, Sistema_Planetario *s){
	cantSisPlanetarios=csp;
	*sistemas=*s;
}

//set
void Simulador::setCantSisPlanetarios(int csp){
	cantSisPlanetarios=csp;
}
//get
int Simulador::getCantSisPlanetarios(){
	return cantSisPlanetarios;
}

void Simulador::menu(){
	char accion='0';
	
	do{
		system("cls");

cout<<" (IMPORTANTE: todo, menos los nombres, debe ser rellenado con numeros enteros positivos. gracias)"<<endl;
cout<<" (Para detener la graficacion de un sistema planetario, de click sobre este y precione cualquier tecla)"<<endl;
cout<<" (Para evitar errores siempre digite correctamente su eleccion.)"<<endl<<endl;
	
	
cout<<"		SIMULADOR DE SISTEMAS PLANETARIOS		"<<endl<<endl;
cout<<" Elija una de las suguientes acciones:"<<endl;
cout<<" 1) Mostrar ejemplo de Sistema Planetario"<<endl;
cout<<" 2) Agregar sistema planetario"<<endl;
cout<<" 3) Mostrar los datos de un sistema planetario (Muestra datos solamente)"<<endl;
cout<<" 4) Graficar y mostrar sistema planetario (Grafica y muestra datos)"<<endl;
cout<<" 5) Editar sistema planetario"<<endl;
cout<<" 6) Eliminar sistema planetario"<<endl;
cout<<" 7) Creditos "<<endl;
cout<<" 8) Salir"<<endl;
cin>>accion;

switch(accion){
	
	
	case '1':{// mostrar datos y graficar sistema prediceñado como ejemplo
		system("cls");
		sistemas[0].ejemploSistema();
		break;
	}
	
	case '2':{ //agregar sistemas planetarios
	system("cls");
	
		if (sistemas[0].getNombreSistema()==""){//pida cuando esta vacio
			int csp;
			cout<<" Digite la cantidad de sistemas que decea agregar:	"<<endl;
			cout<<" (Dependiendo de lo agregado puede extenderse mucho...)"<<endl;
			cin>>csp;
			
			if(csp==0){
				//salir
			}
			else{
				setCantSisPlanetarios(csp);
				
				for (int i=0;i<getCantSisPlanetarios();i++){
				sistemas[i].agregarDatos();
				}	
						
			}
		}
		
		else{//pedir un nuevo sistema si ya esta lleno de alguno
//		setCantSisPlanetarios(cantSisPlanetarios+1);
		
			for (int i=0;i<getCantSisPlanetarios();i++){
			if(sistemas[i].getNombreSistema()==""){//verifica si la ultima posicion esta vacia
				sistemas[i].agregarDatos();
				system("pause");
				break;
			}
		}	
		}
		
		break;
	}
	
	case '3':{//mostrar datos solamente
	system("cls");
	
	cout<<" Los Sistemas planetarios actuales son:	"<<endl;
	
	for (int i=0;i<getCantSisPlanetarios();i++){//para mostrar nombres y posiciones de sistemas solares
		cout<<" Posicion: ["<<i<<"]"<<", nombre: "<<sistemas[i].getNombreSistema()<<endl;	
	}
	
	int pos;
	cout<<" Inserte la posicion del sistema que decea mostrar datos:	";cin>>pos;
	system("cls");
	
	if(pos>getCantSisPlanetarios()){
		break;
	}
	else{
	cout<<" Sistema planetario Posicion: ["<<pos<<"]"<<endl;
	sistemas[pos].mostrarDatos();//muestra datos del sistema solar elegido
	system("pause");
		break;	
	}
	
	}
	
	case '4':{//graficar y mostrar datos
		system("cls");
	
	cout<<" Los Sistemas planetarios actuales son:	"<<endl;
	
	for (int i=0;i<cantSisPlanetarios;i++){//para mostrar nombres y posiciones de sistemas solares
		cout<<" Posicion: ["<<i<<"]"<<", nombre: "<<sistemas[i].getNombreSistema()<<endl;	
	}
	
	int pos;
	cout<<" Inserte la posicion del sistema que decea graficar:	";cin>>pos;
	system("cls");
	
	cout<<" Sistema planetario Posicion: ["<<pos<<"]"<<endl;
	sistemas[pos].mostrarDatos();//mostrar datos
	sistemas[pos].animacion();//grafica sistema solar elegido	
	system ("pause");
		break;
	}
	
	case '5':{//editar 
		system("cls");
	
	cout<<" Los Sistemas planetarios actuales son:	"<<endl;
	
	for (int i=0;i<cantSisPlanetarios;i++){//para mostrar nombres y posiciones de sistemas solares
		cout<<" Posicion: ["<<i<<"]"<<", nombre: "<<sistemas[i].getNombreSistema()<<endl;	
	}
	
	int pos;
	cout<<" Inserte la posicion del sistema que decea editar:	";cin>>pos;
	system("cls");
	
	cout<<" Sistema planetario Posicion: ["<<pos<<"]"<<endl;
	sistemas[pos].editarDatos();//muestra datos del sistema solar elegido
	system("pause");
		break;
	}
	
	case '6':{//eliminar datos en sistema planetario o el propio sistema planetario
		system("cls");
	
	cout<<" Los Sistemas planetarios actuales son:	"<<endl;
	
	for (int i=0;i<cantSisPlanetarios;i++){//para mostrar nombres y posiciones de sistemas solares
		cout<<" Posicion: ["<<i<<"]"<<", nombre: "<<sistemas[i].getNombreSistema()<<endl;	
	}
	
	int eleccion;
	cout<<" 1) Decea eliminar un sistema planetario completo. "<<endl;
	cout<<" 2) Decea eliminar algun dato de un sistema planetario"<<endl;
	cin>>eleccion;
	
	if(eleccion==1){//eliminar todo un sistema
	Sistema_Planetario obj;
	int pos;
	cout<<" Inserte la posicion del sistema que decea eliminar completamente:	";cin>>pos;
	
	cout<<" Sistema planetario Posicion: ["<<pos<<"] "<<"eliminado."<<endl;
	sistemas[pos]=obj;
	sistemas[pos].~Sistema_Planetario();//elimina datos del sistema solar elegido
	system("cls");
	
	for (int i=pos;i<cantSisPlanetarios;i++){//reordena el vector de sistemas solares
		sistemas[i]=sistemas[i+1];
	}
		
//		setCantSisPlanetarios(getCantSisPlanetarios()-1);
	}
	else{
		
	int pos;
	cout<<" Inserte la posicion del sistema que decea eliminar datos:	";cin>>pos;
	system("cls");
	
	cout<<" Sistema planetario Posicion: ["<<pos<<"]"<<endl;
	sistemas[pos].eliminarDatos();//elimina datos del sistema solar elegido
			
		
	}

		break;
	}
	
	case '7':{//creditos
		system("cls");
		cout<<" UNIVERSIDAD NACIONAL, SEDE REGION BRUNCA"<<endl;
		cout<<" Proyecto 1 (Sistemas Planetarios), Programacion 1"<<endl;
		cout<<" Prof: Master Gabriel Nuñez M."<<endl;
		cout<<" Estudiante: Ronald Blanco Navarro."<<endl;
		cout<<" Ciclo | 2019."<<endl;
		cout<<" Agradecimientos a Dios, al profesor y a todos los tutoriales vistos"<<endl;
		system("pause");
		break;
	}
	
	case '8':{//salir
		system ("cls");
		cout<<" Gracias."<<endl;
		
		break;
	}
}

	
	}	while(accion!='8');
	
}

Simulador::~Simulador()
{
}
