#include "Sistema_Planetario.h"

Sistema_Planetario::Sistema_Planetario()
{
	nombreSistema="";
	Estrella obj;
	estrella=obj;
//	obj.~Estrella();
	
	cantPlanetas=10;
	Planeta obj2;
	planetas=new Planeta[getCantPlanetas()];  //aqui lo de crear el vector dinamico de cinturones
	for(int i=0;i<getCantPlanetas();i++){
		planetas[i]=obj2;
	}
//	obj2.~Planeta();
	
	
	cantCinturonesAst=10;
	Cinturon_Asteriodes obj3;
	cinturones=new Cinturon_Asteriodes[getCantCinturonesAst()];//aqui lo de crear el vector dinamico de cinturones
	for(int i=0;i<getCantCinturonesAst();i++){
		cinturones[i]=obj3;
	}
//	obj3.~Cinturon_Asteriodes();
	
	
	cantCometas=2;
	Cometa obj4;
	cometas=new Cometa[getCantCometas()];
	for(int i=0;i<getCantCometas();i++){
		cometas[i]=obj4;
	}
//	obj4.~Cometa();
	
}

Sistema_Planetario::Sistema_Planetario(string nom,Estrella e, int cp, Planeta *pl, int ccin, Cinturon_Asteriodes *cin, int ccom, Cometa *c){
	nombreSistema=nom;
	estrella=e;
	cantPlanetas=cp;
	*planetas=*pl;
	cantCinturonesAst=ccin;
	*cinturones=*cin;
	cantCometas=ccom;
	*cometas=*c;
	//constructor con parametros
}

