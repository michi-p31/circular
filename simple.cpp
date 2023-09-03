#include<iostream>
 
 using namespace::std;
 
 
 struct nodo{
int dato;
      nodo*siguiente;
 	
 }*primero,*ultimo;
 
 void insertarNodo();
 void desplegarLista();
 
 int main(){
insertarNodo();
insertarNodo();
insertarNodo();
insertarNodo();
cout<<" Lista circular simp ingreso ";
desplegarLista();
 	return 0;
 	
 }
 
  void insertarNodo(){
  	
  	nodo*nuevo=new nodo();
  	cout<<"Ingrese el dato que contendra el nuevo nodo: ";
  	cin>>nuevo->dato;
  	if(primero==NULL){
  		primero=nuevo;
  		primero->siguiente=primero;
  		ultimo=primero;
	  }else{
	  	ultimo->siguiente=nuevo;
	  	nuevo->siguiente=primero;
	  	ultimo=nuevo;
	  }
	  cout<<"  Nuevo nodo ingresado  ";
  }
void desplegarLista(){
	
	nodo*actual=new nodo();
	actual=primero;
	if(primero!=NULL){
		do{
			cout<<" \n "<<actual->dato;
			actual=actual->siguiente;
			
		}while(actual!=primero);
	}else{
		
		cout<<" Lista se encuentra vaica ";
		
	}
	
}
