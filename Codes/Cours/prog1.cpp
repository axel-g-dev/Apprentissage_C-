#include <iostream>
using namespace std;

int ma_fonction(int a, int b) {
    return a + b;
}

int main() { 
    cout << "Programme" << endl;
    int x; 
    x = ma_fonction(10, 5);
    cout << "Le résultat est : " << x << endl;
return 0;
}

