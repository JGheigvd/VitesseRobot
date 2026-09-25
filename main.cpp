#include <iostream>
#include <cmath>

int main() {

    double const b = 3;
    double const L1 = 10;
    double const L2 = 6;

    double a = L1-L2;
    double L3t = (a*a)*(b*b);
    double L3 = std::sqrt(L3t);

    double T1 = L2/5;
    double T2 = L3/2;

    double Ttot = T1 + T2;

    std::cout<<"Voici le temps total que va prendre le robot : "<<Ttot;


    return 0;
}
