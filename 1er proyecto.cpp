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


int main(int argc, char *argv[]){
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

	do{
           system("PAUSE");
		   system("CLS");
		cout<<"\tBienvenido al menu\n\n ";
	    cout<<"\tEliga una opcion:"<<endl;
        cout<<"\t1. Ordenar por nombre"<<endl;
        cout<<"\t2. Ordenar por peso"<<endl;
        cout<<"\t3. Ordenar por raza"<<endl;
        cout<<"\t4. Ordenar por litros de leche"<<endl;
	    cout<<"\t5. Salir"<<endl<<endl;
        cout<<"\tOpcion: ";
		cin>>opc;

		
		switch(opc){
			case 1:
				for (int i = 0; i < nVacas; i++) {
	       	 	    for (int j = 0; j <= nVacas-2; j++) {
	                	string aux1=LVacas[j].getnombre();
	                    string aux2=LVacas[j+1].getnombre();
	                    char comparar1[15];
						char comparar2[15];
						int tamano1=aux1.size();
				   		int tamano2=aux2.size();
				   		for(int x=0;x<=tamano1;x++){
                    	  	comparar1[x]=aux1[x];
                    	}
						for(int x=0;x<=tamano2;x++){
	                       	comparar2[x]=aux2[x];
                       	} 	                     	 	    	
	                    if (strncmp(comparar1, comparar2,15)>0){
	                 		auxiliar = LVacas[j];
		             	   	LVacas[j] =LVacas[j+1];
		               		LVacas[j+1] = auxiliar;
			            }
	                } 
            	}
			        	
			    cout<<"Lista ordenada por nombre:\n\n"<<endl;
    			cout<<"Nombre\tRaza\tPeso\tLitros\t\n";
    			for (int x=0;x<nVacas;x++){
					
					cout<<LVacas[x].getnombre()<<"\t"<<LVacas[x].getraza()<<"\t"<<LVacas[x].getpeso()<<"\t"<<LVacas[x].getlitros()<<"\n"; 	
				}
    		break;
    		case 2:
    			for(int i = 0; i < nVacas; i++) {
					for (int j = 0; j <= nVacas-2; j++) {
						if (LVacas[j].getpeso()> LVacas[j+1].getpeso()) {
									 
							auxiliar = LVacas[j];
							LVacas[j]=LVacas[j+1];
							LVacas[j+1]= auxiliar;
						}
					}
				}
    			
				
						
    			cout<<"Lista ordenada por peso:\n\n"<<endl;
    			cout<<"Nombre\tRaza\tPeso\tLitros\t\n";
    			for (int x=0;x<nVacas;x++){
					
					cout<<LVacas[x].getnombre()<<"\t"<<LVacas[x].getraza()<<"\t"<<LVacas[x].getpeso()<<"\t"<<LVacas[x].getlitros()<<"\n";
    			}
    		break;
    		case 3:
    					for (int i = 0; i < nVacas; i++) {
	       	 	    for (int j = 0; j <= nVacas-2; j++) {
	                	string aux1=LVacas[j].getraza();
	                    string aux2=LVacas[j+1].getraza();
	                    char comparar1[15];
						char comparar2[15];
						int tamano1=aux1.size();
				   		int tamano2=aux2.size();
				   		for(int x=0;x<=tamano1;x++){
                    	  	comparar1[x]=aux1[x];
                    	}
						for(int x=0;x<=tamano2;x++){
	                       	comparar2[x]=aux2[x];
                       	} 	                     	 	    	
	                    if (strncmp(comparar1, comparar2,15)>0){
	                 		auxiliar = LVacas[j];
		             	   	LVacas[j] =LVacas[j+1];
		               		LVacas[j+1] = auxiliar;
			            }
	                } 
            	}
					
				cout<<"Lista ordenada por raza:\n\n"<<endl;
    			cout<<"Nombre\tRaza\tPeso\tLitros\t\n";
    				for (int x=0;x<nVacas;x++){
						cout<<LVacas[x].getnombre()<<"\t"<<LVacas[x].getraza()<<"\t"<<LVacas[x].getpeso()<<"\t"<<LVacas[x].getlitros()<<"\n";
					}
						
				break;
    				
    			case 4:
    				for(int i = 0; i < nVacas; i++) {
						for (int j = 0; j <= nVacas-2; j++) {
							if (LVacas[j].getlitros()> LVacas[j+1].getlitros()) {
									 
								auxiliar = LVacas[j];
								LVacas[j]=LVacas[j+1];
								LVacas[j+1]= auxiliar;
							}
						}
					}
    					
    				cout<<"Lista ordenada por Litros de leche:\n\n"<<endl;
    				cout<<"Nombre\tRaza\tPeso\tLitros\t\n";
    				for (int x=0;x<nVacas;x++){
					
						cout<<LVacas[x].getnombre()<<"\t"<<LVacas[x].getraza()<<"\t"<<LVacas[x].getpeso()<<"\t"<<LVacas[x].getlitros()<<"\n";
					}
            	break;
            		
        }
	}while(opc!=5);

system("PAUSE");
return 0;
}

