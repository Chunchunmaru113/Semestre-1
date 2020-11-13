
//Proyecto Genshin Impact Calculator
//Oscar Eduardo Nieto Espitia
//A01705090

//Clase Personajes, maneja los recursos necesarios a farmear dependiendo del dia para 
//ascender al personaje dentro del juego Genshin Impact

#include <iostream>
using namespace std;


//const lunes=1

class Personaje {
  public: //Metodos
    Personaje(string,string,string,string,string,int); //Constructor
    void recursos_diarios(); //Recursos que se pueden farmear todos los dias
    void recursos_limitados(); //Recursos que se pueden farmear ciertos dias de la semana
  private: //Atributos
    //Material que dropea un boss
    string materiales_de_ascension_jefe;
    //Material que dropea un boss
    string materiales_de_ascension_jefe2;
    //Material que lo encuentras en el mundo
    string materiales_de_ascension_mundo;
    //Material que dropea un enemigo
    string materiales_de_ascension_enemigo;
    //Material que requiere resina
    string materiales_de_ascension_limitado;
    //Dia de la semana
    int dia;
    
};

//Constructor, inicializa Atributos
Personaje::Personaje(string materiales_de_ascension_jefeQ,string materiales_de_ascension_jefe2Q,string materiales_de_ascension_mundoQ,string materiales_de_ascension_enemigoQ,string materiales_de_ascension_limitadoQ, int diaQ){
   materiales_de_ascension_jefe = materiales_de_ascension_jefeQ;
   materiales_de_ascension_jefe2 = materiales_de_ascension_jefe2Q;
   materiales_de_ascension_mundo = materiales_de_ascension_mundoQ;
   materiales_de_ascension_enemigo = materiales_de_ascension_enemigoQ;
   materiales_de_ascension_limitado = materiales_de_ascension_limitadoQ;
   dia=diaQ;
}

//Farmeo de Recursos recursos_diarios
void Personaje::recursos_diarios(){
  cout<<"Recursos necesarios para ascender el personaje a nivel 80:"<<endl;
  cout<<"37 fragmentos de "<<materiales_de_ascension_jefe<<endl;
  cout<<"26 "<<materiales_de_ascension_jefe2<<endl;
  cout<<"108 de "<<materiales_de_ascension_mundo<<endl;
  cout<<"216 de "<<materiales_de_ascension_enemigo<<endl<<endl;
}

//Farmeo de Talentos
//La intencion es que el usuario escriba el dia actual (lunes, martes...) y dependiendo de la fecha de la computadora te diga si ese dia puedes farmear ese material. El problema es que no se como obtener una variable que contenga el dia de acuerdo al reloj de la computadora.
void Personaje::recursos_limitados(){
  cout<<"Materiales de ascencion de talentos:"<<endl;
  cout<<"Hoy puedes farmear "<<materiales_de_ascension_limitado<<endl<<endl;
}
