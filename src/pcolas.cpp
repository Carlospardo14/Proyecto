#include "pcolas.h"


void Pcolas::insertar(cola *cola_n)
{
cola aux, creado;
creado=(pnodo)malloc(sizeof(tiponodo));
cout<<"   \tBANCO DE AED"<<endl;
cout<<"   \n\tLe da la bienvenida\n"<<endl;
cout<<"   Estimado cliente: Introduzca su numero de cuenta. \n\t";
cin>>     creado->cedula;
cout<<"   Pronto sera atendido"<<endl;

	if((*cola_n)==NULL)
	{
	creado->siguiente=*cola_n;
	*cola_n=creado;
	}else{
		aux=*cola_n;
		while(aux!=NULL)
		{ 
		if(aux->siguiente==NULL)
			{
			creado->siguiente=aux->siguiente;
			aux->siguiente=creado;
			aux=aux->siguiente;
			}
		aux=aux->siguiente;
		}
	}
}

void Pcolas::mostrar_cola(cola cola_n)//
{
cola aux;
aux=cola_n;
	if(aux==NULL)
	{
	cout<<"No hay clientes en cola"<<endl;
	}else{
		while(aux!=NULL)
		{
		cout<<"cuenta: "<<aux->cedula<<endl;
		cout<<""<<endl;
		aux=aux->siguiente;
		cout<<"* Clientes ordenados por orden de llegada"<<endl;
		}
	}
}

void Pcolas::insertar_vip (cola *cola_vip){
cola aux_2, creado_vip;
     creado_vip=(pnodo)malloc(sizeof(tiponodo));
cout<<"   \tBanco AED"<<endl;
cout<<"   \n\tLe da la bienvenida\n"<<endl;
cout<<"   Estimado cliente: Introduzca su numero de cuenta\n\t";
cin>>     creado_vip->cedula;
cout<<"   Pronto sera atendido"<<endl;
	if((*cola_vip)==NULL){
		creado_vip->siguiente=*cola_vip;
		*cola_vip=creado_vip;
		}else{
			aux_2=*cola_vip;
			while(aux_2!=NULL){
				if(aux_2->siguiente==NULL){
				creado_vip->siguiente=aux_2->siguiente;
				aux_2->siguiente=creado_vip;
                			aux_2=aux_2->siguiente;
				}
             		aux_2=aux_2->siguiente;
			}
	}
}

void Pcolas::mostrar_cola_vip (cola cola_vip){//
cola aux_2;
    aux_2=cola_vip;
	if(aux_2==NULL){
	cout<<"No hay clientes V.I.P en cola"<<endl;
	}else{
		while(aux_2!=NULL){
		cout<<"cuenta: "<<aux_2->cedula<<endl;
		cout<<""<<endl;
		cout<<"* Clientes ordenados por orden de llegada"<<endl;
           		aux_2=aux_2->siguiente;
			}
		}
}

void Pcolas::pop (cola *cola_n){

if((*cola_n)==NULL){
cout<<"No hay clientes en cola "<<endl;
cout<<""<<endl;
}

	if((*cola_n)!=NULL){
		cout<<"Cliente: "<<(*cola_n)->cedula;
		cout<<" es su turno"<<endl;
		*cola_n=(*cola_n)->siguiente;
		free(cola_n);
		system("PAUSE");
		cout<<""<<endl;
		}
	
	if((*cola_n)==NULL){
	cout<<"No hay clientes en cola "<<endl;
	cout<<""<<endl;
	}else{
		cout<<"Cliente: "<<(*cola_n)->cedula;
		cout<<" es su turno"<<endl;
		*cola_n=(*cola_n)->siguiente;
		free(cola_n);
		system("PAUSE");
		cout<<""<<endl;
	}
}

void Pcolas::pop_vip(cola *cola_vip){

if(cola_vip!=NULL){
cout<<"Cliente: "<<(*cola_vip)->cedula;
cout<<" es su turno"<<endl;
*cola_vip=(*cola_vip)->siguiente;
free(cola_vip);
}else{
cout<<"No hay usuarios V.I.P en cola "<<endl;
}
}


void Pcolas::menu(){
short a;
Pcolas c;
do{
std::cout<<""<<std::endl;
std::cout<<"0 - Agregar Cliente"<<std::endl;
std::cout<<"1 - Agregar Cliente V.I.P"<<std::endl;
std::cout<<"2 - Solicitar Numero"<<std::endl;
std::cout<<"3 - Mostrar Cola"<<std::endl;
std::cout<<"4 - Mostrar Cola V.I.P"<<std::endl;
std::cout<<"5 - Salir del Sistema"<<std::endl;
std::cout<<""<<std::endl;

fflush(stdout);

std::cout<<"Opcion #:";
cin>>a;
std::cout<<""<<std::endl;

if(a ==5)
exit(1);

switch(a){
case 0:
                          c.insertar(&cola_n);
break;

case 1:
                             c.insertar_vip(&cola_vip);
break;

case 2:
                                 c.solicitar_numero();
break;

case 3:
                                      c.mostrar_cola(cola_n);//
break;

case 4:
                                           c.mostrar_cola_vip(cola_vip);//
break;

case 5:
salir();
break;

default:
puts("Usted no ha seleccionado nada, porfavor seleccione algo\n");
break;
	};
		}while(1);
	}

void Pcolas::solicitar_numero(){
pop(&cola_n);

if(cola_vip!=NULL){
                                            pop_vip(&cola_vip);
}else{
std::cout<<"No hay cliente V.I.P en cola"<<std::endl;
}

}

void Pcolas::salir(){
}
