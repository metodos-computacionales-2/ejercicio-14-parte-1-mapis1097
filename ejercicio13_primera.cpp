#include <iostream>

#include <stdlib.h>

using namespace std;
float explicita(float ini, float w, float delT);
//Ejecuta el programa
int main(void){

  int t;

  float omega = 0.1;

  float deltaT = 0.1/omega;
   
  float integral;
   
  float inicial = 1;
   
  float integral_implicita;
   
 for (int t =0; t< 4/omega; t+=deltaT){
        integral = explicita(inicial,omega,deltaT);
        inicial = integral;
        cout<<integral<<endl;
    }
   cout << endl;
return 0;
}


//metodo que retorna la integral explicita
float explicita(float ini, float w, float delT){
    return (ini - (delT*w*ini));
}