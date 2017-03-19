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
	return 0;
}
