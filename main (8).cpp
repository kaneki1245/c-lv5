#include <iostream>
using namespace std;

void kvadratHesabla(double teref) {
    double sahe = teref * teref;
    double perimetr = 4 * teref;

    cout << sahe << endl;
    cout  << perimetr << endl;
}

int main() {
    double a;
   
    cin >> a;

    kvadratHesabla(a);

    return 0;
}
