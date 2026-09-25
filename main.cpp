#include <iostream>
#include <cmath>

int main() {
    // on demande a l'utilisateur les valeurs de bases
    double b;
    std::cout << "Entrez la valeur du cote oppose du triangle : ";
    std::cin >> b;
    double L1;
    std::cout << "Entrez la valeur de la longueur totale : ";
    std::cin >> L1;
    double L2;
    std::cout << "Entrez la valeur de la distance parcouru sur la route : ";
    std::cin >> L2;

    double a = L1-L2; // on trouve le coté inconnu du triangle
    double L3 = std::sqrt((a*a)+(b*b)); //on trouve l'hypothénuse

    double T1 = L2/5; // on trouve le temps de la partie route
    double T2 = L3/2; // on trouve le temps de la partie rocheuse

    double Ttot = T1 + T2; // on additione les deux temps

    std::cout<<"Voici le temps total que va prendre le robot : "<<Ttot<<" heures"; //phrase de fin


    return 0;
}
