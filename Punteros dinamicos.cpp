#include <iostream>
using namespace std;

	/*int edad, *p_edad;
	p_edad =&edad;
	cout<<"Ingrese edad:";
	cin>>edad;
	cout<<*p_edad<<endl;
	
	if (*p_edad>18){
		cout<<"Mayor de edad";	
	}else {
		cout<<"Menor de edad"<<endl;
	}*/
	
	/*
	int total = 0;
	int notas[total];
	char res;
	int *p_notas = notas;
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n):";
		cin>>res;
	}while(res=='s' || res=='S');
	
cout<<"----Mostrar notas -----"<<endl;
for (int i=0;i<total;i++){
	cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
	p_notas++;  
}*/
	
	//PUNTEROS CON ASIGNACION DE MEMORIA DINAMICA
	//el OPERADOR new = sirve para reservar un espacio en memoria
	// el OPERADOR delete = para liberar la memoria
	
/*	int total = 0, *p_notas;
	p_notas = new int [total];
	char res;
	
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n):";
		cin>>res;
	}while(res=='s' || res=='S');
	
cout<<"----Mostrar notas -----"<<endl;
for (int i=0;i<total;i++){
	cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
	p_notas++;  
}
delete[] p_notas;
*/

//punteros bidimensionales

main () {

	int fil = 0, col =0, **pm_notas;
	cout<<"Ingrese la cantidad de Estudiantes:";
	cin>>fil;
	cout<<"Ingrese la cantidad de Notas por estudiante:";
	cin>>col;
	
	pm_notas = new int *[fil];
	for (int i=0;i<fil;i++){
		pm_notas[i]=new int[col];
	}
	for (int i=0;i<fil;i++){
		cout<<"__________Estudiante__________"<<i<<endl;
		for (int ii=0;ii<col;ii++){
			cout<<"Nota:"<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);

	}
	cout<<"____________________"<<endl;
	
	}
	cout<<"-------Mostrar Notas--------"<<endl;
	for (int i=0;i<fil;i++){
		
		for (int ii=0;ii<col;ii++){
		cout<<*(*(pm_notas+i)+ii);
	}
	cout<<"______________"<<endl;
}

for (int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete []pm_notas;
}

	
