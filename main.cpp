
//Proyecto Genshin Impact Calculator
//Oscar Eduardo Nieto Espitia
//A01705090

#include<iostream>
#include<ctime>
#include "Artefacto.h"
#include "Personajes.h"
using namespace std;

//----------------------------------------------------------------------------------------------------
//Menus
void menu (){
  cout<<"Menu: "<<endl;
  cout<<"1. Jean"<<endl;
  cout<<"2. Keching"<<endl;
  cout<<"3. Xiangling"<<endl;
  cout<<"4. Mona"<<endl;
  cout<<"5. Salir"<<endl<<endl;
}
//--------------------------------------------------------------------------------------------

int main(){
  //Objetos Personajes
  Personaje jean("Jean",0,"Turquesa vayuda","Semilla de Huracán","Semilla de diente de león","Máscara dañada","Defensar Militar",7);
  Personaje keching("Kequing",0,"Amatista vajrada","Prisma de Relámpago","Cor lapis","Néctar de Megaflor","Prosperidad",7);
  Personaje xiangling("Xiangling",0,"Ágata agnidus","Semilla de fuego eterno","Chile de Jueyun","Condensado de Slime","Esfuerzo",7);
  Personaje mona("Mona",0,"Lazurita varunada","Corazón purificador","Seta filanemo","Néctar de Megaflor","Defensar Militar",7);

  //Objetos Arma  
  Arma jeanA("Jean",0,"Condensado de Slime","Ramas secas de líneas Ley","Lobo boreal",7);
  Arma kechingA("Keching",0,"Máscara dañada","Fragmento de hueso frágil","Siderita oscura",7);
  Arma xianglingA("Xiangling",0,"Condensado de Slime","Ramas secas de líneas Ley","Lobo boreal",7);
  Arma monaA("Mona",0,"Pergamino guía","Cuerno pesado","Decarabian",7);

  //Objetos-Artefacto
  Artefacto Berserker = Artefacto("Berserker Set","Jefe de mundo",7);
  Artefacto caballeria_sanginaria = Artefacto("Caballería Sanguinaria Set","Estanque claro y caverna de la montaña",7);
  Artefacto petra_arcaica = Artefacto("Petra Arcaica Set","Dominio de Guyun",7);
  Artefacto corazon_guerrero = Artefacto("Corazón del Guerrero Set","Dominio de Guyun",7);

  int opcion = 0;{
  //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir.
    while(opcion < 5 && opcion > -1){
      menu();
      cin >> opcion;
      switch(opcion){
        case 1:
          jean.recursos_diarios();
          jeanA.recursos_diarios_arma();
          jean.recursos_limitados();
          jeanA.recursos_limitados_arma();
          caballeria_sanginaria.recoleccion_artefactos();
          break;
        case 2:
          keching.recursos_diarios();
          kechingA.recursos_diarios_arma();
          keching.recursos_limitados();
          kechingA.recursos_limitados_arma();
          caballeria_sanginaria.recoleccion_artefactos();
          break;
        case 3:
          xiangling.recursos_diarios();
          xianglingA.recursos_diarios_arma();
          xiangling.recursos_limitados();
          xianglingA.recursos_limitados_arma();
          petra_arcaica.recoleccion_artefactos();
          break;
        case 4:
          mona.recursos_diarios();
          monaA.recursos_diarios_arma();
          mona.recursos_limitados();
          monaA.recursos_limitados_arma();
          corazon_guerrero.recoleccion_artefactos();
          break;
        
      }
    }
  }
}


