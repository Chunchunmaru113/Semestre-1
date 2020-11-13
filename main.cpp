
//Proyecto Genshin Impact Calculator
//Oscar Eduardo Nieto Espitia
//A01705090

#include<iostream>
#include<ctime>
#include "Personaje.h"
#include "Arma.h"
#include "Artefacto.h"
using namespace std;

//----------------------------------------------------------------------------------------------------
//Menus
void menu (){
  cout<<"1. Personajes"<<endl;
  cout<<"2. Armas"<<endl;
  cout<<"3. Artefactos"<<endl;
  cout<<"4. Salir"<<endl<<endl;
}

void personajes (){
  cout<<"1. Keching"<<endl;
  cout<<"2. Xiangling"<<endl;
  cout<<"3. Mona"<<endl;
  cout<<"4. Jean"<<endl;
  cout<<"5. Salir"<<endl<<endl;
}

void armas (){
  cout<<"1. Espada Negra"<<endl;
  cout<<"2. Prototipo Resentimiento"<<endl;
  cout<<"3. Codice de Favonius"<<endl;
  cout<<"4. Flauta"<<endl;
  cout<<"5. Salir"<<endl<<endl;
}

void artefactos (){
  cout<<"1. Berserker Set"<<endl;
  cout<<"2. Caballería Sanguinaria Set"<<endl;
  cout<<"3. Petra Arcaica Set"<<endl;
  cout<<"4. Corazón del Guerrero Set"<<endl;
  cout<<"5. Salir"<<endl<<endl;
}
//--------------------------------------------------------------------------------------------

int main(){
  //Objetos-Personajes
  Personaje keching= Personaje ("Amatista vajrada","Prisma de Relámpago","Cor lapis","Néctar de Megaflor","Prosperidad",7);
  Personaje xiangling= Personaje("Ágata agnidus","Semilla de fuego eterno","Chile de Jueyun","Condensado de Slime","Esfuerzo",7);
  Personaje mona= Personaje("Lazurita varunada","Corazón purificador","Seta filanemo","Néctar de Megaflor","Defensar Militar",7);
  Personaje jean= Personaje("Turquesa vayuda","Semilla de Huracán","Semilla de diente de león","Máscara dañada","Defensar Militar",7);
  //Objetos-Arma
  Arma espada_negra= Arma ("Condensado de Slime","Ramas secas de líneas Ley","Lobo boreal",7);
  Arma prototipo_resentimiento= Arma ("Máscara dañada","Fragmento de hueso frágil","Siderita oscura",7);
  Arma codice_favonius= Arma ("Pergamino guía","Cuerno pesado","Decarabian",7);
  Arma flauta= Arma ("Condensado de Slime","Ramas secas de líneas Ley","Lobo boreal",7);
  //Objetos-Artefacto
  Artefacto Berserker = Artefacto("Berserker Set","Jefe de mundo",7);
  Artefacto caballeria_sanginaria = Artefacto("Caballería Sanguinaria Set","Estanque claro y caverna de la montaña",7);
  Artefacto petra_arcaica = Artefacto("Petra Arcaica Set","Dominio de Guyun",7);
  Artefacto corazon_guerrero = Artefacto("Corazón del Guerrero Set","Dominio de Guyun",7);

  bool bandera = true;
  while (bandera){
    menu();
    int opcion;
    std::cout << "Introduce una opcion: ";
    std::cin >> opcion;
    //Personajes
    if (opcion==1){
      personajes();
      int opcion1;
      std::cout << "Introduce una opcion: ";
      std::cin >> opcion1;
      if (opcion1==1){
        keching.recursos_diarios();
      }
      else if (opcion1==2){
        xiangling.recursos_diarios();
      }
      else if (opcion1==3){
        mona.recursos_diarios();
      }
      else if (opcion1==4){
        jean.recursos_diarios();
      }
      else {

      }
    }

    //Armas
    else if (opcion==2){
      armas();
      int opcion1;
      std::cout << "Introduce una opcion: ";
      std::cin >> opcion1;
      if (opcion1==1){
        espada_negra.recursos_diarios_arma();
      }
      else if (opcion1==2){
        prototipo_resentimiento.recursos_diarios_arma();
      }
      else if (opcion1==3){
        codice_favonius.recursos_diarios_arma();
      }
      else if (opcion1==4){
        flauta.recursos_diarios_arma();
      }
      else {

      }
    }
    //Artefactos
    else if (opcion==3){
      artefactos();
      int opcion1;
      std::cout << "Introduce una opcion: ";
      std::cin >> opcion1;
      if (opcion1==1){
        Berserker.recoleccion_artefactos();
      }
      else if (opcion1==2){
        caballeria_sanginaria.recoleccion_artefactos();
      }
      else if (opcion1==3){
        petra_arcaica.recoleccion_artefactos();
      }
      else if (opcion1==4){
        corazon_guerrero.recoleccion_artefactos();
      }
      else {

      }
    }
    //Salir
    else{

    }
  }


   keching.recursos_diarios();
   return 0;
}