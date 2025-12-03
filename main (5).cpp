#include <iostream>
using namespace std;

double celsiusToFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    double temp;
    int secim;

   
    cin >> temp;
    cin >> secim;

    if (secim == 1) {
        cout <<  celsiusToFahrenheit(temp) << " F" << endl;
    }
    else if (secim == 2) {
        cout <<  fahrenheitToCelsius(temp) << " C" << endl;
    }
    else {
        cout << "Yanlis secim etdiniz!" << endl;
    }

    return 0;
}
