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

//Constructor por default
Set::Set (){
  st_nombre=" ";
  st_bonus=" ";
}

//Constructor
Set::Set(string n, string b){
  st_nombre=n;
  st_bonus=b;
}

//Getters
string Set::get_st_nombre(){
  return st_nombre;
}

string Set::get_st_bonus(){
  return st_bonus;
}

string Set::print(){
  stringstream aux;
  aux << st_nombre << " nivel requerido " << st_bonus<<endl;
  return aux.str();
}


#endif