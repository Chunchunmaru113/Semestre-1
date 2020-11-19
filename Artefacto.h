
//Proyecto Genshin Impact Calculator
//Oscar Eduardo Nieto Espitia
//A01705090

//Clase Artefacto, maneja dominios que necesitas farmear dependiendo del dia para 
//farmear artefactos dentro del juego Genshin Impact

#include <iostream>
using namespace std;


//const lunes=1

class Artefacto {
  public: //Metodos
    Artefacto(string,string,int); //Constructor
    void recoleccion_artefactos(); //Artefacto que se puede farmear cierto dia de la semana
  private: //Atributos
    //Material que dropea un enemigo
    string artefacto;
    string dominio;
    int dia;
};

//Constructor, inicializa Atributos
Artefacto::Artefacto(string artefactoq,string dominioq,int diaQ){
   artefacto = artefactoq;
   dominio = dominioq;
   dia=diaQ;
}

//Farmeo de Artefactos dependiendo del Dominio
void Artefacto::recoleccion_artefactos(){
  cout<<"Artefacto recomendado para este personaje"<<endl;
  cout<<"Hoy puedes farmear "<<artefacto<<endl;
  cout<<"En el dominio "<<dominio<<endl<<endl;
}
