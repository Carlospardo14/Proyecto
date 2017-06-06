#include <iostream>

class Nodo{
public:
	int cedula;
	Nodo *siguiente;

	Nodo(int dato,Nodo *sig);
	Nodo(int dato);

};