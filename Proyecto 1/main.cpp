
#include"Simulador.h"
#include<iostream>
using namespace std;
int main(){
 

 Simulador espiraldelamuerte;
 espiraldelamuerte.menu();//menu principal para todo
	
	system ("pause");
	return 0;
}

/*algunos de los metodos usados en Cuerpo_Celeste y Sistema_Planetario se inspiraron en el trabajo de:
Meshizero Lagoluna: persona anonima que dejo un video con un ligero tutorial basico de un sistema solar o algo asi en youtube
link video:
https://www.youtube.com/watch?v=Vw8gCn3IIqc
link documento usado como guia basica proposionado en este video: 
https://www.youtube.com/redirect?redir_token=0wr2FfJs_QI-5A7Awvez83eorhh8MTU2ODc4Njg5MEAxNTY4NzAwNDkw&q=https%3A%2F%2Fdrive.google.com%2Fopen%3Fid%3D1lBEqTJX_w4lJQn9IrRBkZ4h-0SSrVad_&event=video_description&v=Vw8gCn3IIqc
link de pagina web para entender la parametrisacion de las elipses:
https://www.mathopenref.com/coordparamellipse.html

Obviamente esto fue una simple base, el resto de trabajo fue hecho por este estudiante de la UNA. Gracias*/ 
