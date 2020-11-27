#ifndef DOMINIO_H
#define DOMINIO_H

#include <sstream>
using namespace std;
#include <iostream>
#include <string>

class Dominio {
  private:
    string dominio;
    int nivel_dominio;
  public:
    Dominio(); //Constructor por default
    Dominio(string dominio, int nivel_dominio); //Constructor
    void set_nivel_dominio(); //Setter
    string get_dominio(); // Getter
    int get_nivel_dominio(); // Getter
    string to_string();
};

//Constructor por default
Dominio::Dominio (){
  dominio="";
  nivel_dominio=0;
}

//Constructor
Dominio::Dominio(string d, int n){
  dominio=d;
  nivel_dominio=n;
}

//Getters
string Dominio::get_dominio(){
  return dominio;
}

int Dominio::get_nivel_dominio(){
  return nivel_dominio;
}

string Dominio::to_string(){
  stringstream aux;
  aux << dominio << " nivel requerido " << nivel_dominio;
  return aux.str();
}

#endif