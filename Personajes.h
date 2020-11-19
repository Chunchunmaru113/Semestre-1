//Proyecto Genshin Impact Calculator
//Oscar Eduardo Nieto Espitia
//A01705090

//Clase Personajes, maneja los recursos necesarios a farmear dependiendo del dia para 
//ascender al personaje dentro del juego Genshin Impact

#include <iostream>
using namespace std;

class Personajes{
  protected:
    string nombre;
    int nivel;
  public:
    Personajes();//Constructor por default
    Personajes (string nombre, int nivel);
    string get_nombre();//Getter
    int get_nivel();//Getter
};

//Constructor por default
Personajes::Personajes(){
  nombre="";
  nivel=0;
}
//Constructor donde recibe valores para llenar las variables de instancia
Personajes::Personajes(string n, int l){
  nombre=n;
  nivel=l;
}
//Getter del nombre del Personaje
string Personajes::get_nombre(){
  return nombre;
}
//Getter del nivel del Personaje
int Personajes::get_nivel(){
  return nivel;
}

//-------------------------------------------------------------------------------------
//Clase hija Ascension Personaje
class Personaje : public Personajes{
  public: //Metodos
    Personaje();
    Personaje(string,int,string,string,string,string,string,int); //Constructor
    void recursos_diarios(); //Recursos que se pueden farmear todos los dias
    void recursos_limitados(); //Recursos que se pueden farmear ciertos dias de la semana
    //Aqui solo uso getters ya que el nombre de los items no cambia
    //getters
    string get_materiales_de_ascension_jefe();
    string get_materiales_de_ascension_jefe2();
    string get_materiales_de_ascension_mundo();
    string get_materiales_de_ascension_enemigo();
    string get_materiales_de_ascension_limitado();

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
//Constructor por default
Personaje::Personaje(){
  nombre="";
  nivel=0;
}

//Constructor, inicializa Atributos
Personaje::Personaje(string n, int l,string materiales_de_ascension_jefeQ,string materiales_de_ascension_jefe2Q,string materiales_de_ascension_mundoQ,string materiales_de_ascension_enemigoQ,string materiales_de_ascension_limitadoQ, int diaQ){
   nombre=n;
   nivel=l;
   materiales_de_ascension_jefe = materiales_de_ascension_jefeQ;
   materiales_de_ascension_jefe2 = materiales_de_ascension_jefe2Q;
   materiales_de_ascension_mundo = materiales_de_ascension_mundoQ;
   materiales_de_ascension_enemigo = materiales_de_ascension_enemigoQ;
   materiales_de_ascension_limitado = materiales_de_ascension_limitadoQ;
   dia=diaQ;
}

//Getters
string Personaje::get_materiales_de_ascension_jefe(){
  return materiales_de_ascension_jefe;
}
string Personaje::get_materiales_de_ascension_jefe2(){
  return materiales_de_ascension_jefe2;
}
string Personaje::get_materiales_de_ascension_mundo(){
  return materiales_de_ascension_jefe;
}
string Personaje::get_materiales_de_ascension_enemigo(){
  return materiales_de_ascension_enemigo;
}
string Personaje::get_materiales_de_ascension_limitado(){
  return materiales_de_ascension_limitado;
}

//Farmeo de Recursos recursos_diarios
void Personaje::recursos_diarios(){
  cout<<"Recursos necesarios para ascender a "<<nombre<< " del nivel "<<nivel<<" a 80"<<endl;
  cout<<"37 fragmentos de "<<materiales_de_ascension_jefe<<endl;
  cout<<"26 "<<materiales_de_ascension_jefe2<<endl;
  cout<<"108 de "<<materiales_de_ascension_mundo<<endl;
  cout<<"216 de "<<materiales_de_ascension_enemigo<<endl<<endl;
}

//Farmeo de Talentos
//La intencion es que el usuario escriba el dia actual (lunes, martes...) y dependiendo de la fecha de la computadora te diga si ese dia puedes farmear ese material. El problema es que no se como obtener una variable que contenga el dia de acuerdo al reloj de la computadora.
void Personaje::recursos_limitados(){
  cout<<"Materiales de ascencion de talentos para "<<nombre<<endl;
  cout<<"Hoy puedes farmear "<<materiales_de_ascension_limitado<<endl<<endl;
}

//-------------------------------------------------------------------------------------
//Clase hija Ascension Personaje
class Arma: public Personajes{
  public: //Metodos
    Arma();
    Arma(string,int,string,string,string,int); //Constructor
    void recursos_diarios_arma(); //Recursos que se pueden farmear todos los dias
    void recursos_limitados_arma(); //Recursos que se pueden farmear ciertos dias de la semana
    //Aqui solo uso getters ya que el nombre de los items no cambia
    //getters
    string get_materiales_de_ascension_enemigo_arma();
    string get_materiales_de_ascension_enemigo2_arma();
    string get_materiales_de_ascension_limitado_arma();
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

//Constructor por default
Arma::Arma(){
  nombre="";
  nivel=0;
}

//Constructor, inicializa Atributos
Arma::Arma(string n,int l,string materiales_de_ascension_enemigo_armaQ,string materiales_de_ascension_limitado_armaQ,string materiales_de_ascension_enemigo2_armaQ,int diaQ){
   nombre=n;
   nivel=l;
   materiales_de_ascension_enemigo_arma = materiales_de_ascension_enemigo_armaQ;
   materiales_de_ascension_enemigo2_arma = materiales_de_ascension_enemigo2_armaQ;
   materiales_de_ascension_limitado_arma = materiales_de_ascension_limitado_armaQ;
   dia=diaQ;
}


//Getters
string Arma::get_materiales_de_ascension_enemigo_arma(){
  return materiales_de_ascension_enemigo_arma;
};

string Arma::get_materiales_de_ascension_enemigo2_arma(){
  return materiales_de_ascension_enemigo2_arma;
};

string Arma::get_materiales_de_ascension_limitado_arma(){
  return materiales_de_ascension_limitado_arma;
};

//Farmeo de Recursos recursos_diarios
void Arma::recursos_diarios_arma(){
  cout<<"Recursos DIARIOS necesarios para ascender el arma de "<<nombre<< " del nivel "<<nivel<<" a 80"<<endl;
  cout<<"216 de "<<materiales_de_ascension_enemigo_arma<<endl;
  cout<<"216 de "<<materiales_de_ascension_enemigo2_arma<<endl<<endl;
}

//Farmeo de Talentos
//La intencion es que el usuario escriba el dia actual (lunes, martes...) y dependiendo de la fecha de la computadora te diga si ese dia puedes farmear ese material. El problema es que no se como obtener una variable que contenga el dia de acuerdo al reloj de la computadora.
void Arma::recursos_limitados_arma(){
  cout<<"Materiales de ascencion de arma:"<<endl;
  cout<<"Hoy puedes farmear "<<materiales_de_ascension_limitado_arma<<endl<<endl;
}
