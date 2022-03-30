#include<iostream>
#include<cstdlib>
#include<fstream>
int Cociente_uno(int n,int div, int res,int *ct);
int Cociente_dos(int n,int div, int res,int *ct);
int Cociente_tres(int n,int div,int *ct);
void peor_caso(int a,int *ct);
void mejor_caso(int a,int *ct);
using namespace std;
//Funcion principal
int main(){
	int *ct,cont=0;
	ct=&cont;
	
	//peor_caso(20,ct);
	mejor_caso(20,ct);
}

int Cociente_uno(int n,int div, int res,int *ct){
	*ct=0;
	int q=0;*ct=0;
	while(n>=div){
		*ct=0;
		*ct=0;
		n=n-div;*ct=0;
		q=q+1;*ct=0;
	}
	*ct=0;
	res=n;*ct=0;
	return q;*ct=0;
}

int Cociente_dos(int n,int div, int res,int *ct){
	int dd=div;
	int q=0;
	int r=n;
	while(dd<=n){
		dd=2*dd;
		
	}
	while(dd>div){
		dd=dd/2;
		q=2*q;
		if(dd<=r){
			r=r-dd;
			q=q+1;
		}
	return q;
	}
}
int Cociente_tres(int n,int div,int *ct){
	*ct=0;
	if(div>n){
		*(ct)++;
		*(ct)++;
		return 0;
	}
	else
	*(ct)++;
	*(ct)++;
	*(ct)++;
		return 1 + Cociente_tres(n-div,div,ct);
}
void peor_caso(int a,int *ct){
	//ofstream archivo;//Declaracion de archivo
	//archivo.open("grafica_Cociente3.csv",ios::out);//Creacion de archivo csv
	int div=1;
	int res;
	for(int i=1;i<a;i++){
		cout<<"Dividendo: "<<i<<endl;
		cout<<"Divisor: "<<div<<endl;
		cout<<"Cociente:"<<Cociente_uno(i,div,res,ct)<<endl;//Cociente_tres(i,div,ct)<<endl;
		cout<<"contador: "<<*ct<<endl;
		//archivo<<i<<",";
		//archivo<<*ct<<endl;
	}
	//archivo.close();//Cierre del archivo csv
}
void mejor_caso(int a,int *ct){
	int res;
	
		for(int i=1;i<a;i++){
		cout<<"Dividendo: "<<i<<endl;
		cout<<"Divisor: "<<i<<endl;
		cout<<"Cociente:"<<Cociente_uno(i,i,res,ct)<<endl;//Cociente_tres(i,div,ct)<<endl;
		cout<<"contador: "<<*ct<<endl;
		//archivo<<i<<",";
		//archivo<<*ct<<endl;
	}
}
