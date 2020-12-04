//Clase Artefactoo que se compone de las clases Dominio y Set.

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
/**
 * Constructor por default
 *
 * @param Dominio donde se puede farmear, tipo de set de artefacto
 * @return Objeto Personaje
 */
Artefacto::Artefacto(Dominio l, Set p){
  lugar=l;
  propiedades=p;
}

/**Toma los string armados en las otras clases y los junta
 *
 * @param
 * @return
*/
void Artefacto::printInfo(){
  cout<<"Dominio: "<<lugar.to_string();
  cout<<"Propiedades "<<propiedades.print()<<endl;
}

#endif