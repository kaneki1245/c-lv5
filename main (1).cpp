#include <iostream>
using namespace std;

void hesabla(int a, int b) {
    cout << "Cm" << a + b << endl;
    cout << "Frq" << a - b << endl;
    cout << "Hls" << a * b << endl;

    if (b != 0)
        cout << "blm" << (double)a / b << endl;
    else
        cout << "0-a bolme yoxdur!" << endl;
}

int main() {
    int x, y;
    cout << "Ik tm ed dax ed";
    cin >> x >> y;

    hesabla(x, y);

    return 0;
}
