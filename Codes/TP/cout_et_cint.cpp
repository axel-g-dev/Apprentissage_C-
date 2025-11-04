#include <iostream> 

using namespace std;
int main() { 
    string prenom;
    cout << "Prénom ? "; 
    cin >> prenom; // Lit un mot (jusqu'au premier espace)
    cout << "Bonjour " << prenom << " !" << endl;  
    double age;
    cout << "Quel age avez vous ? "; 
    cin >> age;
    cin.ignore(); //  Évite que getline saute la ligne
    cout << prenom << " est né en " << 2025 - age << endl; 
    return 0;
}
