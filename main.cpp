
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
  cout<<"-----------------------------------------------------------"<<endl;
  cout<<"Menu: "<<endl;
  cout<<"1. Jean"<<endl;
  cout<<"2. Keching"<<endl;
  cout<<"3. Xiangling"<<endl;
  cout<<"4. Mona"<<endl;
  cout<<"5. Salir"<<endl;
  cout<<"-----------------------------------------------------------"<<endl;
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

  //-------------------------------------------
  //Objetos Agregacion
  //Dominio
  Dominio guyun("Guyun",45);
  Dominio canion("Canion del olvido",45);
  //Set
  Set berserk("Berserker", "+12% Probabilidad Critica");
  Set fuego("fuego", "+15% danio fuego");

  //Objetos-Artefacto
  Artefacto pluma(canion,berserk);
  Artefacto rosa(guyun,fuego);

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
          pluma.printInfo();
          break;
        case 2:
          keching.recursos_diarios();
          kechingA.recursos_diarios_arma();
          keching.recursos_limitados();
          kechingA.recursos_limitados_arma();
          pluma.printInfo();
          break;
        case 3:
          xiangling.recursos_diarios();
          xianglingA.recursos_diarios_arma();
          xiangling.recursos_limitados();
          xianglingA.recursos_limitados_arma();
          rosa.printInfo();
          break;
        case 4:
          mona.recursos_diarios();
          monaA.recursos_diarios_arma();
          mona.recursos_limitados();
          monaA.recursos_limitados_arma();
          rosa.printInfo();
          break;
        
      }
    }
  }
}


