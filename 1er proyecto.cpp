#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#ifndef Limite
#define Limite 1000
#endif

using namespace std;



using namespace std;
int n=0,ncuantos,resultado;

class Vacas {
public:

//constructor y destructor
Vacas() {}
~Vacas(){}

private:

string v_nombre;
string v_raza;
float v_peso;
float  v_litros;


public:
       

void setnombre(string nombre){
	 v_nombre=nombre;
 }
string getnombre(){
    return v_nombre;
}
    
void setraza( string raza){
	v_raza = raza;
}
string getraza(){
    return v_raza;
}
    
void setpeso(float p) {
	v_peso=p;
}

float getpeso(){
    return v_peso;
    }   
    

void setlitros( float l) 
{ v_litros= l;
}
float getlitros(){
    return v_litros;
    
    }
};
int main(int argc, char** argv) {
	int nVacas,opc;
	Vacas LVacas[Limite]; 
	Vacas auxiliar;
	cout<<"Cuantas Vacas Desea Ingresar?\n->:";
	cin>>nVacas;
	system("cls");
	
	for(int x=0;x<nVacas;x++){
		string nom,raz;
    	float pro,pes;   
       
   		cout<<"\nVaca Numero: "<<x+1<<endl;
   		cout<<"\n nombre : ";
   		cin>>nom;
   		LVacas[x].setnombre(nom);
   		cout<<"\n raza : ";
   		cin>>raz;
   		LVacas[x].setraza(raz);
   		cout<<"\n peso : ";
   		cin>>pes;
   		LVacas[x].setpeso(pes);
   		cout<<"\n promedio de leche : ";
   		cin>>pro;
   		LVacas[x].setlitros(pro);
   		system("cls");
	}
	//HASTA AQUI MARIANGEL	
	return 0;
}
