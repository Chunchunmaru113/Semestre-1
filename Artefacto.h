#ifndef ARTEFACTO_H
#define ARTEFACTO_H

#include "Dominio.h"
#include "Set.h"
#include <string>
using namespace std;
#include <iostream>

class Artefacto{
  private:
    Dominio lugar;
    Set propiedades;
  public:
    Artefacto(Dominio l, Set p); //Cosntructor parametros
    void printInfo();
};

//Constructor parametros
Artefacto::Artefacto(Dominio l, Set p){
  lugar=l;
  propiedades=p;
}


void Artefacto::printInfo(){
  cout<<"Dominio: "<<lugar.to_string();
  cout<<"Propiedades "<<propiedades.print()<<endl;
}

#endif