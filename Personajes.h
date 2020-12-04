//Proyecto Genshin Impact Calculator
//Oscar Eduardo Nieto Espitia
//A01705090

#include <iostream>
#include<ctime> 
#include<string>
using namespace std;

/*La siguiente funcion define el dia de la semana dependiendo del reloj del usuario.
Esta funcion es prioritaria para el correcto funcionamiento del programa ya que el juego
en el que me estoy basando para hacer el proyecto depende el dia en el que entras.
*/

/**
 * Define el dia de la semana
 *
 * @param
 * @return dia
 */
int dia_semana(){
  time_t tt;
  struct tm * ti;
  time (&tt);
  ti = localtime(&tt);
  string fecha=asctime(ti);
  string dia=fecha.substr(0,3);
  int dias=0;
  if (dia=="Mon"){
    dias=0;
  }
  else if (dia=="Thu"){
    dias=1;
  }
  else if (dia=="Wed"){
    dias=2;
  }
  else if (dia=="Tue"){
    dias=3;
  }
  else if (dia=="Fri"){
    dias=4;
  }
  else if (dia=="Sat"){
    dias=5;
  }
  else (dia=="Sun");{
    dias=6;
  }
  return dias;
}

/*La clase PADRE Personajes contiene a los personajes y dependiendo de su nivel modificara los recursos necesarios 
de ascension de personaje
*/
class Personajes{
  protected:
    string nombre;
    int nivel;
  public:
    Personajes();//Constructor por default
    Personajes (string nombre, int nivel);
    string get_nombre();//Getter
    int get_nivel();//Getter
    void set_nivel(int n);//Setter
};

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Personaje
 */
Personajes::Personajes(){
  nombre="";
  nivel=0;
}

/**
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @param string n: el nombre del personaje, int l: el nivel del personaje
 * @return Objeto Personaje
*/
Personajes::Personajes(string n, int l){
  nombre=n;
  nivel=l;
}

//Getter del nombre del Personaje
/* getter nombre
*
* @param
* @return string: nombre del personaje
*/
string Personajes::get_nombre(){
  return nombre;
}

//Getter del nivel del Personaje
/* getter nivel
*
* @param
* @return int: nivel del personaje
*/
int Personajes::get_nivel(){
  return nivel;
}

//Setter del nivel del Personaje
/* setter nivel
*
* @param int:n nivel del Personaje
* @return 
*/
void Personajes::set_nivel(int n){
  nivel=n;
}

//-------------------------------------------------------------------------------------
//Clase hija Ascension Personaje
/*Esta clase agrupa los materiales necesarios para ascender a un personaje de nivel
y dependiendo del dia que sea imprimira si se puede farmear o no
*/
class Personaje : public Personajes{
  public: //Metodos
    Personaje();
    Personaje(string,int,string,string,string,string,string,int); //Constructor
    void recursos_diarios(); //Recursos que se pueden farmear todos los dias
    void recursos_limitados(); //Recursos que se pueden farmear ciertos dias de la semana

