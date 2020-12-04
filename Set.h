#ifndef SET_H
#define SET_H

#include <sstream>
using namespace std;
#include <iostream>
#include <string>

class Set {
  private:
    string st_nombre;
    string st_bonus;
  public:
    Set(); //Constructor por default
    Set(string st_nombre, string st_bonus); //Constructor
    string get_st_nombre(); // Getter
    string get_st_bonus(); // Getter

    string print();
};


/**
 * Constructor por default
 *
 * @param
 * @return Objeto Set
 */
Set::Set (){
  st_nombre=" ";
  st_bonus=" ";
}

/**
 * Constructor
 *
 * @param nombre del set, tipo de bonus
 * @return Objeto Set
 */
Set::Set(string n, string b){
  st_nombre=n;
  st_bonus=b;
}

/**
 * getter nombre set
 *
 * @param
 * @return string: nombre del set
*/
string Set::get_st_nombre(){
  return st_nombre;
}

/**
 * getter tipo de bonus
 *
 * @param
 * @return string: tipo de bonus
*/
string Set::get_st_bonus(){
  return st_bonus;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos del set
*/
string Set::print(){
  stringstream aux;
  aux << st_nombre << " nivel requerido " << st_bonus<<endl;
  return aux.str();
}


#endif