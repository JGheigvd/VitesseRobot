#include <iostream>
#include <cmath>

int main() {
// on définit les valeurs connus
    double const b = 3; 
    double const L1 = 10;
    double const L2 = 6;

    double a = L1-L2; // on trouve le coté inconnu du triangle
    double L3 = std::sqrt((a*a)+(b*b)); //on trouve l'hypothénuse

    double T1 = L2/5; // on trouve le temps de la partie route
    double T2 = L3/2; // on trouve le temps de la partie rocheuse

    double Ttot = T1 + T2; // on additione les deux temps

    std::cout<<"Voici le temps total que va prendre le robot : "<<Ttot<<" heures"; //phrase de fin


    return 0;
}
