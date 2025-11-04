#include <iostream>

using namespace std;

int main () {
    double nombre = 1.5;
    nombre++;
    cout << "La valeur actuelle est : " << nombre << endl;
    nombre--;
    cout << "La valeur actuelle est : " << nombre << endl;
    --nombre; 
    cout << "La valeur actuelle est : " << nombre << endl; 
    nombre+=1.7;
    cout << "La valeur actuelle est : " << nombre << endl;
    nombre-=0.4;
    cout << "La valeur actuelle est : " << nombre << endl;
    nombre*=2;
    cout << "La valeur actuelle est : " << nombre << endl;
    nombre/=3;
    cout << "La valeur actuelle est : " << nombre << endl;
    return 0;
}