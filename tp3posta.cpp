//============================================================================
// Name        : tp03.cpp
// Author      : Nayla Taguada
// Version     :
// Copyright   : Your copyright notice
// Description : Preguntas y Respuestas
//============================================================================

//Nayla Taguada
//Curso: k1091
//AED - Turno: Noche
//Fecha 30/04/15

#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
	bool continuar = true, next = false;
	char answer='z',respuesta;
	      while(continuar){
	    	  if(answer == 'z'){
	    	  cout<<"------------------------------"<<endl;
	    	  cout<<"Juego de preguntas y respuestas"<<endl;
	    	  cout<<"------------------------------"<<endl;
	    	  cout<<endl;
	    	  cout<<"Elegir una categoria del juego"<<endl;
	    	  cout<<"A-Futbol"<<"      "<<"B-Geografia"<<endl;
	    	  cout<<"S-Salir"<<endl;
	    	  cin>>answer;
	          }
            system("cls");
	    	  if (answer =='A'||answer == 'a'){
	    		  if(next == false){
	    		  cout<<"¿Cuales son los colores de San lorenzo?"<<endl;
	    		  cout<<"1-Negro y Rojo"<<endl;
	    		  cout<<"2-Rojo y Azul"<<endl;
	    		  cout<<"3-Negro y Azul"<<endl;
	    		  cin>>respuesta;
	    		 switch(respuesta){

	    		 case '1':
	    			 cout<<"Incorrecto"<<endl;
	    			 system("pause");
	    			 next = true;
	    			 break;

	    		 case '2':
	    			 cout<<"Correcto"<<endl;
	    			 system("pause");
	    			 next = true;
	    			 break;

	    		 case '3':
	    			 cout<<"Incorrecto"<<endl;
	    			 system("pause");
	    			 next = true;
	    			 break;
	    		 default:
	    			 cout<<"Esa opcion no es correcta"<<endl;
	    		 }
	    		 }
	    		 if(next == true){
	    		 system("cls");
	    			 cout<<"¿Cual es el equipo al que a los hinchas se los consideran gallinas?"<<endl;
	    			 cout<<"1-River"<<endl;
	    			 cout<<"2-Independiente"<<endl;
	    			 cout<<"3-Boca"<<endl;
	    			 cin>>respuesta;
	    			 switch(respuesta){

	    			 	 case '1':
	    			 	 cout<<"Correcto"<<endl;
	    			 	 system("pause");
	    			 	next = false;
	    			 	answer ='z';
	    			 	   break;

	    			 	 case '2':
	    			 	 cout<<"Incorrecto"<<endl;
	    			 	 system("pause");
	    			 	 next = false;
	    			 	 answer = 'z';
	    			 	   break;

	    			 	 case '3':
	    			 	 cout<<"Incorrecto"<<endl;
	    			 	 system("pause");
	    			 	 next = false;
	    			 	 answer = 'z';
	    			 	    break;
	    			 	 default:
	    			 	 cout<<"Esa opcion no es correcta"<<endl;
	    			 	    		 }
	    		 }
	    	 }

	      else
	    	  if(answer =='B'||answer == 'b'){
	    		  if(next == false){
	    		  	    		  cout<<"¿Cuantas provincias tiene Argentina?"<<endl;
	    		  	    		  cout<<"1-Tiene 16"<<endl;
	    		  	    		  cout<<"2-Tiene 23"<<endl;
	    		  	    		  cout<<"3-Tiene 33"<<endl;
	    		  	    		  cin>>respuesta;
	    		  	    		 switch(respuesta){

	    		  	    		 case '1':
	    		  	    			 cout<<"Incorrecto"<<endl;
	    		  	    			 system("pause");
	    		  	    			next = true;
	    		  	    			 break;

	    		  	    		 case '2':
	    		  	    			 cout<<"Correcto"<<endl;
	    		  	    			 system("pause");
	    		  	    			 next = true;
	    		  	    			 break;

	    		  	    		 case '3':
	    		  	    			 cout<<"Incorrecto"<<endl;
	    		  	    			 system("pause");
	    		  	    			 next = true;
	    		  	    			 break;
	    		  	    		 default:
	    		  	    			 cout<<"Esa opcion no es correcta"<<endl;
	    		  	    		 }
	    		  	    		 }
	    		  	    		 if(next == true){
	    		  	    		 system("cls");
	    		  	    			 cout<<"¿Cual es la capital de Rusia?"<<endl;
	    		  	    			 cout<<"1-Moscu"<<endl;
	    		  	    			 cout<<"2-Madrid"<<endl;
	    		  	    			 cout<<"3-Nueva Delhi"<<endl;
	    		  	    			 cin>>respuesta;
	    		  	    			 switch(respuesta){

	    		  	    			 	 case '1':
	    		  	    			 	 cout<<"Correcto"<<endl;
	    		  	    			 	 system("pause");
	    		  	    			 	 next = false;
	    		  	    			 	 answer = 'z';
	    		  	    			 	   break;

	    		  	    			 	 case '2':
	    		  	    			 	 cout<<"Incorrecto"<<endl;
	    		  	    			 	 system("pause");
	    		  	    			 	 next = false;
	    		  	    			 	answer = 'z';
	    		  	    			 	   break;

	    		  	    			 	 case '3':
	    		  	    			 	 cout<<"Incorrecto"<<endl;
	    		  	    			 	 system("pause");
	    		  	    			 	 next = false;
	    		  	    			 	answer = 'z';
	    		  	    			 	    break;
	    		  	    			 	 default:
	    		  	    			 	 cout<<"Esa opcion no es correcta"<<endl;
	    		  	    			 	    		 }
	    		  	    		 }
	    	  }

	    	  if(answer =='S'||answer == 's'){
	return 0;
       }
	  }
}
