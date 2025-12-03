#include <iostream>
using namespace std;

double ortalama(double a, double b, double c) {
    return (a + b + c) / 3.0; 
}

int main() {
    double x, y, z;
    
    cin >> x >> y >> z;

    double netice = ortalama(x, y, z);
    cout << "ort" << netice << endl;

    return 0;
}