    //Aqui solo uso getters ya que el nombre de los items no cambia
    //getters
    string get_nombre();
    int get_nivel();
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

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Personaje
*/
Personaje::Personaje(){
  nombre="";
  nivel=0;
  materiales_de_ascension_jefe="";
  materiales_de_ascension_jefe2="";
  materiales_de_ascension_mundo="";
  materiales_de_ascension_enemigo="";
  materiales_de_ascension_limitado="";
  dia=0;
}

/**
 * Constructor que recibe nombre, nivel y materiales de ascension de personaje
 *
 * @param 
 * @return Objeto personaje
*/
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

//Getter del nombre del Personaje
/* getter nombre
*
* @param
* @return string: nombre del personaje
*/
string Personaje::get_nombre(){
  return nombre;
}

//Getter del nivel del Personaje
/* getter nivel
*
* @param
* @return int: nivel del personaje
*/
int Personaje::get_nivel(){
  return nivel;
}

//Getter de Materiales de Ascension que solo se puede obtener por un Jefe
/* getter get_materiales_de_ascension_jefe
*
* @param
* @return string: Materiales de Ascension
*/
string Personaje::get_materiales_de_ascension_jefe(){
  return materiales_de_ascension_jefe;
}

//Getter de Materiales de Ascension que solo se puede obtener por un Jefe 2
/* getter get_materiales_de_ascension_jefe2
*
* @param
* @return string: Materiales de Ascension2
*/
string Personaje::get_materiales_de_ascension_jefe2(){
  return materiales_de_ascension_jefe2;
}

//Getter de Materiales de Ascension que se consiguen en el mundo
/* getter get_materiales_de_ascension_mundo
*
* @param
* @return string: Materiales mundo
*/
string Personaje::get_materiales_de_ascension_mundo(){
  return materiales_de_ascension_jefe;
}

//Getter de Materiales de Ascension que se consiguen en el mundo2
/* getter get_materiales_de_ascension_mundo2
*
* @param
* @return string: Materiales mundo2
*/
string Personaje::get_materiales_de_ascension_enemigo(){
  return materiales_de_ascension_enemigo;
}

//Getter de Materiales de Ascension solo se consiguen cierto dia de la semana
/* getter get_materiales_de_ascension_limitado
*
* @param
* @return string: Materiales de ascension limitados
*/
string Personaje::get_materiales_de_ascension_limitado(){
  return materiales_de_ascension_limitado;
}


//Farmeo de Recursos recursos_diarios
//Recursos que se pueden farmear todos los dias
void Personaje::recursos_diarios(){
  cout<<"Recursos necesarios para ascender a "<<nombre<< " del nivel "<<nivel<<" a 80"<<endl;
  cout<<"37 fragmentos de "<<materiales_de_ascension_jefe<<endl;
  cout<<"26 "<<materiales_de_ascension_jefe2<<endl;
  cout<<"108 de "<<materiales_de_ascension_mundo<<endl;
  cout<<"216 de "<<materiales_de_ascension_enemigo<<endl<<endl;
}

//Farmeo de Talentos
//Dependiendo del dia te dira si hoy puedes farmear estos recursos
void Personaje::recursos_limitados(){
  int personaje_limitado=dia_semana();
  cout<<"Materiales de ascencion de talentos para "<<nombre<<endl;
  if (personaje_limitado==dia){
    cout<<"Hoy puedes farmear "<<materiales_de_ascension_limitado<<endl<<endl;
  }
  else 
    cout<<"Hoy no puedes farmear materiales de ascension para "<<nombre<<endl<<endl;
}

//-------------------------------------------------------------------------------------
//Clase hija Ascension Personaje
//La clase Arma tiene como finalidad agrupar los materiales para ascender el arma del personaje
//tiene mas o menos el mismo procedimiento que la clase hija anterior, solo que esta clase tiene un
//atributo menos
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
  materiales_de_ascension_enemigo_arma="";
  materiales_de_ascension_enemigo2_arma="";
  materiales_de_ascension_limitado_arma="";
  dia=0;
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
  cout<<"Farmeo de recursos DIARIOS necesarios para ascender el arma de "<<nombre<< " del nivel "<<nivel<<" a 80"<<endl;
  cout<<"216 de "<<materiales_de_ascension_enemigo_arma<<endl;
  cout<<"216 de "<<materiales_de_ascension_enemigo2_arma<<endl<<endl;
}

//Farmeo de Talentos
//La intencion es que el usuario escriba el dia actual (lunes, martes...) y dependiendo de la fecha de la computadora te diga si ese dia puedes farmear ese material. El problema es que no se como obtener una variable que contenga el dia de acuerdo al reloj de la computadora.
void Arma::recursos_limitados_arma(){
  cout<<"Materiales de ascencion de arma:"<<endl;
  int arma_limitado=dia_semana();
  if (dia==arma_limitado){
    cout<<"Hoy puedes farmear "<<materiales_de_ascension_limitado_arma<<endl<<endl;
  }
  else
    cout<<"Hoy no puedes farmear materiales de ascension para el arma de "<<nombre<<endl<<endl;
}
