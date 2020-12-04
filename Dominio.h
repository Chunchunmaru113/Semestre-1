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
/**
 * Constructor por default
 *
 * @param
 * @return Objeto Personaje
 */
Dominio::Dominio (){
  dominio="";
  nivel_dominio=0;
}


/**
 * Constructor por default
 *
 * @param
 * @return Objeto Dominio
 */
Dominio::Dominio(string d, int n){
  dominio=d;
  nivel_dominio=n;
}

/**
 * getter del nombre  dominio
 *
 * @param
 * @return string: nombre del dominio
*/
string Dominio::get_dominio(){
  return dominio;
}

/**
 * getter nivel del dominio
 *
 * @param
 * @return int: nivel del dominio
*/
int Dominio::get_nivel_dominio(){
  return nivel_dominio;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos del Dominio
*/
string Dominio::to_string(){
  stringstream aux;
  aux << dominio << " nivel requerido " << nivel_dominio;
  return aux.str();
}

#endif