//sets
	void Sistema_Planetario::setNombreSistema(string nom){
		nombreSistema=nom;
	}
	
	void Sistema_Planetario::setEstrella(Estrella e){
		estrella=e;
	}

	void Sistema_Planetario::setCantPlanetas(int cp){
		cantPlanetas=cp;
	}
	
	void Sistema_Planetario::setPlanetas(Planeta *p){
		*planetas=*p;
	}
	
	void  Sistema_Planetario::setCantCinturonesAst(int ccin){
		cantCinturonesAst=ccin;
	}
	void Sistema_Planetario::setCinturones(Cinturon_Asteriodes *cin){
		*cinturones=*cin;
	}
	void Sistema_Planetario::setCantCometas(int ccom){
		cantCometas=ccom;
	}
	void Sistema_Planetario::setCometas(Cometa *c){
		*cometas=*c;
	}
	
	//gets
	string Sistema_Planetario::getNombreSistema(){
		return nombreSistema;
	}
	Estrella Sistema_Planetario::getEstrella(){
		return estrella;
	}
	int Sistema_Planetario::getCantPlanetas(){
		return cantPlanetas;
	}
	Planeta Sistema_Planetario::getPlanetas(){
		return *planetas;
	}
	int Sistema_Planetario::getCantCinturonesAst(){
		return cantCinturonesAst;
	}
	Cinturon_Asteriodes Sistema_Planetario::getCinturones(){
		return *cinturones;
	}
	int Sistema_Planetario::getCantCometas(){
		return cantCometas;
	}
	Cometa Sistema_Planetario::getCometas(){
		return *cometas;
	}
	
	void Sistema_Planetario::ejemploSistema(){//muestra un sistema solar de ejemplo.
		
		
		setNombreSistema("Ejemplo");
		
		estrella.setNombre("Sol");
		estrella.setDiametro_Ecuatorial(80);
		estrella.setTemperatura(5000);
		estrella.setColor(YELLOW);
		estrella.setClasificacion('G');
		

	
		setCantPlanetas(4);
		

		planetas[0].setNombre("Tierra");
		planetas[0].setDiametro_Ecuatorial(40);
		planetas[0].setRadio_Orbital(150);
		planetas[0].setPeriodo_Orbital(30);
		planetas[0].setPeriodo_Rotacion(20);
		planetas[0].setColor(BLUE);
		planetas[0].setMasa(30000);
		planetas[0].setCantidadLunas(2);
		
		Satelite obj;
		obj.setNombre("Luna");
		obj.setDiametro_Ecuatorial(20);
		obj.setRadio_Orbital(40);
		obj.setColor(LIGHTGRAY);
		obj.setMasa(10000);
		
		Satelite obj2;
		obj2.setNombre("Luna2");
		obj2.setDiametro_Ecuatorial(20);
		obj2.setRadio_Orbital(80);
		obj2.setColor(BROWN);
		obj2.setMasa(11000);
		
		Satelite *moons;
		moons= new Satelite[planetas[0].getCantidadLunas()];// se crea en si lo que es el vector de lunas
		moons[0]=obj;
		moons[1]=obj2;
		
		planetas[0].setLunas(moons);
		
		
		
		planetas[1].setNombre("Titano");
		planetas[1].setDiametro_Ecuatorial(30);
		planetas[1].setRadio_Orbital(250);
		
		planetas[1].setColor(RED);
		planetas[1].setCantidadLunas(0);
		planetas[1].setPeriodo_Orbital(60);
		planetas[1].setPeriodo_Rotacion(40);
		
		Cinturon_Asteriodes cint;
		cint.setNombre(" Mini cinturon");
		cint.setDistSol(40);
		cint.setAncho(10);
		cint.setColor(YELLOW);
		
		planetas[1].setCinturon(cint);
		

		planetas[2].setNombre("Namek");
		planetas[2].setDiametro_Ecuatorial(60);
		planetas[2].setRadio_Orbital(350);
		planetas[2].setPeriodo_Orbital(100);
		planetas[2].setPeriodo_Rotacion(60);
		planetas[2].setColor(GREEN);
		planetas[2].setMasa(80000);
		planetas[2].setCantidadLunas(0);
		
		planetas[3].setNombre("Jardin de Thanos");
		planetas[3].setDiametro_Ecuatorial(40);
		planetas[3].setRadio_Orbital(550);
		planetas[3].setPeriodo_Orbital(330);
		planetas[3].setPeriodo_Rotacion(220);
		planetas[3].setColor(CYAN);
		planetas[3].setMasa(90000);
		planetas[3].setCantidadLunas(1);
		
		Satelite obj3;
		obj3.setNombre("Luna de Thanos");
		obj3.setDiametro_Ecuatorial(10);
		obj3.setRadio_Orbital(40);
		obj3.setColor(LIGHTGRAY);
		obj3.setMasa(4000);
		
		Satelite *moons2;
		moons2= new Satelite[planetas[3].getCantidadLunas()];// se crea en si lo que es el vector de lunas
		moons2[0]=obj3;
		
		planetas[3].setLunas(moons2);
		
		Cinturon_Asteriodes cint2;
		cint2.setNombre(" Mini cinturon2");
		cint2.setDistSol(70);
		cint2.setAncho(10);
		cint2.setColor(RED);
		
		planetas[3].setCinturon(cint2);
		
		
		
		setCantCinturonesAst(1);
		
		cinturones[0].setNombre(" Gran Cinturon");
		cinturones[0].setDistSol(400);
		cinturones[0].setAncho(35);
		cinturones[0].setColor(WHITE);
		
		setCantCometas(1);
		
		cometas[0].setNombre("Fugaz");
		cometas[0].setDiametro_Ecuatorial(10);
		cometas[0].setColor(MAGENTA);
		cometas[0].setRadio_Orbital(683+estrella.getDiametro_Ecuatorial());
		
		
		mostrarDatos();
		animacion();
		
	}
	
	void Sistema_Planetario::agregarEstrella(){//llena datos de estrella
		
		string nom; int de; int t; int c;char cl;
		estrella.setRadio_Orbital(0);
		estrella.setPeriodo_Orbital(0);
		estrella.setPeriodo_Rotacion(0);
		estrella.setMasa(0);
		
		cout<<" Digite los datos de la Estrella:"<<endl;
		cout<<" Nombre: 	";cin>>nom;
		estrella.setNombre(nom);
		cout<<endl;
		cout<<" Diametro Ecuatorial:	"; cin>>de;
		estrella.setDiametro_Ecuatorial(de);
		cout<<endl;
		cout<<" EL color y clasificacion seran dados segun la temperatura asignada en grados Kelvin."<<endl;
		cout<<" Digite la temperatura (MAYOR a 3000 °K): 	"; cin>>t;
		estrella.setTemperatura(t);
		cout<<endl;
		
		if(estrella.getTemperatura()<3000){
			estrella.setTemperatura(3000);
		}
		//ahora se asigna color y clasificaiion
		if(estrella.getTemperatura()>=3000&&estrella.getTemperatura()<=3500){
			estrella.setColor(RED);
			estrella.setClasificacion('M');
		}
		if(estrella.getTemperatura()>=3500&&estrella.getTemperatura()<=5000){
			estrella.setColor(LIGHTRED);
			estrella.setClasificacion('K');
		}
		if(estrella.getTemperatura()>=5000&&estrella.getTemperatura()<=6000){
			estrella.setColor(YELLOW);
			estrella.setClasificacion('G');
		}
		if(estrella.getTemperatura()>=6000 &&estrella.getTemperatura()<=7500 ){
			estrella.setColor(YELLOW);
			estrella.setClasificacion('F');
		}
		if(estrella.getTemperatura()>=7500 &&estrella.getTemperatura()<=11000 ){
			estrella.setColor(WHITE);
			estrella.setClasificacion('A');
		}
		if(estrella.getTemperatura()>=11000 &&estrella.getTemperatura()<=25000 ){
			estrella.setColor(LIGHTBLUE);
			estrella.setClasificacion('B');
		}
		if(estrella.getTemperatura()>=25000 &&estrella.getTemperatura()<=40000 ){
			estrella.setColor(LIGHTMAGENTA);
			estrella.setClasificacion('O');
		}
		if(estrella.getTemperatura()>=40000 ){
			estrella.setColor(BLUE);
			estrella.setClasificacion('O');
		}
		cout<<" Listo."<<endl;
		}
	
	void Sistema_Planetario::agregarPlanetas(){//agrega los planetas en un sistema solar
		
		int cp;
		cout<<" Digite la cantidad de planetas:		";cin>>cp;
		setCantPlanetas(cp);
		cout<<endl;
		
		if(cp!=0){
		
		cout<<" Ahora digite los datos de cada planeta. "<<endl;
		
		string nom ;int de; int ro; int po; int pr; int c;int m; //int cantl; Satelite *l;Cinturon_Asteriodes cin;
		bool eleccion=0;
		
		for (int i=0;i<getCantPlanetas();i++){
			planetas[i].setX(0);
			planetas[i].setY(0);
			planetas[i].setTemperatura(0);
			
			cout<<" Planeta "<<"["<<i<<"]"<<endl;
			cout<<" Nombre: 	"; cin>>nom;
			planetas[i].setNombre(nom);
			cout<<endl;
			cout<<" Diametro ecuatorial :	"; cin>>de;
			planetas[i].setDiametro_Ecuatorial(de);
			cout<<endl;
			cout<<" Radio orbital (Distancia al cuerpo celeste sobre el que gira):		"; cin>>ro;
			planetas[i].setRadio_Orbital(ro);
			cout<<endl;
			cout<<" Periodo orbital (Dias que dura el año):	";cin>>po;
			planetas[i].setPeriodo_Orbital(po);
			cout<<endl;
			cout<<" Periodo Rotacion (Horas que dura el dia):	"; cin>>pr;
			planetas[i].setPeriodo_Rotacion(pr);
			cout<<endl;
			cout<<" Seleccione un color:";
			cout<<" 1)BLUE 2)GREEN 3)CYAN  4)RED 5)MAGENTA 6)BROWN 7)LIGHTGRAY 8)DARKGRAY"<<endl;
            cout<<" 9)LIGHTBLUE 10)LIGHTGREEN 11)LIGHTCYAN 12)LIGHTRED 13)LIGHTMAGENTA 14)YELLOW 15)WHITE"<<endl;
			cin>>c; planetas[i].setColor(c);
			cout<<endl;
			cout<<" Masa (Trillones de toneladas): 	"; cin>>m;
			planetas[i].setMasa(m);
			cout<<endl;
			planetas[i].agregarLunas();//agregar lunas
			cout<<" Desea un cinturon de asteriodes? "<<endl;
			cout<<" 1) Si-------------2) No		";cin>>eleccion;
			
			if(eleccion==1){//si decea agregar un cinturon de asteroides en un planeta
			planetas[i].agregarCinturon();	
			}
			
			cout<<" Listo."<<endl;
			
			}
		}
	}
	
	void Sistema_Planetario::agregarCinturones(){//agregar cinturones al sistema solar (alredodor del sol)
		int cc=0;
		
		cout<<" Digite la cantidad de cinturones que decea en torno a la estrella:		";cin>>cc;
		setCantCinturonesAst(cc);
		cout<<endl;
		if(cc!=0){
	
		cout<<" Ahora digite los datos de cada cinturon. "<<endl;
		
		string nom;int ro;int a;int c;
		
		for (int i=0;i<getCantCinturonesAst();i++){
			
			cout<<" Cinturon "<<"["<<i<<"]"<<endl;
			cout<<" Nombre: 	"; cin>>nom;
			cinturones[i].setNombre(nom);
			cout<<endl;
			cout<<" Radio orbital (Distancia al cuerpo celeste sobre el que gira):	  "; cin>>ro;
			cinturones[i].setDistSol(ro);
			cout<<endl;
			cout<<" Ancho del cinturon de Asteriodes: 	"; cin>>a;
			cinturones[i].setAncho(a);
			cout<<endl,
			cout<<" Seleccione un color:";
			cout<<" 1)BLUE 2)GREEN 3)CYAN  4)RED 5)MAGENTA 6)BROWN 7)LIGHTGRAY 8)DARKGRAY"<<endl;
            cout<<" 9)LIGHTBLUE 10)LIGHTGREEN 11)LIGHTCYAN 12)LIGHTRED 13)LIGHTMAGENTA 14)YELLOW 15)WHITE"<<endl;
			cin>>c; cinturones[i].setColor(c);
			cout<<endl;
			cout<<" Listo."<<endl;
		}	
		
		}
	}
	
	void Sistema_Planetario::agregarCometas(){//agrega cometas 
		int ccom=0;
		
		cout<<" Digite la cantidad de cometas a agregar (Maximo 2) :		";cin>>ccom;//maximo 2 cometas
		if(ccom>=2){
			setCantCometas(2);	
		}
		else{
			setCantCometas(ccom);	
		}
	
		cout<<endl;
		cout<<" Ahora digite los datos de cada cometa. "<<endl;
		
		string nom; int c;
		
		for (int i=0;i<getCantCometas();i++){
			cometas[i].setX(0);
			cometas[i].setY(0);
			cometas[i].setDiametro_Ecuatorial(10);
			
			if(i==0){//asigna centro sobre el que girara el cometa 0
				cometas[i].setRadio_Orbital(683+estrella.getDiametro_Ecuatorial());///aqui jugar segun la poscion i centrox 683
			}
			if(i==1){//asigna centro sobre el que girara el cometa 1
				cometas[i].setRadio_Orbital((getmaxx()-683)+estrella.getDiametro_Ecuatorial());///aqui jugar segun la poscion i centrox 683
			}
			
			cometas[i].setPeriodo_Orbital(0);
			cometas[i].setPeriodo_Rotacion(0);
			cometas[i].setTemperatura(0);
			cometas[i].setMasa(0);
			cometas[i].setLargoCola(0);
			
			cout<<" Cometa: ["<<i<<"]"<<endl;
			cout<<" Digite el nombre del cometa:	"; cin>>nom;
			cometas[i].setNombre(nom);
			cout<<endl;
			cout<<" Seleccione un color:";
			cout<<" 1)BLUE 2)GREEN 3)CYAN  4)RED 5)MAGENTA 6)BROWN 7)LIGHTGRAY 8)DARKGRAY"<<endl;
            cout<<" 9)LIGHTBLUE 10)LIGHTGREEN 11)LIGHTCYAN 12)LIGHTRED 13)LIGHTMAGENTA 14)YELLOW 15)WHITE"<<endl;
			cin>>c;
			cometas[i].setColor(c);
			cout<<endl;
			cout<<" Listo."<<endl;
			
		}
	}
	
	void Sistema_Planetario::agregarDatos(){//agrega todos los datos de un sistema planetario completo
		string nom;
		cout<<" Digite los datos del Sistema Planetario."<<endl<<endl;;
		cout<<" Digite el nombre del Sistema planetario:	 ";cin>>nom; 
		setNombreSistema(nom);
		cout<<endl;
		
		agregarEstrella();
		agregarPlanetas();
		agregarCinturones();
		agregarCometas();

		system("pause");
		system("cls");
	}
	
	void Sistema_Planetario::mostrarDatos(){//muestra todos los datos de un sistema planetario
		system("cls");
		
		cout<<" Codigo de colores: "<<endl;
		cout<<" 1)BLUE 2)GREEN 3)CYAN  4)RED 5)MAGENTA 6)BROWN 7)LIGHTGRAY 8)DARKGRAY"<<endl;
        cout<<" 9)LIGHTBLUE 10)LIGHTGREEN 11)LIGHTCYAN 12)LIGHTRED 13)LIGHTMAGENTA 14)YELLOW 15)WHITE"<<endl<<endl;
		
		cout<<" Datos  de sistema planetario:"<<endl<<endl;;
		cout<<" Datos de estrella:"<<endl;
		cout<<" Nombre: "<<estrella.getNombre()<<", Diametro Ecuatorial: "<<estrella.getDiametro_Ecuatorial()<<endl;
		cout<<" Temperatura: "<<estrella.getTemperatura()<<", Color: "<<estrella.getColor()<<", Clasificacion: "<<estrella.getClasificacion()<<endl;
		cout<<endl;
		
		if(getCantPlanetas()>0){//revisa si hay planetas
			
				cout<<"Datos de los Planetas: "<<endl<<endl;//muestra datos de los plenetas
		for(int i=0;i<getCantPlanetas();i++){
			
			cout<<" Planeta "<<"["<<i<<"]"<<endl;
			planetas[i].mostrarDatos();
			cout<<endl;
				
			}
			
		}
	
			
		if(getCantCinturonesAst()>0){//revisa si hay cinturones
			
			cout<<" Datos de los cinturones(en torno a la estrella)."<<endl<<endl;//cinturones 
		for(int i=0;i<getCantCinturonesAst();i++){
		cout<<" Cinturon: ["<<i<<"]"<<endl;
		cout<<" Nombre: "<<cinturones[i].getNombre()<<", Distancia a planeta: "<<cinturones[i].getDistSol()<<endl;
		cout<<" Ancho: "<<cinturones[i].getAncho()<<" , Color: "<<cinturones[i].getColor()<<endl;
		}
		cout<<endl;
		}
			
		
		if(getCantCometas()>0){//revisa si hay cometas
		cout<<" Datos de los Cometas: "<<endl;
			
		for(int i=0;i<getCantCometas();i++){//cometas
			cout<<" Cometa: ["<<i<<"]"<<endl;
		cout<<" Nombre: "<<cometas[i].getNombre()<<", Color: "<<cometas[i].getColor()<<endl;
		}
			cout<<endl;
		}
			
		}	
		
		
	
	void Sistema_Planetario::editarDatos(){//edita datos de una manera muy general
		
		char loop='0';
		
		do{
		system("cls");
		
		cout<<" Selecione la accion a realizar:"<<endl;
		cout<<" 1) Editar Nombre del sistema planetario "<<endl;
		cout<<" 2) Editar datos de estrella"<<endl;
		cout<<" 3) Editar Datos de los planetas (incluye sus lunas y cinturones)"<<endl;
		cout<<" 4) Editar Datos de los cinturones de asteroides (en torno a la estrella)"<<endl;
		cout<<" 5) Editar datos de los Cometas "<<endl;
		cout<<" 6) Salir."<<endl;
		cin>>loop;
		
		switch(loop){//nombre
			system("cls");
			case '1':{string newnom; cout<<" Digite nuevo nombre: ";cin>>newnom; setNombreSistema(newnom);
				
				break;
			}
			case '2':{//estrelal
				system("cls");
				estrella.~Estrella();
				agregarEstrella();
				
				
				break;
			}
			case '3':{//planetas
				system("cls");
				agregarPlanetas();
				
				break;
			}
			case '4':{//cinturones
				system("cls");
				agregarCinturones();
				
				break;
			}
			case '5':{//cometas
				system("cls");
				agregarCometas();
				break;
			}
		}
	}while(loop!='6');
		
	}
	
	void Sistema_Planetario::eliminarDatos(){
		char loop='0';
		do{
		system("cls");	
		
		
		cout<<" Selecione la accion a realizar:"<<endl;
		cout<<" 1) Eliminar datos de estrella"<<endl;
		cout<<" 2) Eliminar un respectivo planeta (incluye sus lunas y cinturones)"<<endl;
		cout<<" 3) Eliminar todos los planetas (incluyendo sus lunas y cinturones)"<<endl;
		cout<<" 4) Eliminar un respectivo cinturon de asteroides (en torno a la estrella)"<<endl;
		cout<<" 5)Eliminar todos los cinturones de asteriodes (en torno a la estrella)"<<endl;
		cout<<" 6) Eliminar un respespectivo Cometa "<<endl;
		cout<<" 7)Eliminar ambos cometas"<<endl;
		cout<<" 8) Salir."<<endl;
		cin>>loop;
		
		
		switch (loop){
			
		
		case '1':{//estrella eliminar
		Estrella obj;
		estrella=obj;
			estrella.~Estrella();
			
			system("cls");
			cout<<" Listo"<<endl;
			system ("pause");
			break;
		}
		case '2':{ system("cls"); //eliminar un planeta
			int num; 
			Planeta obj;
			cout<<" Digite poscision de planeta a eliminar: "<<endl; cin>>num;
			planetas[num]=obj;
			planetas[num].~Planeta();
			
			for (int i=num;i<cantPlanetas;i++){//reordena el vector de sistemas solares
		planetas[i]=planetas[i+1];
	}
			
			cout<<" Listo"<<endl;
			system ("pause");
			break;
		}
		case '3':{//eliminar todos los planetas
			Planeta obj;
			for(int i=0;i<getCantPlanetas();i++){
			planetas[i]=obj;
			planetas[i].~Planeta();
			}
			cout<<" Listo.";
			system("pause");
			break;
		}
		case '4':{//eliminar un cinturon
			int num; 
			Cinturon_Asteriodes obj;
			cout<<" Digite poscision de cinturon a eliminar: "<<endl; cin>>num;
			cinturones[num]=obj;
			cinturones[num].~Cinturon_Asteriodes();
			
			
			for (int i=num;i<cantCinturonesAst;i++){//reordena el vector de sistemas solares
		cinturones[i]=cinturones[i+1];
	}
			break;
		}
		case '5':{//eliminar todos los cinturones
			Cinturon_Asteriodes obj;
			for(int i=0;i<getCantCinturonesAst();i++){
			cinturones[i]=obj;	
		cinturones[i].~Cinturon_Asteriodes();
		
	}cout<<" Listo.";
			system("pause");
			
			break;
		}
		case '6':{//eliminar un cometa
			int num; 
			Cometa obj;
			cout<<" Digite poscision de cometa a eliminar: "<<endl; cin>>num;
			cometas[num]=obj;
			cometas[num].~Cometa();
			
					for (int i=num;i<cantCometas;i++){//reordena el vector de sistemas solares
		cometas[i]=cometas[i+1];
	}
			
			break;
		}
		case '7':{// elimianr todos los cometas
		Cometa obj;
			for(int i=0;i<getCantCinturonesAst();i++){
			cometas[i]=obj;	
			cinturones[i].~Cinturon_Asteriodes();
			
			}cout<<" Listo.";
			system("pause");
			break;
		}
		
		}
		
	}while(loop!='8');
	}
	
	
	void Sistema_Planetario::fondo(){//dibuja estrellas de fondo

     srand(time(NULL));
     //Dibuja un terminado numero de pixeles en una posicion "aleatoria"
     for(int t=0;t<=300;t++){    
         putpixel((rand()% 1366),(rand()% 768),DARKGRAY); 
     }

	}
	
	
	void Sistema_Planetario::animacion(){//al agregar los cinturones empieza a parpadear mucho
		 int xcentro= 683;//getmaxx()/2;
		 int ycentro=384;//getmaxy()/2;
		

		initwindow(getmaxx(),getmaxy());		//1366,768				habre vnetana grafica
		setbkcolor(BLACK);
		cleardevice();
		
		fondo();//dibuja estrellas de fondo

		int angulo=0;
		
			while(!ismouseclick(WM_LBUTTONDOWN)){//mientras no lo clickee no se va a cerrar
			
			estrella.DibujarCuerpo_Celeste(xcentro,ycentro);//dibujar estrella
			
			if(getCantPlanetas()>0){// revisa si hay planetas
			
			
			int velocidad1=getCantPlanetas();//velocidad segun acercamiento al sol
			
			for(int i=0;i<getCantPlanetas();i++){	//planetas con lunas y cinturones
				planetas[i].movDibCuerpo_Celeste(xcentro,ycentro,angulo,velocidad1); //Grafica planetas
				
				if(planetas[i].getCantidadLunas()>0){//comprueba si es necesario graficar luna
				
			
				int velocidad2=planetas[i].getCantidadLunas();//velocidad segun acercamiento al planeta

				Satelite *lunaux;
				
				lunaux= new Satelite[planetas[i].getCantidadLunas()];// se crea en si lo que es el vector auxiliar de lunas 
			
				
				lunaux=planetas[i].getLunas();

				for (int j=0;j<planetas[i].getCantidadLunas();j++){
					lunaux[j].movDibCuerpo_Celeste(planetas[i].getX(),planetas[i].getY(),angulo, velocidad2);//se grafica las lunas
					velocidad2--;
						
				}
				
				}
				velocidad1--;
				
				if (planetas[i].getCinturon().getNombre()!=""){// revisa si hay cinturon alrededor del planeta
				planetas[i].getCinturon().dibujarCinturon(planetas[i].getX(),planetas[i].getY());//dibuja el cinturon del planeta					
				}

			}
		}
			
			
			if(getCantCinturonesAst()>0){// revisa si hay cinturones alrededor del sol
				
			for(int z=0;z<getCantCinturonesAst();z++){ //cinturones alrededor de la estrella
				
				cinturones[z].dibujarCinturon(xcentro,ycentro);//dibuja cinturon
			}	
			}
			
			if(getCantCometas()>0){//revisa si hay cometas
				for (int i=0;i<getCantCometas();i++){
					if(i==0){//para posicion 0
						
	
						cometas[i].movDibCuerpo_Celeste(0,ycentro,angulo,i+1);//dibuja primer cometa
						
											
						if(angulo<15){//especifica de donde se empesara a graficar la cola
						int yradio;
						yradio=(int)floor((xcentro+estrella.getDiametro_Ecuatorial())/2);

							cometas[i].dibujarCola(0,ycentro,345,angulo,xcentro+estrella.getDiametro_Ecuatorial(),yradio);//dibuja cola
							
					}
						if(angulo>345&&angulo!=0){//especifica de donde se empesara a graficar la cola
							int yradio;
						yradio=(int)floor((xcentro+estrella.getDiametro_Ecuatorial())/2);//acomoda el radio y de la orbita

							cometas[i].dibujarCola(0,ycentro,345,angulo,xcentro+estrella.getDiametro_Ecuatorial(),yradio);//dibuja cola
							
						}
					
				}
					else{//para poscion 1
						
						cometas[i].movDibCuerpo_Celeste(getmaxx(),ycentro,angulo,i+2);	//dibuja segundo cometa
						
						
						if(angulo>165&&angulo<195){//especifica de donde se empesara a graficar la cola
							
						int yradio;
						yradio=(int)floor(((getmaxx()-xcentro)+estrella.getDiametro_Ecuatorial())/2);	
						
							cometas[i].dibujarCola(getmaxx(),ycentro,165,angulo,(getmaxx()-xcentro)+estrella.getDiametro_Ecuatorial(),yradio);//grafica cola
							
							
						}
						
					}
					
				}
			}
			
			delay(20); //espera en milisegundos para empesar a borrar
			
			
			if(getCantPlanetas()>0){// revisa si hay planetas
			
			int velocidad1=getCantPlanetas();//resetea para no crear un gran retraso de borrado
			
			for(int i=0;i<getCantPlanetas();i++){
				planetas[i].movBorCuerpo_Celeste(xcentro,ycentro,angulo,velocidad1); //borra planetas
				
				if(planetas[i].getCantidadLunas()>0){// comprueba si es necesaria una luna

				int velocidad2=planetas[i].getCantidadLunas();
			
			Satelite *lunaux;
//				
				lunaux= new Satelite[planetas[i].getCantidadLunas()];// se crea en si lo que es el vector auxiliar de lunas 
//				
				
				lunaux=planetas[i].getLunas();

				for (int j=0;j<planetas[i].getCantidadLunas();j++){
					lunaux[j].movBorCuerpo_Celeste(planetas[i].getX(),planetas[i].getY(),angulo,velocidad2);//borra lunas
					velocidad2--;
					
//				lunaux[j].~Satelite();	//
				}	
				
				}
				velocidad1--;
				
				if (planetas[i].getCinturon().getNombre()!=""){//revisa si hay cinturon
				planetas[i].getCinturon().borrarCinturon(planetas[i].getX(),planetas[i].getY());//borra el cinturon del planeta					
				}

			}
	}
			
			
			if(getCantCinturonesAst()>0){// revisa si hay cinturones alrededor del sol
			for(int z=0;z<getCantCinturonesAst();z++){ // borra cinturones alrededor de la estrella
				cinturones[z].borrarCinturon(xcentro,ycentro);
			}
		}
			
		
		if(getCantCometas()>0){//revisa si hay cometas
				for (int i=0;i<getCantCometas();i++){
					if(i==0){//para posicion 0
						
	
						cometas[i].movBorCuerpo_Celeste(0,ycentro,angulo,i+1);//borra primer cometa

					}
				
					else{//para poscion 1
						
						cometas[i].movBorCuerpo_Celeste(getmaxx(),ycentro,angulo,i+2);	//borra segundo cometa
					
					}
					
				}
			}
			
		if(angulo==360){
		angulo=0;//reinia angulo
		}
		angulo++; 
		}
		
		
		getch();
	closegraph();
	clearmouseclick(WM_LBUTTONDOWN);	//cierra ventana grafica
	}


Sistema_Planetario::~Sistema_Planetario()
{
}
