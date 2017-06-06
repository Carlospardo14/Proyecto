#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include  <string.h>



using namespace std;
class Pcolas
{
public:

typedef struct nodo{
int cedula;
struct nodo*siguiente;
}tiponodo;

typedef tiponodo *pnodo;
typedef tiponodo *cola;
cola cola_n=NULL;
cola cola_vip=NULL;
int solic;
void insertar(cola *cola_n);
void mostrar_cola (cola cola_n);//
void insertar_vip (cola *cola_vip);
void mostrar_cola_vip (cola cola_vip);//
void pop (cola *cola_n);
void pop_vip(cola *cola_vip);
void menu();
void solicitar_numero();
void salir();
	
};


