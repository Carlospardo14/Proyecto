#include "pcolas.h"

struct perly{
char uxer[];
}data;

struct perly *p =&data;


int main(int argc, char*argv[])
{
Pcolas s;

std::cout<<"   \t\tBanco AED 2017-2"<<std::endl;
std::cout<<"   \t\tManejo de  colas en un Banco"<<std::endl;
std::cout<<"   \n\t\tLogin: ";
char usuario[7]="carlos";
cin.getline(p->uxer,7);

if(strcmp(p->uxer,usuario)==0){
std::cout<<"\t\tBienvenid@ al sistema "<<std::endl; s.menu();
std::cout<<""<<std::endl;
	}else{
	std::cout<<"Acceso Denegado. Consulte al Admisnistrador "<<std::endl;
	}

system("PAUSE");
return EXIT_SUCCESS;
}




