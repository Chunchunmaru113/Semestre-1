
//Proyecto Genshin Impact Calculator
//Oscar Eduardo Nieto Espitia
//A01705090

//Clase Armas, maneja los recursos necesarios a farmear dependiendo del dia para 
//ascender al personaje dentro del juego Genshin Impact

#include <iostream>
using namespace std;


//const lunes=1

class Arma {
  public: //Metodos
    Arma(string, string, string, int); //Constructor
    void recursos_diarios_arma(); //Recursos que se pueden farmear todos los dias
    void recursos_limitados_arma(); //Recursos que se pueden farmear ciertos dias de la semana
  private: //Atributos
    //Material que dropea un enemigo
    string materiales_de_ascension_enemigo_arma;
    //Material que dropea un enemigo
    string materiales_de_ascension_enemigo2_arma;
    //Material que requiere resina
    string materiales_de_ascension_limitado_arma;
    //Dia de la semana en donde se pueden farmear los objetos
    int dia;
};

//Constructor, inicializa Atributos
Arma::Arma(string materiales_de_ascension_enemigo_armaQ,string materiales_de_ascension_limitado_armaQ,string materiales_de_ascension_enemigo2_armaQ,int diaQ){
   materiales_de_ascension_enemigo_arma = materiales_de_ascension_enemigo_armaQ;
   materiales_de_ascension_enemigo2_arma = materiales_de_ascension_enemigo2_armaQ;
   materiales_de_ascension_limitado_arma = materiales_de_ascension_limitado_armaQ;
   dia=diaQ;
}

//Farmeo de Recursos recursos_diarios
void Arma::recursos_diarios_arma(){
  cout<<"216 de "<<materiales_de_ascension_enemigo_arma<<endl;
  cout<<"216 de "<<materiales_de_ascension_enemigo2_arma<<endl<<endl;
}

//Farmeo de Talentos
//La intencion es que el usuario escriba el dia actual (lunes, martes...) y dependiendo de la fecha de la computadora te diga si ese dia puedes farmear ese material. El problema es que no se como obtener una variable que contenga el dia de acuerdo al reloj de la computadora.
void Arma::recursos_limitados_arma(){
  cout<<"Materiales de ascencion de arma:"<<endl;
  cout<<"Hoy puedes farmear "<<materiales_de_ascension_limitado_arma<<endl<<endl;
}