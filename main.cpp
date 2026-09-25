#include <iostream>
#include <cmath>

int main() {
    // on demande a l'utilisateur les valeurs de bases
    double const b = 3;
    double const longueur = 10;
    double L1;
    std::cout << "Entrez la valeur de la distance parcouru sur la route : ";
    std::cin >> L1;
    while (L1 > longueur) {
        std::cout <<"Veuillez entrer une valeur admissible pour la distance parcouru sur la route : ";
        std::cin >> L1;
    }

    double a = longueur-L1; // on trouve le coté inconnu du triangle
    double L3 = std::sqrt((a*a)+(b*b)); //on trouve l'hypothénuse

    double T1 = L1/5; // on trouve le temps de la partie route
    double T2 = L3/2; // on trouve le temps de la partie rocheuse

    double Ttot = T1 + T2; // on additione les deux temps

    std::cout<<"Voici le temps total que va prendre le robot : "<<Ttot<<" heures"; //phrase de fin


    return 0;
}
